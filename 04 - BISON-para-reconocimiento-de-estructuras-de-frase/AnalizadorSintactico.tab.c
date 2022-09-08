
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "AnalizadorSintactico.y"

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



/* Line 189 of yacc.c  */
#line 106 "AnalizadorSintactico.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 93 "AnalizadorSintactico.y"

    int entero;
    char* texto;
    char caracter;
    float real;



/* Line 214 of yacc.c  */
#line 207 "AnalizadorSintactico.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 219 "AnalizadorSintactico.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNRULES -- Number of states.  */
#define YYNSTATES  303

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,     2,     2,    67,    70,     2,
      68,    69,    66,    63,    76,    64,    75,    65,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    58,
      62,    59,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,    78,    72,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    11,    12,    15,    16,
      19,    20,    23,    25,    27,    31,    35,    37,    39,    41,
      43,    45,    47,    49,    51,    53,    58,    60,    64,    65,
      66,    68,    70,    74,    76,    80,    84,    86,    90,    94,
      98,   102,   104,   108,   112,   114,   118,   122,   126,   128,
     133,   135,   138,   141,   144,   147,   149,   151,   153,   155,
     157,   159,   161,   163,   165,   170,   175,   179,   183,   186,
     189,   191,   195,   196,   199,   200,   203,   204,   207,   208,
     211,   215,   217,   219,   221,   223,   225,   227,   229,   231,
     233,   235,   237,   239,   241,   243,   245,   247,   251,   252,
     255,   257,   258,   261,   262,   265,   266,   269,   270,   273,
     274,   277,   278,   281,   284,   285,   288,   289,   296,   297,
     303,   304,   310,   311,   316,   317,   320,   321,   323,   324,
     326,   327,   329,   332,   334,   336,   339,   340,   343,   349,
     357,   363,   364,   368,   369,   373,   379,   386,   396,   397,
     401,   402,   406,   407,   411,   416,   420,   424,   425,   429,
     430,   434,   436,   440,   443,   446,   450,   451,   455,   456,
     460,   461,   465,   466,   470,   471,   473,   478,   480,   482,
     483,   488,   489,   492,   494,   498,   501,   502,   505,   506,
     509,   510,   513,   514,   517,   518,   521,   523,   524,   531,
     532,   536,   542,   546,   552,   553,   555,   556,   564,   565
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    -1,    80,    81,    -1,    -1,    57,    82,
      -1,    -1,   111,    83,    -1,    -1,   151,    84,    -1,    -1,
     168,    85,    -1,     8,    -1,    87,    -1,    86,    58,    87,
      -1,    98,    88,    87,    -1,    89,    -1,     1,    -1,    59,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,    21,
      -1,    90,    -1,    91,    86,    60,    89,    -1,    92,    -1,
      90,    14,    92,    -1,    -1,    -1,    90,    -1,    93,    -1,
      92,    13,    93,    -1,    94,    -1,    93,    12,    94,    -1,
      93,    11,    94,    -1,    95,    -1,    94,    20,    95,    -1,
      94,    61,    95,    -1,    94,    19,    95,    -1,    94,    62,
      95,    -1,    96,    -1,    95,    63,    96,    -1,    95,    64,
      96,    -1,    97,    -1,    96,    65,    97,    -1,    96,    66,
      97,    -1,    96,    67,    97,    -1,    98,    -1,    68,   108,
      69,    97,    -1,   101,    -1,    99,    98,    -1,   100,    97,
      -1,    98,    99,    -1,    51,    98,    -1,     9,    -1,    10,
      -1,    70,    -1,    66,    -1,    64,    -1,    71,    -1,    63,
      -1,    72,    -1,   103,    -1,   101,    73,    86,    74,    -1,
     101,    68,   102,    69,    -1,   101,    75,   110,    -1,   101,
      24,   110,    -1,   101,     9,    -1,   101,    10,    -1,    87,
      -1,   102,    76,    87,    -1,    -1,   110,   104,    -1,    -1,
       3,   105,    -1,    -1,     4,   106,    -1,    -1,     6,   107,
      -1,    68,    86,    69,    -1,   109,    -1,    36,    -1,    38,
      -1,    37,    -1,    49,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,     5,    -1,     5,    59,    86,
      -1,    -1,   119,   112,    -1,   121,    -1,    -1,   150,   113,
      -1,    -1,   133,   114,    -1,    -1,   136,   115,    -1,    -1,
     140,   116,    -1,    -1,   144,   117,    -1,    -1,     1,   118,
      -1,   149,    58,    -1,    -1,     1,   120,    -1,    -1,    77,
     129,   128,    78,   127,   122,    -1,    -1,    77,   130,    78,
     127,   123,    -1,    -1,    77,   131,    78,   127,   124,    -1,
      -1,    77,    78,   127,   125,    -1,    -1,     1,   126,    -1,
      -1,    58,    -1,    -1,   131,    -1,    -1,   130,    -1,   130,
     151,    -1,   151,    -1,   111,    -1,   131,   111,    -1,    -1,
       1,   132,    -1,    27,    68,    86,    69,   111,    -1,    27,
      68,    86,    69,   111,    28,   111,    -1,    52,    68,    86,
      69,   111,    -1,    -1,    27,     1,   134,    -1,    -1,    52,
       1,   135,    -1,    26,    68,    86,    69,   111,    -1,    25,
     111,    26,    68,    86,    69,    -1,    29,    68,   149,    58,
     149,    58,   149,    69,   111,    -1,    -1,    26,     1,   137,
      -1,    -1,    25,     1,   138,    -1,    -1,    29,     1,   139,
      -1,    53,   143,    60,   111,    -1,    55,    60,   111,    -1,
       5,    60,   111,    -1,    -1,    53,     1,   141,    -1,    -1,
      55,     1,   142,    -1,    89,    -1,    30,   149,    58,    -1,
      56,    58,    -1,    54,    58,    -1,    31,     5,    58,    -1,
      -1,    31,     1,   145,    -1,    -1,    54,     1,   146,    -1,
      -1,    56,     1,   147,    -1,    -1,    30,     1,   148,    -1,
      -1,    86,    -1,     5,    59,    86,    58,    -1,   152,    -1,
     163,    -1,    -1,   109,   155,    58,   153,    -1,    -1,     1,
     154,    -1,   156,    -1,   155,    76,   156,    -1,     5,   157,
      -1,    -1,    88,   158,    -1,    -1,     3,   159,    -1,    -1,
       4,   160,    -1,    -1,     7,   161,    -1,    -1,     6,   162,
      -1,    87,    -1,    -1,   109,     5,    68,   165,    69,   164,
      -1,    -1,   109,   167,     5,    -1,   109,   167,     5,    76,
     166,    -1,   109,   167,     5,    -1,   109,   167,     5,    76,
     166,    -1,    -1,    70,    -1,    -1,   109,     5,    68,   165,
      69,   111,   169,    -1,    -1,     1,   170,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   104,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   116,   117,   120,   121,   122,   125,   125,
     125,   125,   125,   125,   128,   129,   132,   133,   136,   137,
     137,   140,   141,   144,   145,   146,   148,   149,   150,   151,
     152,   160,   161,   162,   165,   166,   167,   168,   171,   172,
     175,   176,   177,   178,   179,   182,   183,   186,   186,   186,
     186,   186,   186,   189,   190,   191,   192,   193,   194,   195,
     198,   199,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   209,   209,   209,   209,   209,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   224,   225,   230,   230,
     231,   232,   232,   233,   233,   234,   234,   235,   235,   236,
     236,   237,   237,   241,   242,   242,   246,   246,   247,   247,
     248,   248,   249,   249,   250,   250,   253,   254,   257,   258,
     261,   262,   265,   266,   269,   270,   271,   271,   275,   276,
     277,   278,   278,   279,   279,   283,   284,   285,   286,   286,
     287,   287,   288,   288,   292,   293,   294,   295,   295,   296,
     296,   298,   301,   302,   303,   304,   305,   305,   306,   306,
     307,   307,   308,   308,   311,   312,   316,   320,   321,   324,
     324,   325,   325,   328,   329,   332,   335,   336,   339,   339,
     340,   340,   341,   341,   342,   342,   343,   347,   347,   350,
     351,   352,   355,   356,   359,   360,   363,   363,   364,   364
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERO_ENTERO", "NUMERO_REAL",
  "IDENTIFICADOR", "LITERALCADENA", "CARACTER", "ERRORLEXICO", "P_INC",
  "P_DEC", "DISTINTO", "IGUAL", "AND", "OR", "DIV_IGUAL", "POR_IGUAL",
  "MENOS_IGUAL", "MAS_IGUAL", "MENOR_IGUAL", "MAYOR_IGUAL", "MOD_IGUAL",
  "BIT_SHIFT_L", "BIT_SHIFT_R", "FLECHITA", "DO", "WHILE", "IF", "ELSE",
  "FOR", "RETURN", "GOTO", "STATIC", "EXTERN", "CONST", "VOLATILE",
  "STRUCT", "UNION", "TYPEDEF", "AUTO", "REGISTER", "CHAR", "INT", "FLOAT",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "VOID", "ENUM", "DOUBLE",
  "SIZEOF", "SWITCH", "CASE", "BREAK", "DEFAULT", "CONTINUE", "'\\n'",
  "';'", "'='", "':'", "'>'", "'<'", "'+'", "'-'", "'/'", "'*'", "'%'",
  "'('", "')'", "'&'", "'!'", "'~'", "'['", "']'", "'.'", "','", "'{'",
  "'}'", "$accept", "input", "line", "$@1", "$@2", "$@3", "$@4",
  "expresion", "expresionAsignacion", "operadorAsignacion",
  "expresionCondicional", "expresionOr", "expresionOrOP", "expresionAnd",
  "expresionIgualdad", "expresionRelacional", "expresionAditiva",
  "expresionMultiplicativa", "expresionConversion", "expresionUnaria",
  "incremento", "operadorUnario", "expresionSufijo", "listaDeArgumentos",
  "expresionPrimaria", "$@5", "$@6", "$@7", "$@8", "nombreDeTipo",
  "tipoDeDato", "ID", "sentencia", "$@9", "$@10", "$@11", "$@12", "$@13",
  "$@14", "$@15", "sentenciaDeExp", "$@16", "sentenciaCompuesta", "$@17",
  "$@18", "$@19", "$@20", "$@21", "PuntoComaOp", "listaDeSentenciasOP",
  "listaDeDeclaracionesOP", "listaDeDeclaraciones", "listaDeSentencias",
  "$@22", "sentenciaSeleccion", "$@23", "$@24", "sentenciaIteracion",
  "$@25", "$@26", "$@27", "sentenciaEtiquetada", "$@28", "$@29",
  "expresionConst", "sentenciaDeSalto", "$@30", "$@31", "$@32", "$@33",
  "expresionOP", "sentencaiDeAsignacion", "declaracion",
  "declaracionDeVariablesSimples", "$@34", "$@35",
  "listaDeVariablesSimples", "variableSimple", "opcionInicializacion",
  "constante", "$@36", "$@37", "$@38", "$@39", "declaracionDeFunciones",
  "$@40", "opcionArgumentosConTipo", "argumentosConTipo",
  "opcionReferencia", "definicionDeFunciones", "$@41", "$@42", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    10,    59,    61,
      58,    62,    60,    43,    45,    47,    42,    37,    40,    41,
      38,    33,   126,    91,    93,    46,    44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    82,    81,    83,    81,    84,    81,
      85,    81,    81,    86,    86,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    92,    92,    93,    93,    93,    94,    94,    94,    94,
      94,    95,    95,    95,    96,    96,    96,    96,    97,    97,
      98,    98,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   104,   103,   105,   103,   106,   103,   107,   103,
     103,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   112,   111,
     111,   113,   111,   114,   111,   115,   111,   116,   111,   117,
     111,   118,   111,   119,   120,   119,   122,   121,   123,   121,
     124,   121,   125,   121,   126,   121,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   131,   133,   133,
     133,   134,   133,   135,   133,   136,   136,   136,   137,   136,
     138,   136,   139,   136,   140,   140,   140,   141,   140,   142,
     140,   143,   144,   144,   144,   144,   145,   144,   146,   144,
     147,   144,   148,   144,   149,   149,   150,   151,   151,   153,
     152,   154,   152,   155,   155,   156,   157,   157,   159,   158,
     160,   158,   161,   158,   162,   158,   158,   164,   163,   165,
     165,   165,   166,   166,   167,   167,   169,   168,   170,   168
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     0,     0,
       1,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     4,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     3,     3,     2,     2,
       1,     3,     0,     2,     0,     2,     0,     2,     0,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     2,
       1,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     2,     0,     2,     0,     6,     0,     5,
       0,     5,     0,     4,     0,     2,     0,     1,     0,     1,
       0,     1,     2,     1,     1,     2,     0,     2,     5,     7,
       5,     0,     3,     0,     3,     5,     6,     9,     0,     3,
       0,     3,     0,     3,     4,     3,     3,     0,     3,     0,
       3,     1,     3,     2,     2,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     1,     4,     1,     1,     0,
       4,     0,     2,     1,     3,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     1,     0,     6,     0,
       3,     5,     3,     5,     0,     1,     0,     7,     0,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   111,    74,    76,    96,    78,    12,    55,
      56,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
       0,     0,     0,     4,    61,    59,    58,     0,    57,    60,
      62,     0,     3,   175,    13,    16,    24,     0,    26,    31,
      33,    36,    41,    44,    48,     0,     0,    50,    63,     0,
      72,     6,    98,   100,   103,   105,   107,   109,     0,   101,
       8,   177,   178,    10,   112,   115,   125,   182,   209,    75,
      77,     0,     0,    79,   150,     0,   148,     0,   141,     0,
     152,     0,   172,    96,     0,   166,     0,     0,    54,   143,
       0,   157,   161,    48,     0,   168,   164,   159,     0,   170,
     163,     5,    17,    82,    84,    83,    85,     0,     0,    81,
     111,   126,     0,   134,     0,     0,     0,   133,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,    20,    21,    22,    23,    18,     0,
      53,    51,    52,    68,    69,     0,     0,     0,     0,   186,
       0,   183,    73,     7,    99,   104,   106,   108,   110,   113,
     102,     9,    11,    97,   111,   156,   151,     0,   149,     0,
     142,     0,   153,     0,   173,     0,   162,   167,   165,   144,
       0,   158,     0,   169,   160,   155,   171,    80,     0,   137,
     127,   122,   186,   111,     0,     0,   181,   126,   132,   126,
     135,    14,    27,    28,    32,    35,    34,    39,    37,    38,
      40,    42,    43,    45,    46,    47,    15,    67,    70,     0,
       0,    66,   199,     0,   185,   179,     0,     0,     0,     0,
       0,     0,    97,     0,   154,    49,   123,   199,   126,   118,
     120,    25,    65,     0,    64,   204,     0,    74,    76,    78,
     192,   196,   187,   180,   186,   184,     0,   145,   138,     0,
     140,     0,   116,   119,   121,    71,   205,     0,     0,   189,
     191,   195,   193,   146,     0,     0,   197,   117,   200,   206,
     198,   139,     0,     0,   207,     0,   204,   201,   147,     0,
     202,     0,   203
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    42,   111,   163,   171,   172,    43,    44,   233,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   229,    58,   162,    79,    80,    83,   118,
     122,    60,   123,   164,   170,   165,   166,   167,   168,    74,
      62,    75,    63,   287,   273,   274,   246,    76,   201,   204,
     124,   125,   126,   199,    64,   180,   189,    65,   178,   176,
     182,    66,   191,   194,   104,    67,   187,   193,   196,   184,
      68,    69,    70,    71,   263,    77,   160,   161,   234,   262,
     279,   280,   282,   281,    72,   290,   256,   297,   277,    73,
     294,    78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -180
static const yytype_int16 yypact[] =
{
    -180,   339,  -180,   -26,  -180,  -180,    41,  -180,  -180,  -180,
    -180,   801,     9,    11,    16,    17,    53,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,   518,    18,  1068,
      14,    13,    37,  -180,  -180,  -180,  -180,   913,  -180,  -180,
    -180,   489,  -180,    -9,  -180,  -180,    60,  1078,    63,    59,
     108,    83,    77,  -180,   220,   518,   596,   121,  -180,    89,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,    66,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  1078,   876,  -180,    -2,   103,  -180,  1078,  -180,  1078,
    -180,   964,   -26,    73,    76,  -180,    92,  1078,   143,  -180,
    1078,  -180,  -180,   143,    79,  -180,  -180,  -180,   876,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,   -27,    88,  -180,
     209,   109,   161,  -180,   155,   567,   645,  -180,  1078,   596,
      46,   596,   596,   596,   596,   596,   596,   596,   596,   596,
     596,   596,   596,  -180,  -180,  -180,  -180,  -180,  -180,  1078,
    -180,   143,  -180,  -180,  -180,   163,  1078,  1078,   163,    81,
     -33,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,   117,   -26,  -180,  -180,   110,  -180,   -23,
    -180,   -19,  -180,   125,  -180,  1078,  -180,  -180,  -180,  -180,
     -18,  -180,   876,  -180,  -180,  -180,  -180,  -180,   596,  -180,
    -180,  -180,   156,   -26,   101,   723,  -180,   109,  -180,   109,
    -180,  -180,    63,   596,    59,   108,   108,    83,    83,    83,
      83,    77,    77,  -180,  -180,  -180,  -180,  -180,  -180,   -28,
     -29,  -180,   309,   986,  -180,  -180,   182,   260,  1078,   876,
     876,   964,    -9,   876,  -180,  -180,  -180,   309,   109,  -180,
    -180,  -180,  -180,  1078,  -180,   120,   124,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,    44,  -180,    64,  -180,   167,   139,
    -180,   129,  -180,  -180,  -180,  -180,  -180,   194,   414,  -180,
    -180,  -180,  -180,  -180,   876,   996,  -180,  -180,   126,  -180,
    -180,  -180,   131,   309,  -180,   876,   120,  -180,  -180,   196,
     127,   309,  -180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,  -180,  -180,  -180,  -180,   -34,  -112,   158,
     -25,  -180,  -180,    85,    86,    22,     1,    24,   -50,   -22,
     -46,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
      -1,   -91,     0,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -179,  -180,
    -180,  -180,    96,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
     -13,  -180,   -32,  -180,  -180,  -180,  -180,   -20,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,    -5,   -79,   -62,  -180,
    -180,  -180
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -198
static const yytype_int16 yytable[] =
{
      59,    61,    94,   117,   102,    98,   152,   103,   150,   127,
      86,    85,    88,   130,   107,   105,   211,    90,    92,    99,
       4,     5,    93,     7,  -111,   235,     9,    10,   249,   128,
     250,   128,   -17,   151,   103,   128,   119,   226,   109,   128,
     128,   252,   197,   236,   228,   254,   239,   173,   253,   128,
     240,   243,   150,   179,    95,   181,   -17,   150,    96,   143,
     144,   145,   146,   117,   227,   147,   190,   231,    27,   272,
     132,   133,   106,   108,   129,  -174,   131,    87,   183,    89,
      34,    35,   175,    36,    91,    37,   100,    38,    39,    40,
     223,   224,   225,   208,   159,   110,   143,   144,   145,   146,
      81,    82,   147,   148,   128,   150,   213,   103,   195,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   261,   128,   230,   169,   211,   210,   134,   135,   177,
     153,   154,   185,   283,   186,   217,   218,   219,   220,   192,
     148,   275,   140,   141,   142,   155,   138,   139,   245,   232,
     188,   242,     9,    10,   215,   216,   203,   198,     4,     5,
       6,     7,   221,   222,     9,    10,   202,   200,    93,   136,
     137,   143,   144,   145,   146,   237,   103,   147,   238,   248,
      11,    12,    13,   241,    14,    15,    16,   264,   251,   156,
     276,   103,   244,   278,   157,   284,   158,   285,   286,   288,
     295,   300,   293,   301,   266,   210,    27,    28,    29,    30,
      31,    32,   149,  -174,   212,   148,   265,   214,    34,    35,
     205,    36,   302,    37,   247,    38,    39,    40,   269,     9,
      10,   255,    41,  -128,   299,   143,   144,   145,   146,   267,
     268,   147,   271,   270,     0,     0,   255,     0,     0,     0,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -176,   112,     0,     4,     5,    93,     7,   -17,  -176,     9,
      10,     0,   292,     0,     0,     0,     0,     0,   289,   148,
       0,     0,     0,     0,   291,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,   296,     0,     0,   298,     0,     0,     0,     0,
     296,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,    27,  -176,  -176,  -176,  -176,  -176,  -176,  -176,     0,
       0,     0,     0,    34,    35,     0,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,     0,  -176,  -176,     2,
       3,     0,     4,     5,     6,     7,     0,     8,     9,    10,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,    11,    12,    13,     0,    14,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,  -174,     0,     0,
       0,     0,    34,    35,     0,    36,     0,    37,     0,    38,
      39,    40,     0,     0,  -197,   174,    41,     4,     5,     6,
       7,     0,  -197,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,     0,    14,    15,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,    27,    28,    29,    30,    31,
      32,  -197,  -174,     0,     0,     0,     0,    34,    35,     0,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
     120,    41,     4,     5,     6,     7,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    13,     0,    14,    15,
      16,     4,     5,    93,     7,     0,     0,     9,    10,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     0,  -130,     0,     0,
       0,     0,    34,    35,     0,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,     0,    41,   121,   206,    27,
    -131,  -131,  -131,  -131,     0,     0,  -131,  -131,     0,     0,
       0,    34,    35,     0,    36,     0,    97,     0,    38,    39,
      40,     0,  -131,  -131,  -131,     0,  -131,  -131,  -131,     4,
       5,    93,     7,     0,     0,     9,    10,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,  -131,  -131,
    -131,  -131,  -131,  -131,     0,  -131,     0,     0,     0,     0,
    -131,  -131,     0,  -131,     0,  -131,     0,  -131,  -131,  -131,
       0,     0,     0,     0,  -131,   207,   174,    27,     4,     5,
       6,     7,     0,     0,     9,    10,     0,     0,     0,    34,
      35,     0,    36,     0,    37,     0,    38,    39,    40,     0,
      11,    12,    13,     0,    14,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,    32,     0,  -174,     0,     0,     0,     0,    34,    35,
       0,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,     0,    41,   209,   174,     0,     4,     5,     6,     7,
       0,     0,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      13,     0,    14,    15,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,    31,    32,
       0,  -174,     0,     0,     0,     0,    34,    35,     0,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,     0,
      41,  -129,    84,     0,     4,     5,     6,     7,     0,     0,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
      14,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,     0,  -174,
       0,     0,     0,     0,    34,    35,     0,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,   174,    41,     4,
       5,     6,     7,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     0,    14,    15,    16,     0,     0,
       0,     0,     0,     0,   112,     0,     4,     5,    93,     7,
       0,     0,     9,    10,     0,     0,     0,    27,    28,    29,
      30,    31,    32,     0,  -174,     0,     0,     0,     0,    34,
      35,     0,    36,     0,    37,     0,    38,    39,    40,   113,
     114,   115,     0,    41,    17,    18,    19,    20,    21,    22,
      23,    24,   116,    26,    27,   112,     0,     4,     5,    93,
       7,     0,     0,     9,    10,     0,    34,    35,     0,    36,
       0,    37,     0,    38,    39,    40,     0,   112,     0,   257,
     258,    93,   259,   260,     0,     9,    10,   112,     0,     4,
       5,    93,     7,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,  -174,     0,     0,     0,     0,    34,    35,     0,
      36,     0,    37,     0,    38,    39,    40,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    34,
      35,     0,    36,     0,    37,     0,    38,    39,    40,    34,
      35,     0,    36,     0,    37,  -174,    38,    39,    40,   101,
       0,     4,     5,    93,     7,     0,     0,     9,    10,   112,
       0,     4,     5,    93,     7,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    34,    35,     0,    36,     0,    37,     0,    38,    39,
      40,    34,    35,     0,    36,     0,    37,     0,    38,    39,
      40
};

static const yytype_int16 yycheck[] =
{
       1,     1,    15,    37,    29,    27,    56,    29,    54,    41,
       1,    11,     1,    47,     1,     1,   128,     1,     1,     1,
       3,     4,     5,     6,    26,    58,     9,    10,   207,    58,
     209,    58,    58,    55,    56,    58,    37,   149,     1,    58,
      58,    69,    69,    76,   156,    74,    69,    81,    76,    58,
      69,    69,    98,    87,     1,    89,    58,   103,     5,    15,
      16,    17,    18,    97,   155,    21,   100,   158,    51,   248,
      11,    12,    58,    60,    14,    58,    13,    68,    91,    68,
      63,    64,    82,    66,    68,    68,    68,    70,    71,    72,
     140,   141,   142,   125,     5,    58,    15,    16,    17,    18,
      59,    60,    21,    59,    58,   151,    60,   129,   108,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   233,    58,   157,    58,   237,   126,    19,    20,    26,
       9,    10,    59,    69,    58,   134,   135,   136,   137,    60,
      59,   253,    65,    66,    67,    24,    63,    64,   198,    68,
      58,   185,     9,    10,   132,   133,     1,    69,     3,     4,
       5,     6,   138,   139,     9,    10,     5,    58,     5,    61,
      62,    15,    16,    17,    18,    58,   198,    21,    68,    78,
      25,    26,    27,    58,    29,    30,    31,     5,   213,    68,
      70,   213,   192,    69,    73,    28,    75,    58,    69,     5,
      69,     5,    76,    76,   238,   205,    51,    52,    53,    54,
      55,    56,    54,    58,   129,    59,   236,   131,    63,    64,
     124,    66,   301,    68,    68,    70,    71,    72,   241,     9,
      10,   232,    77,    78,   296,    15,    16,    17,    18,   239,
     240,    21,   247,   243,    -1,    -1,   247,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     1,    -1,     3,     4,     5,     6,    58,     8,     9,
      10,    -1,   285,    -1,    -1,    -1,    -1,    -1,   278,    59,
      -1,    -1,    -1,    -1,   284,    25,    26,    27,    28,    29,
      30,    31,   293,    -1,    -1,   295,    -1,    -1,    -1,    -1,
     301,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    64,    -1,    66,    -1,    68,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    78,     0,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    66,    -1,    68,    -1,    70,
      71,    72,    -1,    -1,     0,     1,    77,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      66,    -1,    68,    -1,    70,    71,    72,    -1,    -1,    -1,
       1,    77,     3,     4,     5,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    -1,    29,    30,
      31,     3,     4,     5,     6,    -1,    -1,     9,    10,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    66,    -1,    68,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    78,     1,    51,
       3,     4,     5,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    63,    64,    -1,    66,    -1,    68,    -1,    70,    71,
      72,    -1,    25,    26,    27,    -1,    29,    30,    31,     3,
       4,     5,     6,    -1,    -1,     9,    10,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    64,    -1,    66,    -1,    68,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    78,     1,    51,     3,     4,
       5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    63,
      64,    -1,    66,    -1,    68,    -1,    70,    71,    72,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    66,    -1,    68,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    78,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,    66,
      -1,    68,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    78,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    64,    -1,    66,    -1,    68,
      -1,    70,    71,    72,    -1,    -1,    -1,     1,    77,     3,
       4,     5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,
      64,    -1,    66,    -1,    68,    -1,    70,    71,    72,    36,
      37,    38,    -1,    77,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    -1,    63,    64,    -1,    66,
      -1,    68,    -1,    70,    71,    72,    -1,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      66,    -1,    68,    -1,    70,    71,    72,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    63,
      64,    -1,    66,    -1,    68,    -1,    70,    71,    72,    63,
      64,    -1,    66,    -1,    68,    69,    70,    71,    72,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    63,    64,    -1,    66,    -1,    68,    -1,    70,    71,
      72,    63,    64,    -1,    66,    -1,    68,    -1,    70,    71,
      72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    80,     0,     1,     3,     4,     5,     6,     8,     9,
      10,    25,    26,    27,    29,    30,    31,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    63,    64,    66,    68,    70,    71,
      72,    77,    81,    86,    87,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   103,   109,
     110,   111,   119,   121,   133,   136,   140,   144,   149,   150,
     151,   152,   163,   168,   118,   120,   126,   154,   170,   105,
     106,    59,    60,   107,     1,   111,     1,    68,     1,    68,
       1,    68,     1,     5,   149,     1,     5,    68,    98,     1,
      68,     1,    89,    98,   143,     1,    58,     1,    60,     1,
      58,    82,     1,    36,    37,    38,    49,    86,   108,   109,
       1,    78,   109,   111,   129,   130,   131,   151,    58,    14,
      86,    13,    11,    12,    19,    20,    61,    62,    63,    64,
      65,    66,    67,    15,    16,    17,    18,    21,    59,    88,
      99,    98,    97,     9,    10,    24,    68,    73,    75,     5,
     155,   156,   104,    83,   112,   114,   115,   116,   117,    58,
     113,    84,    85,    86,     1,   111,   138,    26,   137,    86,
     134,    86,   139,   149,   148,    59,    58,   145,    58,   135,
      86,   141,    60,   146,   142,   111,   147,    69,    69,   132,
      58,   127,     5,     1,   128,   131,     1,    78,   151,    78,
     111,    87,    92,    60,    93,    94,    94,    95,    95,    95,
      95,    96,    96,    97,    97,    97,    87,   110,    87,   102,
      86,   110,    68,    88,   157,    58,    76,    58,    68,    69,
      69,    58,    86,    69,   111,    97,   125,    68,    78,   127,
     127,    89,    69,    76,    74,   109,   165,     3,     4,     6,
       7,    87,   158,   153,     5,   156,    86,   111,   111,   149,
     111,   165,   127,   123,   124,    87,    70,   167,    69,   159,
     160,   162,   161,    69,    28,    58,    69,   122,     5,   111,
     164,   111,   149,    76,   169,    69,   109,   166,   111,   167,
       5,    76,   166
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 107 "AnalizadorSintactico.y"
    {fprintf(yyout,"\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 107 "AnalizadorSintactico.y"
    {numeroDeLinea++;;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 108 "AnalizadorSintactico.y"
    {fprintf(yyout,"SENTENCIAS\n");}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 108 "AnalizadorSintactico.y"
    {numeroDeLinea++;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 109 "AnalizadorSintactico.y"
    {fprintf(yyout,"DECLARACIONES\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 109 "AnalizadorSintactico.y"
    {numeroDeLinea++;;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 110 "AnalizadorSintactico.y"
    {fprintf(yyout,"FUNCIONES\n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 110 "AnalizadorSintactico.y"
    {numeroDeLinea++;;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 111 "AnalizadorSintactico.y"
    {fprintf(yyout, "\nSE DETECTO UN ERROR LEXICO: %s , EN LA LINEA : %d \n", (yyvsp[(1) - (1)].texto), numeroDeLinea);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 116 "AnalizadorSintactico.y"
    {fprintf(yyout,"EXPRESIONES\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 117 "AnalizadorSintactico.y"
    {fprintf(yyout,"EXPRESIONES\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 129 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por : \n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 133 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por || \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 141 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por && \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 145 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por == \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 146 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por != \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 149 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por >= \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 150 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por > \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 151 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por <= \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 152 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por >= \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 161 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por + \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 162 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por - \n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 166 "AnalizadorSintactico.y"
    { if((yyvsp[(3) - (3)].real) == 0){printf("ERROR AL DIVIDIR POR 0"); return 0;}else (yyval.real) = (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real); fprintf(yyout,"Se logro derivar por / \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 167 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por * \n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 168 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por % \n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 182 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por ++ \n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 183 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por -- \n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 190 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por [ y ] \n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 191 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por ( y )\n");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 192 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por . \n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 193 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por -> \n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 194 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por ++ \n");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 195 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por -- \n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 202 "AnalizadorSintactico.y"
    {fprintf(yyout, "Identificador = %s \n",(yyvsp[(1) - (1)].texto));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 202 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 203 "AnalizadorSintactico.y"
    {fprintf(yyout, "Num entero = %d \n",(yyvsp[(1) - (1)].entero));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 203 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 204 "AnalizadorSintactico.y"
    {fprintf(yyout, "Num real = %f \n",(yyvsp[(1) - (1)].real));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 204 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 205 "AnalizadorSintactico.y"
    {fprintf(yyout, "String = %s \n",(yyvsp[(1) - (1)].texto));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 205 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 212 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 213 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 214 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 215 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 216 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 217 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 218 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 219 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 220 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 221 "AnalizadorSintactico.y"
    {tipoDeDato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 230 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia expresion \n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 230 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 232 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia de asignacion\n");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 232 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 233 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia de seleccion\n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 233 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 234 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia de iteracion\n");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 234 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 235 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia etiquetada\n");;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 235 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 236 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia de salto\n");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 236 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 237 "AnalizadorSintactico.y"
    {fprintf(yyout,"ERROR AL DEFINIR LA SENTENCIA \n");;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 237 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 242 "AnalizadorSintactico.y"
    {fprintf(yyout,"falta ; en la definicion de la sentencia de expresion \n");;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 242 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 246 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia compuesta\n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 246 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 247 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia compuesta\n");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 247 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 248 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia compuesta\n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 248 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 249 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia compuesta\n");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 249 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 250 "AnalizadorSintactico.y"
    {fprintf(yyout, "error al declarar la sentencia compuesta\n");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 250 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 271 "AnalizadorSintactico.y"
    {printf("ERROR AL DEFINIR LA SENTENCIA \n");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 271 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 275 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por el If \n");;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 276 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se logro derivar por el If Else \n");;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 277 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se logro derivar por el Switch \n");}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 278 "AnalizadorSintactico.y"
    {fprintf(yyout,"ERROR SINTACTICO EN EL IF\n");;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 278 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 279 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL SWITCH\n");;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 279 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 283 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por el While \n");;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 284 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por el Do While \n");;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 285 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se logro derivar por el For \n");;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 286 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL WHILE\n");;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 286 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 287 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL DO\n");;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 287 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 288 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL FOR\n");;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 288 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 292 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por un Case \n");;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 293 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se logro derivar por el Default \n");;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 295 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL CASE\n");;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 295 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 296 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL DEFAULT\n");;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 296 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 301 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se logro derivar por el return \n");;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 302 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se logro derivar por el Continue \n");;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 303 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se logro derivar por el Break \n");;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 304 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se logro derivar por el Goto\n");;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 305 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL GOTO, mal identificador\n");;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 305 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 306 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL BREAK, falta ;\n");;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 306 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 307 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL CONTINUE, falta ;\n");;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 307 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 308 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL RETURN, falta ;\n");;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 308 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 324 "AnalizadorSintactico.y"
    {fprintf(yyout,"se declaro una variable de tipo %s llamada %s\n", tipoDeDato,nombre);;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 324 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 325 "AnalizadorSintactico.y"
    {fprintf(yyout,"Falta el ; en la declaracion \n"); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 325 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 332 "AnalizadorSintactico.y"
    { nombre = strdup((yyvsp[(1) - (2)].texto)); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 339 "AnalizadorSintactico.y"
    {fprintf(yyout,"num = %d\n",(yyvsp[(1) - (1)].entero));;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 339 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 340 "AnalizadorSintactico.y"
    {fprintf(yyout,"float = %f\n",(yyvsp[(1) - (1)].real));;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 340 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 341 "AnalizadorSintactico.y"
    {fprintf(yyout,"caracter = %c \n", (yyvsp[(1) - (1)].caracter));;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 341 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 342 "AnalizadorSintactico.y"
    {fprintf(yyout,"literal = %s \n", (yyvsp[(1) - (1)].texto));;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 342 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 347 "AnalizadorSintactico.y"
    {fprintf(yyout,"se declara una funcion de tipo %s llamada %s\n",tipoDeDato, (yyvsp[(2) - (5)].texto));;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 347 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 363 "AnalizadorSintactico.y"
    {fprintf(yyout,"se define una funcion de tipo %s llamada %s\n",tipoDeDato, (yyvsp[(2) - (6)].texto));;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 363 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 364 "AnalizadorSintactico.y"
    {fprintf(yyout,"ERROR AL DEFINIR LA FUNCION\n");;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 364 "AnalizadorSintactico.y"
    {fprintf(yyout, "En la linea : %d \n\n", numeroDeLinea);;}
    break;



/* Line 1455 of yacc.c  */
#line 2836 "AnalizadorSintactico.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 368 "AnalizadorSintactico.y"


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
