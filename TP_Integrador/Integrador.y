%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "tabla.c"

int yylex();

FILE* yyin;

int yywrap(){
	return(1);
}

void yyerror (char const *s) {}

int contadorParametros = 0;
int linea = 1;

Tabla* simboloAux;

TipoParametro* listaParametrosAux = NULL;

%}

%union {
char cadena[50];
int entero;
float real;
struct NombreYTipo
        {
                char nombre[50];
                char tipo[15];
        } nombreTipo;
}

%token <cadena> TIPO_DATO
%token <cadena> IDENTIFICADOR
%token <cadena> LITERAL_CADENA
%token <entero> CONSTANTE_DECIMAL
%token <entero> CONSTANTE_OCTAL
%token <entero> CONSTANTE_HEXADECIMAL
%token <real>   CONSTANTE_REAL
%token <entero> CONSTANTE_CARACTER
%token <cadena> OPER_ADITIVO
%token <cadena> OPER_MULTIPLICATIVO
%token <cadena> OPER_RELACIONAL
%token <cadena> OPER_UNARIO
%token <cadena> OPER_IGUALDAD
%token <cadena> OPER_ASIGNACION
%token <cadena> OPER_INCREMENTO
%token <cadena> OPER_SIZEOF
%token <cadena> AND
%token <cadena> OR
%token <cadena> IF
%token <cadena> SWITCH
%token <cadena> ELSE
%token <cadena> FOR
%token <cadena> WHILE
%token <cadena> DO
%token <cadena> RETURN

%type <cadena> unaVariableSimple
%type <cadena> error
%type <nombreTipo> expAsignacion
%type <nombreTipo> expAditiva
%type <nombreTipo> expRelacional
%type <nombreTipo> expCondicional
%type <nombreTipo> expAnd
%type <nombreTipo> expOr
%type <nombreTipo> expIgualdad
%type <nombreTipo> expMultiplicativa
%type <nombreTipo> expUnaria
%type <nombreTipo> expPostfijo
%type <nombreTipo> expPrimaria
%type <cadena> constante

%%

input:  /* vacio */
        | input line
;

line:   declaracion '\n'        {linea++;}
        | sentencia '\n'        {linea++;}
        | error '\n'            {printf("\nSe detecto un error sintactico en la linea %i.", linea); linea++;}     
;

/* -----------------------------EXPRESIONES----------------------------- */

expresion:      expAsignacion
;

expAsignacion:  expCondicional                                  {$<nombreTipo>$ = $<nombreTipo>1;}
                | expUnaria OPER_ASIGNACION expAsignacion       {$<nombreTipo>$ = $<nombreTipo>1;}
;

expCondicional: expOr                                           {$<nombreTipo>$ = $<nombreTipo>1;}
                | expOr '?' expresion ':' expCondicional        {$<nombreTipo>$ = $<nombreTipo>1;}
;

expOr:  expAnd                                                  {$<nombreTipo>$ = $<nombreTipo>1;}
        | expOr OR expAnd                                       {$<nombreTipo>$ = $<nombreTipo>1;}
;

expAnd: expIgualdad                                             {$<nombreTipo>$ = $<nombreTipo>1;}
        | expAnd AND expIgualdad                                {$<nombreTipo>$ = $<nombreTipo>1;}
;

expIgualdad:    expRelacional                                   {$<nombreTipo>$ = $<nombreTipo>1;}
                | expIgualdad OPER_IGUALDAD expRelacional       {$<nombreTipo>$ = $<nombreTipo>1;}
;

expRelacional:  expAditiva                                      {$<nombreTipo>$ = $<nombreTipo>1;}
                | expRelacional OPER_RELACIONAL expAditiva      {$<nombreTipo>$ = $<nombreTipo>1;}
;

expAditiva:     expMultiplicativa                               {$<nombreTipo>$ = $<nombreTipo>1;}
                | expAditiva OPER_ADITIVO expMultiplicativa     {$<nombreTipo>$ = $<nombreTipo>1;}
;

expMultiplicativa:      expUnaria                                               {$<nombreTipo>$ = $<nombreTipo>1;}
                        | expMultiplicativa OPER_MULTIPLICATIVO expUnaria       {$<nombreTipo>$ = $<nombreTipo>1; if (strcmp($<nombreTipo>1.tipo, $<nombreTipo>3.tipo) != 0) {printf("\nError de tipos en operacion multiplicativa. En la linea %i", linea);}}
;

expUnaria:      expPostfijo                     {$<nombreTipo>$ = $<nombreTipo>1;}
                | OPER_INCREMENTO expUnaria     {$<nombreTipo>$ = $<nombreTipo>2;}
                | OPER_UNARIO expUnaria         {$<nombreTipo>$ = $<nombreTipo>2;}
                | OPER_SIZEOF '(' TIPO_DATO ')'
;

expPostfijo:    expPrimaria                                     {$<nombreTipo>$ = $<nombreTipo>1;}
                | expPostfijo '[' expresion ']'
                | expPostfijo '(' opcionListaArgumentos ')'     {simboloAux = buscarSimbolo($<nombreTipo>1.nombre); if (simboloAux != NULL) {if (compararParametros(&(simboloAux->tiposParametros), &listaParametrosAux) != 0) {printf("\nError semantico: cantidad o tipos de parametros incorrectos en invocacion de la funcion %s. En la linea %i", simboloAux->nombre, linea);}}
                                                                        else {printf("\nError semantico: la funcion %s es invocada sin previa declaracion. En la linea %i", $<cadena>1, linea);}
                                                                listaParametrosAux = NULL;}
;

opcionListaArgumentos:  /* vacio */
                        | expAsignacion                         {insertarArgumento(&listaParametrosAux, $<nombreTipo>1.tipo);}
                        | listaArgumentos ',' expAsignacion     {insertarArgumento(&listaParametrosAux, $<nombreTipo>3.tipo);}
;

listaArgumentos:        expAsignacion                           {insertarArgumento(&listaParametrosAux, $<nombreTipo>1.tipo);}
                        | listaArgumentos ',' expAsignacion     {insertarArgumento(&listaParametrosAux, $<nombreTipo>3.tipo);}
;

expPrimaria:    IDENTIFICADOR           {simboloAux = buscarSimbolo($<cadena>1); if (simboloAux != NULL) {strcpy($<nombreTipo>$.nombre, simboloAux->nombre); strcpy($<nombreTipo>$.tipo, simboloAux->tipo);}}
                | constante             {strcpy($<nombreTipo>$.nombre, ""); strcpy($<nombreTipo>$.tipo, $<cadena>1);}
                | LITERAL_CADENA        {strcpy($<nombreTipo>$.nombre, ""); strcpy($<nombreTipo>$.tipo, "char*");}
                | '(' expresion ')'     
;

/* -------------------DECLARACIONES Y DEFINICIONES---------------------- */

declaracion:    declaracionVariablesSimples 
                | declaracionFunciones   
                | definicionFunciones    
;

declaracionVariablesSimples:    TIPO_DATO unaVariableSimple ';' {simboloAux = buscarSimbolo($<cadena>2); if (simboloAux == NULL) {agregarSimbolo($<cadena>2, $<cadena>1); printf("\nSe declara la variable %s de tipo %s.", $<cadena>2, $<cadena>1);} else {printf("\nError: doble declaracion de la variable '%s'.", $<cadena>2);}}
;

unaVariableSimple:      IDENTIFICADOR opcionInicializacion      {strcpy($<cadena>$, $<cadena>1);}
;

opcionInicializacion:   /* vacio */
                        | OPER_ASIGNACION expCondicional
;

declaracionFunciones:   TIPO_DATO IDENTIFICADOR '(' opcionArgumentosConTipo ')' ';' {simboloAux = agregarSimbolo($<cadena>2, $<cadena>1); simboloAux->tiposParametros = listaParametrosAux; listaParametrosAux = NULL; printf("\nSe declara la funcion %s de tipo %s que recibe %i parametro/s (", $<cadena>2, $<cadena>1, contadorParametros); contadorParametros = 0; mostrarTipos(&(simboloAux->tiposParametros)); printf(").");}
;

opcionArgumentosConTipo:        /* vacio */ 
                                | TIPO_DATO opcionReferencia IDENTIFICADOR                              {contadorParametros++;       push(&listaParametrosAux, $<cadena>1);}
                                | TIPO_DATO opcionReferencia IDENTIFICADOR ',' argumentosConTipo        {contadorParametros++;       push(&listaParametrosAux, $<cadena>1);}
;

argumentosConTipo:      TIPO_DATO opcionReferencia IDENTIFICADOR                                        {contadorParametros++;       push(&listaParametrosAux, $<cadena>1);}
                        | TIPO_DATO opcionReferencia IDENTIFICADOR ',' argumentosConTipo                {contadorParametros++;       push(&listaParametrosAux, $<cadena>1);}
;

opcionReferencia:       /* vacio */
                        | '&'
;

definicionFunciones:    TIPO_DATO IDENTIFICADOR '(' opcionArgumentosConTipo ')' sentencia {simboloAux = agregarSimbolo($<cadena>2, $<cadena>1); simboloAux->tiposParametros = listaParametrosAux; listaParametrosAux = NULL; printf("\nSe define la funcion %s de tipo %s que recibe %i parametro/s (", $<cadena>2, $<cadena>1, contadorParametros); contadorParametros = 0; mostrarTipos(&(simboloAux->tiposParametros)); printf(").");}

/* -----------------------------GRAMATICA DE LAS SENTENCIAS------------------------------ */

sentencia:      sentenciaCompuesta
                | sentenciaExpresion
                | sentenciaSeleccion
                | sentenciaIteracion
                | sentenciaSalto
;

sentenciaCompuesta:     '{' opcionListaDeclaraciones opcionListaSentencias '}'  
;

opcionListaDeclaraciones:       /* vacio */
                                | declaracion                           
                                | opcionListaDeclaraciones declaracion
;

listaSentencias:        sentencia                       
                        | listaSentencias sentencia  
;

opcionListaSentencias:  /* vacio*/
                        | sentencia                    
                        | listaSentencias sentencia   
;

sentenciaExpresion:     ';'                     
                        | expresion ';'
;

sentenciaSeleccion:     IF '(' expresion ')' sentencia                  
                        | IF '(' expresion ')' sentencia ELSE sentencia 
                        | SWITCH '(' expresion ')' sentencia            
;

sentenciaIteracion:     WHILE '(' expresion ')' sentencia                                               
                        | DO sentencia WHILE '(' expresion ')' ';'                                      
                        | FOR '(' opcionExpresion ';' opcionExpresion ';' opcionExpresion ')' sentencia 
;

sentenciaSalto: RETURN opcionExpresion ';'      
;

opcionExpresion:        /* vacio */
                        | expresion
;

/* -------------------------------CONSTANTES---------------------------- */

constante:      CONSTANTE_DECIMAL       {strcpy($<cadena>$, "int");}
                | CONSTANTE_OCTAL       {strcpy($<cadena>$, "int");}        
                | CONSTANTE_HEXADECIMAL {strcpy($<cadena>$, "int");} 
                | CONSTANTE_REAL        {strcpy($<cadena>$, "double");}         
                | CONSTANTE_CARACTER    {strcpy($<cadena>$, "char");}                     
;

%%

int main ()
{
        yyin = fopen("entrada.c", "r");
        yyparse ();
}