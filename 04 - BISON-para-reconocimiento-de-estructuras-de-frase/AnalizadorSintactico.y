  
%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define YYDEBUG 1

int flag_error = 0; 

char* nombre;
char* tipoDeDato;

extern FILE* yyin;
FILE* yyout;



int yylex();

int yywrap()
{
    return(1);
}

int numeroDeLinea = 1;

void yyerror (char *smth) {
   fprintf (yyout,"error sintactico = %s\n", smth);
}

%}

%token <entero> NUMERO_ENTERO
%token <real> NUMERO_REAL
%token <texto> IDENTIFICADOR
%token <texto> LITERALCADENA
%token <caracter> CARACTER
%token <entero> error

%type <texto> ID

%token ERRORLEXICO
%token P_INC
%token P_DEC 
%token DISTINTO 
%token IGUAL 
%token AND 
%token OR 
%token DIV_IGUAL
%token POR_IGUAL
%token MENOS_IGUAL
%token MAS_IGUAL 
%token MENOR_IGUAL
%token MAYOR_IGUAL
%token MOD_IGUAL 
%token BIT_SHIFT_L
%token BIT_SHIFT_R
%token FLECHITA
%token DO
%token WHILE
%token IF
%token ELSE
%token FOR
%token RETURN
%token GOTO
%token STATIC
%token EXTERN
%token CONST
%token VOLATILE
%token STRUCT
%token UNION
%token TYPEDEF
%token AUTO
%token REGISTER
%token CHAR
%token INT
%token FLOAT
%token LONG
%token SHORT
%token SIGNED
%token UNSIGNED
%token VOID
%token ENUM
%token DOUBLE
%token SIZEOF
%token SWITCH
%token CASE
%token BREAK
%token DEFAULT
%token CONTINUE

%union {
    int entero;
    char* texto;
    char caracter;
    float real;
}
 
 
%% 

input:  /* na de na */
        | input line
;

line:   '\n'                                    {fprintf(yyout,"\n")}{numeroDeLinea++;}
        | sentencia                             {fprintf(yyout,"SENTENCIAS\n")}{numeroDeLinea++;}      
        | declaracion                           {fprintf(yyout,"DECLARACIONES\n")}{numeroDeLinea++;}
        | definicionDeFunciones                   {fprintf(yyout,"FUNCIONES\n");}{numeroDeLinea++;}
        | ERRORLEXICO                           {fprintf(yyout, "\nSE DETECTO UN ERROR LEXICO: %s , EN LA LINEA : %d \n", $<texto>1, numeroDeLinea);}
;

/*EXPRESIONES*/

expresion: expresionAsignacion                                         {fprintf(yyout,"EXPRESIONES\n");}
        |expresion ';' expresionAsignacion                              {fprintf(yyout,"EXPRESIONES\n");}
;

expresionAsignacion:      expresionUnaria operadorAsignacion expresionAsignacion      
                | expresionCondicional                        
                | error                                 
;

operadorAsignacion: '=' | DIV_IGUAL | POR_IGUAL | MENOS_IGUAL | MAS_IGUAL | MOD_IGUAL 
;

expresionCondicional: expresionOr
                | expresionOrOP expresion ':' expresionCondicional          {fprintf(yyout, "Se logro derivar por : \n");}
;

expresionOr:  expresionAnd
        | expresionOr OR expresionAnd                       {fprintf(yyout, "Se logro derivar por || \n");}
;

expresionOrOP: /* na de na */
|         | expresionOr
;

expresionAnd: expresionIgualdad
        | expresionAnd AND expresionIgualdad             {fprintf(yyout, "Se logro derivar por && \n");}
;

expresionIgualdad:    expresionRelacional
                | expresionIgualdad IGUAL expresionRelacional       {fprintf(yyout, "Se logro derivar por == \n");}
                | expresionIgualdad DISTINTO expresionRelacional    {fprintf(yyout, "Se logro derivar por != \n");}
;            
expresionRelacional:  expresionAditiva
                | expresionRelacional MAYOR_IGUAL expresionAditiva  {fprintf(yyout, "Se logro derivar por >= \n");}
                | expresionRelacional '>' expresionAditiva          {fprintf(yyout, "Se logro derivar por > \n");}
                | expresionRelacional MENOR_IGUAL expresionAditiva  {fprintf(yyout, "Se logro derivar por <= \n");}
                | expresionRelacional '<' expresionAditiva          {fprintf(yyout, "Se logro derivar por >= \n");}
;

/*expresionCorrimiento: expresionAditiva
                |expresionCorrimiento BIT_SHIFT_L expresionAditiva          {fprintf(yyout, "Se logro derivar por << \n");}
                |expresionAditiva BIT_SHIFT_R expresionCorrimiento          {fprintf(yyout, "Se logro derivar por >> \n");}
;*/
                
expresionAditiva:     expresionMultiplicativa
                | expresionAditiva '+' expresionMultiplicativa      {fprintf(yyout, "Se logro derivar por + \n");}
                | expresionAditiva '-' expresionMultiplicativa      {fprintf(yyout, "Se logro derivar por - \n");}
;

expresionMultiplicativa: expresionConversion
                        |expresionMultiplicativa '/' expresionConversion    { if($<real>3 == 0){printf("ERROR AL DIVIDIR POR 0"); return 0;}else $<real>$ = $<real>1 / $<real>3; fprintf(yyout,"Se logro derivar por / \n");}
                        |expresionMultiplicativa '*' expresionConversion    {fprintf(yyout, "Se logro derivar por * \n");}
                        |expresionMultiplicativa '%' expresionConversion    {fprintf(yyout, "Se logro derivar por % \n");}  
;

expresionConversion: expresionUnaria
                |'(' nombreDeTipo ')' expresionConversion
;

expresionUnaria:      expresionSufijo
                | incremento expresionUnaria 
                | operadorUnario expresionConversion 
                | expresionUnaria incremento 
                | SIZEOF expresionUnaria
;

incremento: P_INC               {fprintf(yyout, "Se logro derivar por ++ \n");} 
                | P_DEC         {fprintf(yyout, "Se logro derivar por -- \n");}        
;

operadorUnario: '&' | '*' | '-' | '!' | '+' | '~'
;

expresionSufijo: expresionPrimaria                          
            | expresionSufijo '['expresion']'         {fprintf(yyout, "Se logro derivar por [ y ] \n");}
            | expresionSufijo '('listaDeArgumentos')'   {fprintf(yyout, "Se logro derivar por ( y )\n");}
            | expresionSufijo '.' ID                  {fprintf(yyout, "Se logro derivar por . \n");}
            | expresionSufijo FLECHITA ID             {fprintf(yyout, "Se logro derivar por -> \n");}
            | expresionSufijo P_INC                   {fprintf(yyout, "Se logro derivar por ++ \n");}
            | expresionSufijo P_DEC                   {fprintf(yyout, "Se logro derivar por -- \n");}               
;

listaDeArgumentos: expresionAsignacion
                | listaDeArgumentos ',' expresionAsignacion
;

expresionPrimaria:    ID                      {fprintf(yyout, "Identificador = %s \n",$<texto>1);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | NUMERO_ENTERO         {fprintf(yyout, "Num entero = %d \n",$<entero>1);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | NUMERO_REAL           {fprintf(yyout, "Num real = %f \n",$<real>1);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | LITERALCADENA         {fprintf(yyout, "String = %s \n",$<texto>1);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | '(' expresion ')'     
;

nombreDeTipo: tipoDeDato | STRUCT | TYPEDEF | UNION | ENUM
;

tipoDeDato: CHAR           {tipoDeDato = strdup($<texto>1);}
        |INT            {tipoDeDato = strdup($<texto>1);}
        |FLOAT          {tipoDeDato = strdup($<texto>1);}
        |LONG           {tipoDeDato = strdup($<texto>1);}
        |SHORT          {tipoDeDato = strdup($<texto>1);}
        |SIGNED         {tipoDeDato = strdup($<texto>1);}
        |UNSIGNED        {tipoDeDato = strdup($<texto>1);}
        |VOID           {tipoDeDato = strdup($<texto>1);}
        |ENUM           {tipoDeDato = strdup($<texto>1);}
        |DOUBLE         {tipoDeDato = strdup($<texto>1);}
;

ID: IDENTIFICADOR
        |IDENTIFICADOR '=' expresion
;

/*SENTENCIAS*/

sentencia:      sentenciaDeExp                 {fprintf(yyout,"Se declaro una sentencia expresion \n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | sentenciaCompuesta         
                | sentencaiDeAsignacion        {fprintf(yyout,"Se declaro una sentencia de asignacion\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | sentenciaSeleccion         {fprintf(yyout,"Se declaro una sentencia de seleccion\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | sentenciaIteracion         {fprintf(yyout,"Se declaro una sentencia de iteracion\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | sentenciaEtiquetada        {fprintf(yyout,"Se declaro una sentencia etiquetada\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | sentenciaDeSalto             {fprintf(yyout,"Se declaro una sentencia de salto\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | error                 {fprintf(yyout,"ERROR AL DEFINIR LA SENTENCIA \n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;

//EXPRESION
sentenciaDeExp: expresionOP ';'                
        | error                         {fprintf(yyout,"falta ; en la definicion de la sentencia de expresion \n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;

//COMPUESTA
sentenciaCompuesta:  '{' listaDeDeclaracionesOP listaDeSentenciasOP '}' PuntoComaOp     {fprintf(yyout,"Se declaro una sentencia compuesta\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | '{' listaDeDeclaraciones '}' PuntoComaOp                       {fprintf(yyout,"Se declaro una sentencia compuesta\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | '{' listaDeSentencias '}' PuntoComaOp                          {fprintf(yyout,"Se declaro una sentencia compuesta\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | '{''}' PuntoComaOp                                           {fprintf(yyout,"Se declaro una sentencia compuesta\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | error                                                 {fprintf(yyout, "error al declarar la sentencia compuesta\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;

PuntoComaOp: /*na de na*/
        |';'
;

listaDeSentenciasOP: /*na de na*/
                        |listaDeSentencias
;

listaDeDeclaracionesOP: /*na de na*/
                        |listaDeDeclaraciones
;

listaDeDeclaraciones:     listaDeDeclaraciones declaracion 
                        | declaracion                   
;

listaDeSentencias:     sentencia
                        | listaDeSentencias sentencia
                        | error                         {printf("ERROR AL DEFINIR LA SENTENCIA \n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;

//SELECCION
sentenciaSeleccion:  IF '(' expresion ')' sentencia                          {fprintf(yyout, "Se logro derivar por el If \n");}
                | IF '(' expresion ')' sentencia ELSE sentencia         {fprintf(yyout,"Se logro derivar por el If Else \n");}
                | SWITCH '(' expresion ')' sentencia                    {fprintf(yyout,"Se logro derivar por el Switch \n")}
                |IF error                                               {fprintf(yyout,"ERROR SINTACTICO EN EL IF\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                |SWITCH error                                           {fprintf(yyout, "ERROR SINTACTICO EN EL SWITCH\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;

//ITERACION
sentenciaIteracion:  WHILE '(' expresion ')' sentencia                                       {fprintf(yyout, "Se logro derivar por el While \n");}
                | DO sentencia WHILE '(' expresion ')'                                  {fprintf(yyout, "Se logro derivar por el Do While \n");}
                | FOR '(' expresionOP ';' expresionOP ';' expresionOP ')' sentencia     {fprintf(yyout,"Se logro derivar por el For \n");}
                | WHILE error                                                           {fprintf(yyout, "ERROR SINTACTICO EN EL WHILE\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | DO error                                                              {fprintf(yyout, "ERROR SINTACTICO EN EL DO\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                |FOR error                                                              {fprintf(yyout, "ERROR SINTACTICO EN EL FOR\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;

//ETIQUETADA
sentenciaEtiquetada: CASE expresionConst ':' sentencia                   {fprintf(yyout, "Se logro derivar por un Case \n");}
                | DEFAULT ':' sentencia                       {fprintf(yyout,"Se logro derivar por el Default \n");}
                | IDENTIFICADOR ':' sentencia                 
                |CASE error                                     {fprintf(yyout, "ERROR SINTACTICO EN EL CASE\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | DEFAULT error                                 {fprintf(yyout, "ERROR SINTACTICO EN EL DEFAULT\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;
expresionConst: expresionCondicional
;
//SALTO
sentenciaDeSalto:      RETURN expresionOP ';'                        {fprintf(yyout,"Se logro derivar por el return \n");}
                | CONTINUE ';'                                {fprintf(yyout, "Se logro derivar por el Continue \n");}
                | BREAK ';'                                   {fprintf(yyout,"Se logro derivar por el Break \n");}
                | GOTO IDENTIFICADOR ';'                      {fprintf(yyout,"Se logro derivar por el Goto\n");}
                |GOTO error                                     {fprintf(yyout, "ERROR SINTACTICO EN EL GOTO, mal identificador\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                |BREAK error                                    {fprintf(yyout, "ERROR SINTACTICO EN EL BREAK, falta ;\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                | CONTINUE error                                {fprintf(yyout, "ERROR SINTACTICO EN EL CONTINUE, falta ;\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                |RETURN error                                   {fprintf(yyout, "ERROR SINTACTICO EN EL RETURN, falta ;\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;

expresionOP: /* na de na */
             | expresion 
;

//ASIGNACION
sentencaiDeAsignacion: IDENTIFICADOR '=' expresion ';' 
;

/*DECLARACIONES*/
declaracion: declaracionDeVariablesSimples  
            | declaracionDeFunciones
;

declaracionDeVariablesSimples: tipoDeDato listaDeVariablesSimples ';' {fprintf(yyout,"se declaro una variable de tipo %s llamada %s\n", tipoDeDato,nombre);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                                | error                         {fprintf(yyout,"Falta el ; en la declaracion \n"); } {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;

listaDeVariablesSimples: variableSimple       
                     | listaDeVariablesSimples ',' variableSimple
;

variableSimple: IDENTIFICADOR opcionInicializacion { nombre = strdup($<texto>1); }
;

opcionInicializacion:   /* vacio */
                     | operadorAsignacion constante 
;

constante: NUMERO_ENTERO        {fprintf(yyout,"num = %d\n",$<entero>1);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
        | NUMERO_REAL           {fprintf(yyout,"float = %f\n",$<real>1);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
        | CARACTER              {fprintf(yyout,"caracter = %c \n", $<caracter>1);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
        | LITERALCADENA         {fprintf(yyout,"literal = %s \n", $<texto>1);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
        | expresionAsignacion
;

//FUNCIONES
declaracionDeFunciones: tipoDeDato IDENTIFICADOR '(' opcionArgumentosConTipo ')'  {fprintf(yyout,"se declara una funcion de tipo %s llamada %s\n",tipoDeDato, $<texto>2);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;

opcionArgumentosConTipo:        /* vacio */ 
                                | tipoDeDato opcionReferencia IDENTIFICADOR
                                | tipoDeDato opcionReferencia IDENTIFICADOR ',' argumentosConTipo 
;

argumentosConTipo: tipoDeDato opcionReferencia IDENTIFICADOR
                 | tipoDeDato opcionReferencia IDENTIFICADOR ',' argumentosConTipo
;

opcionReferencia: /* vacio */
                  | '&'
;

definicionDeFunciones: tipoDeDato IDENTIFICADOR '(' opcionArgumentosConTipo ')' sentencia   {fprintf(yyout,"se define una funcion de tipo %s llamada %s\n",tipoDeDato, $<texto>2);}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
                        |error {fprintf(yyout,"ERROR AL DEFINIR LA FUNCION\n");}{fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);}
;


%%

int main (){

  int flag;

  yyin = fopen("entrada.c", "r");
  yyout = fopen("salida.txt", "w");

  fprintf(yyout,"-------------------Reporte del Analisis----------------\n\n");
  #ifdef BISON_DEBUG
       yydebug = 1;
    #endif

  flag = yyparse ();
  fprintf(yyout,"\n\n-------------------Fin del Reporte---------------------\n:)");
  fclose(yyin);
  fclose(yyout);
  return flag;
}