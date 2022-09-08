
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMERO_ENTERO = 258,
     NUMERO_REAL = 259,
     IDENTIFICADOR = 260,
     LITERALCADENA = 261,
     CARACTER = 262,
     ERRORLEXICO = 263,
     P_INC = 264,
     P_DEC = 265,
     DISTINTO = 266,
     IGUAL = 267,
     AND = 268,
     OR = 269,
     DIV_IGUAL = 270,
     POR_IGUAL = 271,
     MENOS_IGUAL = 272,
     MAS_IGUAL = 273,
     MENOR_IGUAL = 274,
     MAYOR_IGUAL = 275,
     MOD_IGUAL = 276,
     BIT_SHIFT_L = 277,
     BIT_SHIFT_R = 278,
     FLECHITA = 279,
     DO = 280,
     WHILE = 281,
     IF = 282,
     ELSE = 283,
     FOR = 284,
     RETURN = 285,
     GOTO = 286,
     STATIC = 287,
     EXTERN = 288,
     CONST = 289,
     VOLATILE = 290,
     STRUCT = 291,
     UNION = 292,
     TYPEDEF = 293,
     AUTO = 294,
     REGISTER = 295,
     CHAR = 296,
     INT = 297,
     FLOAT = 298,
     LONG = 299,
     SHORT = 300,
     SIGNED = 301,
     UNSIGNED = 302,
     VOID = 303,
     ENUM = 304,
     DOUBLE = 305,
     SIZEOF = 306,
     SWITCH = 307,
     CASE = 308,
     BREAK = 309,
     DEFAULT = 310,
     CONTINUE = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 93 "AnalizadorSintactico.y"

    int entero;
    char* texto;
    char caracter;
    float real;



/* Line 1676 of yacc.c  */
#line 117 "AnalizadorSintactico.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


