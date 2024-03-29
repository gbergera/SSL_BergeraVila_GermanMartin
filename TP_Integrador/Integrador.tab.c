
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
#line 1 "Integrador.y"

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



/* Line 189 of yacc.c  */
#line 100 "Integrador.tab.c"

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
     TIPO_DATO = 258,
     IDENTIFICADOR = 259,
     LITERAL_CADENA = 260,
     CONSTANTE_DECIMAL = 261,
     CONSTANTE_OCTAL = 262,
     CONSTANTE_HEXADECIMAL = 263,
     CONSTANTE_REAL = 264,
     CONSTANTE_CARACTER = 265,
     OPER_ADITIVO = 266,
     OPER_MULTIPLICATIVO = 267,
     OPER_RELACIONAL = 268,
     OPER_UNARIO = 269,
     OPER_IGUALDAD = 270,
     OPER_ASIGNACION = 271,
     OPER_INCREMENTO = 272,
     OPER_SIZEOF = 273,
     AND = 274,
     OR = 275,
     IF = 276,
     SWITCH = 277,
     ELSE = 278,
     FOR = 279,
     WHILE = 280,
     DO = 281,
     RETURN = 282
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 27 "Integrador.y"

char cadena[50];
int entero;
float real;
struct NombreYTipo
        {
                char nombre[50];
                char tipo[15];
        } nombreTipo;



/* Line 214 of yacc.c  */
#line 176 "Integrador.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 188 "Integrador.tab.c"

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
#define YYLAST   266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,     2,
      31,    32,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,    36,
       2,     2,     2,    29,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    16,    18,    20,
      24,    26,    32,    34,    38,    40,    44,    46,    50,    52,
      56,    58,    62,    64,    68,    70,    73,    76,    81,    83,
      88,    93,    94,    96,   100,   102,   106,   108,   110,   112,
     116,   118,   120,   122,   126,   129,   130,   133,   140,   141,
     145,   151,   155,   161,   162,   164,   171,   173,   175,   177,
     179,   181,   186,   187,   189,   192,   194,   197,   198,   200,
     203,   205,   208,   214,   222,   228,   234,   242,   252,   256,
     257,   259,   261,   263,   265,   267
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    -1,    41,    42,    -1,    57,    28,    -1,
      66,    28,    -1,     1,    28,    -1,    44,    -1,    45,    -1,
      52,    16,    44,    -1,    46,    -1,    46,    29,    43,    30,
      45,    -1,    47,    -1,    46,    20,    47,    -1,    48,    -1,
      47,    19,    48,    -1,    49,    -1,    48,    15,    49,    -1,
      50,    -1,    49,    13,    50,    -1,    51,    -1,    50,    11,
      51,    -1,    52,    -1,    51,    12,    52,    -1,    53,    -1,
      17,    52,    -1,    14,    52,    -1,    18,    31,     3,    32,
      -1,    56,    -1,    53,    33,    43,    34,    -1,    53,    31,
      54,    32,    -1,    -1,    44,    -1,    55,    35,    44,    -1,
      44,    -1,    55,    35,    44,    -1,     4,    -1,    76,    -1,
       5,    -1,    31,    43,    32,    -1,    58,    -1,    61,    -1,
      65,    -1,     3,    59,    36,    -1,     4,    60,    -1,    -1,
      16,    45,    -1,     3,     4,    31,    62,    32,    36,    -1,
      -1,     3,    64,     4,    -1,     3,    64,     4,    35,    63,
      -1,     3,    64,     4,    -1,     3,    64,     4,    35,    63,
      -1,    -1,    37,    -1,     3,     4,    31,    62,    32,    66,
      -1,    67,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    38,    68,    70,    39,    -1,    -1,    57,    -1,    68,
      57,    -1,    66,    -1,    69,    66,    -1,    -1,    66,    -1,
      69,    66,    -1,    36,    -1,    43,    36,    -1,    21,    31,
      43,    32,    66,    -1,    21,    31,    43,    32,    66,    23,
      66,    -1,    22,    31,    43,    32,    66,    -1,    25,    31,
      43,    32,    66,    -1,    26,    66,    25,    31,    43,    32,
      36,    -1,    24,    31,    75,    36,    75,    36,    75,    32,
      66,    -1,    27,    75,    36,    -1,    -1,    43,    -1,     6,
      -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    82,    85,    86,    87,    92,    95,    96,
      99,   100,   103,   104,   107,   108,   111,   112,   115,   116,
     119,   120,   123,   124,   127,   128,   129,   130,   133,   134,
     135,   140,   141,   142,   145,   146,   149,   150,   151,   152,
     157,   158,   159,   162,   165,   168,   169,   172,   175,   176,
     177,   180,   181,   184,   185,   188,   192,   193,   194,   195,
     196,   199,   202,   203,   204,   207,   208,   211,   212,   213,
     216,   217,   220,   221,   222,   225,   226,   227,   230,   233,
     234,   239,   240,   241,   242,   243
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIPO_DATO", "IDENTIFICADOR",
  "LITERAL_CADENA", "CONSTANTE_DECIMAL", "CONSTANTE_OCTAL",
  "CONSTANTE_HEXADECIMAL", "CONSTANTE_REAL", "CONSTANTE_CARACTER",
  "OPER_ADITIVO", "OPER_MULTIPLICATIVO", "OPER_RELACIONAL", "OPER_UNARIO",
  "OPER_IGUALDAD", "OPER_ASIGNACION", "OPER_INCREMENTO", "OPER_SIZEOF",
  "AND", "OR", "IF", "SWITCH", "ELSE", "FOR", "WHILE", "DO", "RETURN",
  "'\\n'", "'?'", "':'", "'('", "')'", "'['", "']'", "','", "';'", "'&'",
  "'{'", "'}'", "$accept", "input", "line", "expresion", "expAsignacion",
  "expCondicional", "expOr", "expAnd", "expIgualdad", "expRelacional",
  "expAditiva", "expMultiplicativa", "expUnaria", "expPostfijo",
  "opcionListaArgumentos", "listaArgumentos", "expPrimaria", "declaracion",
  "declaracionVariablesSimples", "unaVariableSimple",
  "opcionInicializacion", "declaracionFunciones",
  "opcionArgumentosConTipo", "argumentosConTipo", "opcionReferencia",
  "definicionFunciones", "sentencia", "sentenciaCompuesta",
  "opcionListaDeclaraciones", "listaSentencias", "opcionListaSentencias",
  "sentenciaExpresion", "sentenciaSeleccion", "sentenciaIteracion",
  "sentenciaSalto", "opcionExpresion", "constante", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    10,    63,
      58,    40,    41,    91,    93,    44,    59,    38,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    42,    43,    44,    44,
      45,    45,    46,    46,    47,    47,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    52,    52,    52,    53,    53,
      53,    54,    54,    54,    55,    55,    56,    56,    56,    56,
      57,    57,    57,    58,    59,    60,    60,    61,    62,    62,
      62,    63,    63,    64,    64,    65,    66,    66,    66,    66,
      66,    67,    68,    68,    68,    69,    69,    70,    70,    70,
      71,    71,    72,    72,    72,    73,    73,    73,    74,    75,
      75,    76,    76,    76,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     1,     1,     3,
       1,     5,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     2,     2,     4,     1,     4,
       4,     0,     1,     3,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     3,     2,     0,     2,     6,     0,     3,
       5,     3,     5,     0,     1,     6,     1,     1,     1,     1,
       1,     4,     0,     1,     2,     1,     2,     0,     1,     2,
       1,     2,     5,     7,     5,     5,     7,     9,     3,     0,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,    36,    38,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,    70,    62,     3,     0,     7,     8,    10,    12,
      14,    16,    18,    20,    22,    24,    28,     0,    40,    41,
      42,     0,    56,    57,    58,    59,    60,    37,     6,    45,
       0,    26,    25,     0,     0,     0,    79,     0,     0,    80,
       0,     0,    63,    67,    71,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     4,     5,     0,    48,    44,
      43,     0,     0,     0,     0,     0,     0,    78,    39,    64,
      65,     0,     0,    13,    22,     0,    15,    17,    19,    21,
      23,     9,    32,     0,     0,     0,    46,    53,     0,    27,
       0,     0,    79,     0,     0,    66,    61,     0,    30,     0,
      29,    54,     0,     0,    72,    74,     0,    75,     0,    11,
      33,    49,    47,    55,     0,    79,     0,     0,    73,     0,
      76,    53,    50,     0,     0,    77,    51,     0,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   103,   104,    36,    37,    38,    50,
      79,    39,   108,   142,   122,    40,    41,    42,    63,    91,
      92,    43,    44,    45,    46,    60,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int16 yypact[] =
{
     -72,   122,   -72,   -16,    18,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,    10,    10,    -6,    -5,    -2,     0,     2,   193,
      10,    10,   -72,    29,   -72,    -1,   -72,   -72,     1,    15,
      21,    30,    31,    33,    35,   -20,   -72,    24,   -72,   -72,
     -72,    25,   -72,   -72,   -72,   -72,   -72,   -72,   -72,    -8,
      19,   -72,   -72,    43,    10,    10,    10,    10,    34,   -72,
      20,    22,   -72,   158,   -72,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,   -72,   -72,    10,    63,   -72,
     -72,    36,    37,    39,    38,    41,    44,   -72,   -72,   -72,
      28,   193,    40,    15,   -72,    46,    21,    30,    31,    33,
     -72,   -72,    42,    48,    47,    49,   -72,    50,    52,   -72,
     193,   193,    10,   193,    10,    51,   -72,    10,   -72,    10,
     -72,   -72,    74,   228,    58,   -72,    53,   -72,    54,   -72,
      61,    64,   -72,   -72,   193,    10,    57,    82,   -72,    66,
     -72,    50,   -72,   193,    96,   -72,    67,    82,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -72,   -72,   -17,   -71,   -70,   -72,    55,    45,    65,
      32,    68,    -7,   -72,   -72,   -72,   -72,   -13,   -72,   -72,
     -72,   -72,   -72,   -44,   -36,   -72,   -19,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -47,   -72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -70
static const yytype_int16 yytable[] =
{
      58,   101,   102,    59,    61,    51,    52,   106,    77,    84,
      62,    73,    48,    74,     5,     6,     7,     8,     9,    10,
      11,    65,    49,    78,    12,    53,    54,    13,    14,    55,
      66,    56,     4,    57,    67,    64,    68,    82,    83,    59,
      85,    21,    70,    69,    90,    71,    81,   129,   130,    95,
      89,    72,    75,    76,    88,    80,    87,   105,    94,    86,
      94,    94,    94,    94,   100,   126,   107,   -68,   109,   110,
      94,   111,   115,   113,   112,   114,   117,   -34,   131,   116,
     118,   134,   119,   120,   123,   141,   136,   121,   139,   135,
     -69,   124,   125,   140,   127,    59,   -35,   128,   143,   137,
     146,    98,   147,   148,   133,   144,     0,     0,     0,     0,
      94,     0,    96,     0,     0,   138,     0,     0,    59,     0,
      93,     0,     2,     3,   145,     4,     5,     6,     7,     8,
       9,    10,    11,    97,     0,     0,    12,     0,    99,    13,
      14,     0,     0,    15,    16,     0,    17,    18,    19,    20,
       0,     0,     0,    21,     0,     0,     0,     0,    22,     0,
      23,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,     0,     0,    13,    14,     0,     0,    15,
      16,     0,    17,    18,    19,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    22,     0,    23,     5,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,     0,     0,
      13,    14,     0,     0,    15,    16,     0,    17,    18,    19,
      20,     0,     0,     0,    21,     0,     0,     0,     0,    22,
       0,    23,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,     0,     0,    13,    14,     0,     0,    15,
      16,     0,    17,    18,    19,    20,     0,     0,     0,    21,
       0,     0,     0,     0,   132,     0,    23
};

static const yytype_int16 yycheck[] =
{
      19,    72,    73,    20,    21,    12,    13,    77,    16,    56,
      23,    31,    28,    33,     4,     5,     6,     7,     8,     9,
      10,    20,     4,    31,    14,    31,    31,    17,    18,    31,
      29,    31,     3,    31,    19,    36,    15,    54,    55,    56,
      57,    31,    11,    13,    63,    12,     3,   117,   119,    66,
      63,    16,    28,    28,    32,    36,    36,    74,    65,    25,
      67,    68,    69,    70,    71,   112,     3,    39,    32,    32,
      77,    32,    91,    32,    36,    31,    30,    35,     4,    39,
      32,    23,    35,    34,    32,     3,    32,    37,   135,    36,
      39,   110,   111,    36,   113,   112,    35,   114,    32,    35,
       4,    69,    35,   147,   123,   141,    -1,    -1,    -1,    -1,
     117,    -1,    67,    -1,    -1,   134,    -1,    -1,   135,    -1,
      65,    -1,     0,     1,   143,     3,     4,     5,     6,     7,
       8,     9,    10,    68,    -1,    -1,    14,    -1,    70,    17,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,
      38,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    36,    -1,    38,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,
      -1,    38,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    36,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    14,    17,    18,    21,    22,    24,    25,    26,
      27,    31,    36,    38,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    56,    57,    58,    61,
      65,    66,    67,    71,    72,    73,    74,    76,    28,     4,
      59,    52,    52,    31,    31,    31,    31,    31,    66,    43,
      75,    43,    57,    68,    36,    20,    29,    19,    15,    13,
      11,    12,    16,    31,    33,    28,    28,    16,    31,    60,
      36,     3,    43,    43,    75,    43,    25,    36,    32,    57,
      66,    69,    70,    47,    52,    43,    48,    49,    50,    51,
      52,    44,    44,    54,    55,    43,    45,     3,    62,    32,
      32,    32,    36,    32,    31,    66,    39,    30,    32,    35,
      34,    37,    64,    32,    66,    66,    75,    66,    43,    45,
      44,     4,    36,    66,    23,    36,    32,    35,    66,    75,
      36,     3,    63,    32,    64,    66,     4,    35,    63
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
#line 85 "Integrador.y"
    {linea++;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 86 "Integrador.y"
    {linea++;;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 87 "Integrador.y"
    {printf("\nSe detecto un error sintactico en la linea %i.", linea); linea++;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 95 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 96 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (3)].nombreTipo);;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 99 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 100 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (5)].nombreTipo);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 103 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 104 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (3)].nombreTipo);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 107 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 108 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (3)].nombreTipo);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 111 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 112 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (3)].nombreTipo);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 115 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 116 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (3)].nombreTipo);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 119 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 120 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (3)].nombreTipo);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 123 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 124 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (3)].nombreTipo); if (strcmp((yyvsp[(1) - (3)].nombreTipo).tipo, (yyvsp[(3) - (3)].nombreTipo).tipo) != 0) {printf("\nError de tipos en operacion multiplicativa. En la linea %i", linea);};}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 127 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 128 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(2) - (2)].nombreTipo);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 129 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(2) - (2)].nombreTipo);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 133 "Integrador.y"
    {(yyval.nombreTipo) = (yyvsp[(1) - (1)].nombreTipo);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 135 "Integrador.y"
    {simboloAux = buscarSimbolo((yyvsp[(1) - (4)].nombreTipo).nombre); if (simboloAux != NULL) {if (compararParametros(&(simboloAux->tiposParametros), &listaParametrosAux) != 0) {printf("\nError semantico: cantidad o tipos de parametros incorrectos en invocacion de la funcion %s. En la linea %i", simboloAux->nombre, linea);}}
                                                                        else {printf("\nError semantico: la funcion %s es invocada sin previa declaracion. En la linea %i", (yyvsp[(1) - (4)].cadena), linea);}
                                                                listaParametrosAux = NULL;;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 141 "Integrador.y"
    {insertarArgumento(&listaParametrosAux, (yyvsp[(1) - (1)].nombreTipo).tipo);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 142 "Integrador.y"
    {insertarArgumento(&listaParametrosAux, (yyvsp[(3) - (3)].nombreTipo).tipo);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 145 "Integrador.y"
    {insertarArgumento(&listaParametrosAux, (yyvsp[(1) - (1)].nombreTipo).tipo);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 146 "Integrador.y"
    {insertarArgumento(&listaParametrosAux, (yyvsp[(3) - (3)].nombreTipo).tipo);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 149 "Integrador.y"
    {simboloAux = buscarSimbolo((yyvsp[(1) - (1)].cadena)); if (simboloAux != NULL) {strcpy((yyval.nombreTipo).nombre, simboloAux->nombre); strcpy((yyval.nombreTipo).tipo, simboloAux->tipo);};}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 150 "Integrador.y"
    {strcpy((yyval.nombreTipo).nombre, ""); strcpy((yyval.nombreTipo).tipo, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 151 "Integrador.y"
    {strcpy((yyval.nombreTipo).nombre, ""); strcpy((yyval.nombreTipo).tipo, "char*");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 162 "Integrador.y"
    {simboloAux = buscarSimbolo((yyvsp[(2) - (3)].cadena)); if (simboloAux == NULL) {agregarSimbolo((yyvsp[(2) - (3)].cadena), (yyvsp[(1) - (3)].cadena)); printf("\nSe declara la variable %s de tipo %s.", (yyvsp[(2) - (3)].cadena), (yyvsp[(1) - (3)].cadena));} else {printf("\nError: doble declaracion de la variable '%s'.", (yyvsp[(2) - (3)].cadena));};}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 165 "Integrador.y"
    {strcpy((yyval.cadena), (yyvsp[(1) - (2)].cadena));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 172 "Integrador.y"
    {simboloAux = agregarSimbolo((yyvsp[(2) - (6)].cadena), (yyvsp[(1) - (6)].cadena)); simboloAux->tiposParametros = listaParametrosAux; listaParametrosAux = NULL; printf("\nSe declara la funcion %s de tipo %s que recibe %i parametro/s (", (yyvsp[(2) - (6)].cadena), (yyvsp[(1) - (6)].cadena), contadorParametros); contadorParametros = 0; mostrarTipos(&(simboloAux->tiposParametros)); printf(").");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 176 "Integrador.y"
    {contadorParametros++;       push(&listaParametrosAux, (yyvsp[(1) - (3)].cadena));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 177 "Integrador.y"
    {contadorParametros++;       push(&listaParametrosAux, (yyvsp[(1) - (5)].cadena));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 180 "Integrador.y"
    {contadorParametros++;       push(&listaParametrosAux, (yyvsp[(1) - (3)].cadena));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 181 "Integrador.y"
    {contadorParametros++;       push(&listaParametrosAux, (yyvsp[(1) - (5)].cadena));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 188 "Integrador.y"
    {simboloAux = agregarSimbolo((yyvsp[(2) - (6)].cadena), (yyvsp[(1) - (6)].cadena)); simboloAux->tiposParametros = listaParametrosAux; listaParametrosAux = NULL; printf("\nSe define la funcion %s de tipo %s que recibe %i parametro/s (", (yyvsp[(2) - (6)].cadena), (yyvsp[(1) - (6)].cadena), contadorParametros); contadorParametros = 0; mostrarTipos(&(simboloAux->tiposParametros)); printf(").");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 239 "Integrador.y"
    {strcpy((yyval.cadena), "int");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 240 "Integrador.y"
    {strcpy((yyval.cadena), "int");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 241 "Integrador.y"
    {strcpy((yyval.cadena), "int");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 242 "Integrador.y"
    {strcpy((yyval.cadena), "double");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 243 "Integrador.y"
    {strcpy((yyval.cadena), "char");;}
    break;



/* Line 1455 of yacc.c  */
#line 1855 "Integrador.tab.c"
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
#line 246 "Integrador.y"


int main ()
{
        yyin = fopen("entrada.c", "r");
        yyparse ();
}
