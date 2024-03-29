%option noyywrap
%option yylineno

%{
// librerias incluidas    
#include <stdio.h>
#include <stdlib.h> 
#include "..\librerias\ejecucion.h" 
%}

DIGITO_DECIMAL [0-9] 
DIGITO_OCTAL [0-7] 
DIGITO_HEXADECIMAL [a-fA-F0-9] 

LETRA [a-zA-Z] 
SUFIJO_REAL [FfLlDd]
SECUENCIA_DE_ESCAPE_SIMPLE (\\\?|\\'|\\\\|\\a|\\b|\\f|\\n|\\r|\\t|\\v)

TIPO_DE_DATO (char|int|float|double|long|short|signed|unsigned|void|enum|struct|typedef|union)
ESTRUCTURA_DE_CONTROL (switch|case|break|default|continue|do|while|if|else|fo|return|goto)
OTRA_PALABRA_RESERVADA (volatile|goto|extern|static|auto|register)

CARACTER_DE_PUNTUACION (;|,|\(|\)|\{|\}|:|\.\.\.)
OPERADOR (\[|\]|\.|->|sizeof|\+\+|--|~|!|-|\+|&|\*|\/|%|<<|>>|<|<=|>|>=|=|==|!=|\+=|-=|\*=|\/=|%=|&=|^=|\|=|>>=|<<=|^|\||&&|\|\||\?:)


%% 
    /*Constante Entera Decimal*/
[1-9]{DIGITO_DECIMAL}*      {constantesDecimales(yytext);}
    /*Constante Entera Octal*/
0{DIGITO_OCTAL}*            {constantesOctales(yytext);}
    /*Constante Entera Hexadecimal*/
0[xX]{DIGITO_HEXADECIMAL}+  {constantesHexadecimales(yytext);}
    /*Constante Real*/
[\+\-]?{DIGITO_DECIMAL}*\.{DIGITO_DECIMAL}+([eE][\+\-]?{DIGITO_DECIMAL}+)?{SUFIJO_REAL}?|[\+\-]?{DIGITO_DECIMAL}+\.([eE][\+\-]?{DIGITO_DECIMAL}+)?{SUFIJO_REAL}?|[\+\-]?{DIGITO_DECIMAL}+([eE][\+\-]?{DIGITO_DECIMAL}+) {constantesReales(yytext);}
    /*Constante Caracter*/
'([^'\\]|{SECUENCIA_DE_ESCAPE_SIMPLE}|\\{DIGITO_OCTAL}{1,3}|\\x{DIGITO_HEXADECIMAL}{1,2})*' {constantesCaracter(yytext);}
    /*Literal Cadena*/
\"([^"\\]|{SECUENCIA_DE_ESCAPE_SIMPLE}|\\{DIGITO_OCTAL}{1,3}|\\x{DIGITO_HEXADECIMAL}{1,2})*\" {literalesCadena(yytext);}    
    /*Palabra Reservada*/
{TIPO_DE_DATO}             {palabrasReservadas(yytext,"Tipo de dato");}
{ESTRUCTURA_DE_CONTROL}    {palabrasReservadas(yytext,"Estructura de control");}
{OTRA_PALABRA_RESERVADA}   {palabrasReservadas(yytext,"Tipo de dato");}
    /*Operador*/
{OPERADOR} {operadoresCaracteresPuntc(yytext);}
    /*Identificador*/
({LETRA}|_)({LETRA}|{DIGITO_DECIMAL}|_)* {identificadores(yytext);} 
    /*Caracter de Puntuación*/
{CARACTER_DE_PUNTUACION}    {operadoresCaracteresPuntc(yytext);}
    /*Comentario de multiples lineas*/
\/\*(\*+[^\*\/]|[^\*])*\*+\/   {comentarios(yytext,"Comentario de multiples lineas");}
    /*Comentario de una linea (sin \n o $ al final porque sino no detecta comentario en la ultima linea)*/
\/\/.* {comentarios(yytext,"Comentario de una linea");}
    /*Cadena de caracteres no reconocidos*/
(.|"\n") {caracNoReconocidos(yytext,yylineno);}
    
%% 
int main(){
    /* Acciones previas a la invocación den analizador léxico */
    yyin = fopen("archivo.c","r");
    
    /* Invocación del analizador léxico */
    yylex();

    /* Acciones posteriores a la ejecución del analizador léxico */
    ejecutarReportes();
    

    return 0;
}