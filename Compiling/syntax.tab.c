
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
#line 1 "syntax.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code-generator.c"
extern int nbLigne;

int err= 0;
// the variable nom will stock the name of an identifier
char nom [256];
int intValue;
char operSymbol [10];
int index;
int codeTabIndex;
int beginOfWhile;
int calledMethodIndex;
int backToMainIndex;
char calledMethodName [50];
//------------- THIS BLOCK IS FOR METHODS HANDELING---------------------
char methodName [50];
char * mehtodArgs [50];
int nbArgs=0;
int nbCalledArgs=0;
//----------------
int yyerror(char const * msg);	
int yylex();



/* Line 189 of yacc.c  */
#line 103 "syntax.tab.c"

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
     kw_class = 258,
     kw_public = 259,
     kw_static = 260,
     kw_void = 261,
     kw_main = 262,
     kw_extends = 263,
     kw_return = 264,
     kw_if = 265,
     kw_else = 266,
     kw_while = 267,
     kw_print = 268,
     kw_this = 269,
     kw_new = 270,
     kw_length = 271,
     _type = 272,
     kw_String = 273,
     openParentheses = 274,
     closeParentheses = 275,
     openSquareBrackets = 276,
     closeSquareBrackets = 277,
     openBraces = 278,
     closeBraces = 279,
     operator = 280,
     affectation = 281,
     notOperator = 282,
     dot = 283,
     Semicolon = 284,
     comma = 285,
     doubleQuote = 286,
     simpleQuote = 287,
     booleanLiteral = 288,
     integerLiteral = 289,
     identifier = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 180 "syntax.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   430

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNRULES -- Number of states.  */
#define YYNSTATES  273

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,     9,    29,    48,    49,    54,
      61,    70,    79,    88,    97,    98,   101,   104,   107,   108,
     110,   112,   113,   119,   126,   133,   138,   143,   148,   155,
     162,   169,   176,   183,   184,   186,   188,   189,   190,   207,
     222,   223,   225,   226,   229,   230,   236,   241,   246,   247,
     248,   249,   263,   264,   265,   266,   278,   285,   292,   293,
     294,   295,   304,   310,   318,   326,   334,   342,   350,   358,
     359,   360,   365,   370,   371,   376,   377,   382,   387,   392,
     396,   397,   398,   408,   410,   413,   415,   418,   420,   422,
     427,   430,   434,   435,   436,   441
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    -1,    38,    39,    43,    -1,    -1,     3,
      35,    23,     4,     5,     6,     7,    19,    18,    21,    22,
      35,    20,    23,    40,    46,    55,    24,    24,    -1,     3,
      35,    23,     4,     5,     6,     7,    19,    18,    21,    22,
       1,    20,    23,    46,    55,    24,    24,    -1,    -1,     3,
      35,    42,    44,    -1,    41,    23,    46,    49,    24,    43,
      -1,     1,    35,    44,    23,    46,    49,    24,    43,    -1,
       3,     1,    44,    23,    46,    49,    24,    43,    -1,     3,
      35,    44,     1,    46,    49,    24,    43,    -1,     3,    35,
      44,    23,    46,    49,     1,    43,    -1,    -1,     8,    35,
      -1,     1,    35,    -1,     8,     1,    -1,    -1,    35,    -1,
      34,    -1,    -1,    48,    35,    29,    47,    46,    -1,    48,
      21,    22,    35,    29,    46,    -1,    48,    35,    26,    45,
      29,    46,    -1,     1,    35,    29,    46,    -1,    48,     1,
      29,    46,    -1,    48,    35,     1,    46,    -1,     1,    35,
      26,    45,    29,    46,    -1,    48,     1,    26,    45,    29,
      46,    -1,    48,    35,     1,    45,    29,    46,    -1,    48,
      35,    26,     1,    29,    46,    -1,    48,    35,    26,    45,
       1,    46,    -1,    -1,    17,    -1,    18,    -1,    -1,    -1,
       4,    48,    35,    50,    19,    52,    20,    23,    46,    55,
       9,    65,    29,    24,    51,    49,    -1,     4,     1,    35,
      19,    52,    20,    23,    46,    55,     9,    65,    29,    24,
      49,    -1,    -1,    53,    -1,    -1,    48,    35,    -1,    -1,
      48,    35,    54,    30,    53,    -1,    23,    55,    24,    55,
      -1,    23,    46,    24,    55,    -1,    -1,    -1,    -1,    10,
      19,    65,    20,    56,    55,    11,    57,    23,    55,    24,
      58,    55,    -1,    -1,    -1,    -1,    12,    19,    59,    65,
      20,    60,    23,    55,    24,    61,    55,    -1,    13,    19,
      65,    20,    29,    55,    -1,    13,    19,    65,     1,    29,
      55,    -1,    -1,    -1,    -1,    35,    62,    26,    63,    65,
      29,    64,    55,    -1,    35,     1,    65,    29,    55,    -1,
      35,    21,    65,    22,    26,    65,    29,    -1,     1,    21,
      65,    22,    26,    65,    29,    -1,    35,     1,    65,    22,
      26,    65,    29,    -1,    35,    21,    65,     1,    26,    65,
      29,    -1,    35,    21,    65,    22,     1,    65,    29,    -1,
      35,    21,    65,    22,    26,    65,     1,    -1,    -1,    -1,
      35,    66,    25,    35,    -1,    65,    21,    65,    22,    -1,
      -1,    35,    67,    25,    34,    -1,    -1,    34,    68,    25,
      35,    -1,    65,     1,    65,    22,    -1,    65,    21,    65,
       1,    -1,    65,    28,    16,    -1,    -1,    -1,    65,    28,
      35,    69,    19,    65,    70,    71,    20,    -1,    34,    -1,
      34,     1,    -1,    33,    -1,    33,     1,    -1,    35,    -1,
      14,    -1,    15,    35,    19,    20,    -1,    27,    65,    -1,
      19,    65,    20,    -1,    -1,    -1,    30,    65,    72,    71,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    67,    78,    77,    83,    87,    87,    90,
      92,    94,    96,    98,   100,   102,   103,   104,   105,   107,
     107,   109,   109,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   124,   127,   133,   126,   139,
     142,   149,   149,   150,   163,   162,   174,   175,   177,   183,
     188,   176,   192,   196,   202,   191,   208,   209,   213,   215,
     220,   213,   234,   235,   236,   237,   238,   239,   240,   240,
     242,   242,   256,   258,   258,   268,   268,   277,   278,   279,
     280,   286,   280,   291,   297,   298,   299,   300,   306,   307,
     308,   309,   309,   311,   311,   311
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "kw_class", "kw_public", "kw_static",
  "kw_void", "kw_main", "kw_extends", "kw_return", "kw_if", "kw_else",
  "kw_while", "kw_print", "kw_this", "kw_new", "kw_length", "_type",
  "kw_String", "openParentheses", "closeParentheses", "openSquareBrackets",
  "closeSquareBrackets", "openBraces", "closeBraces", "operator",
  "affectation", "notOperator", "dot", "Semicolon", "comma", "doubleQuote",
  "simpleQuote", "booleanLiteral", "integerLiteral", "identifier",
  "$accept", "program", "$@1", "mainClass", "$@2", "classHead", "$@3",
  "classDeclaration", "parentClass", "identifierOrNumber",
  "varsDeclaration", "$@4", "typeDeclaration", "methodDeclaration", "$@5",
  "$@6", "functionVars", "functionVariables", "$@7", "statement", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16",
  "expression", "$@17", "$@18", "$@19", "$@20", "$@21",
  "anotherExpression", "$@22", 0
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
     285,   286,   287,   288,   289,   290
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    38,    37,    40,    39,    39,    42,    41,    43,
      43,    43,    43,    43,    43,    44,    44,    44,    44,    45,
      45,    47,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    48,    48,    50,    51,    49,    49,
      49,    52,    52,    53,    54,    53,    55,    55,    56,    57,
      58,    55,    59,    60,    61,    55,    55,    55,    62,    63,
      64,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      66,    65,    65,    67,    65,    68,    65,    65,    65,    65,
      69,    70,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    72,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,    19,    18,     0,     4,     6,
       8,     8,     8,     8,     0,     2,     2,     2,     0,     1,
       1,     0,     5,     6,     6,     4,     4,     4,     6,     6,
       6,     6,     6,     0,     1,     1,     0,     0,    16,    14,
       0,     1,     0,     2,     0,     5,     4,     4,     0,     0,
       0,    13,     0,     0,     0,    11,     6,     6,     0,     0,
       0,     8,     5,     7,     7,     7,     7,     7,     7,     0,
       0,     4,     4,     0,     4,     0,     4,     4,     4,     3,
       0,     0,     9,     1,     2,     1,     2,     1,     1,     4,
       2,     3,     0,     0,     4,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    40,     0,     0,    16,
      17,    15,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    40,    40,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,    20,    19,     0,    25,     0,    36,
       9,     0,    26,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    22,     0,    10,    11,    12,    13,    28,
       0,     0,    41,    42,    29,    23,    30,    31,    32,    24,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,    92,    92,    52,    92,
       0,     0,     0,    92,    92,     0,    92,     0,     0,     0,
      88,     0,    92,    92,     0,     0,    87,     0,     0,    92,
       0,     0,     0,     0,     0,    59,     0,    92,     0,     0,
       0,     0,     0,    86,    84,     0,     0,     0,    92,    92,
       0,     0,    48,     0,    92,     0,    47,    46,     0,     0,
      92,     0,    92,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    79,    80,     0,    53,     0,
       0,    92,    62,    92,    92,    92,     0,    40,     0,     6,
       0,    89,    76,    71,    74,    77,    78,    72,     0,     0,
       0,     0,    57,    56,     0,     0,     0,     0,    60,    39,
      37,     5,    64,    92,    49,     0,    65,    66,    67,    92,
      63,     0,    40,     0,     0,     0,    61,    38,    95,     0,
      54,    92,     0,     0,     0,     0,    82,    50,    55,    95,
       0,    94,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,   149,     9,    21,    10,    19,    66,
      26,    78,    27,    39,    86,   252,   101,   102,   115,   132,
     207,   254,   270,   159,   231,   264,   145,   192,   251,   202,
     176,   177,   175,   229,   258,   262,   269
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -127
static const yytype_int16 yypact[] =
{
    -127,    29,    13,  -127,    -4,   285,    39,    43,     9,    59,
    -127,    87,    16,    16,   345,   174,   121,    89,    14,   106,
     109,    16,     7,   104,  -127,  -127,   149,     5,   150,  -127,
    -127,  -127,   174,   174,  -127,   174,   396,    -6,   199,   137,
      69,   159,    12,   156,   149,   149,   149,   149,   133,   170,
     154,   161,   285,   133,   170,   162,   142,    31,  -127,   153,
     186,   190,   195,   227,  -127,  -127,   200,  -127,   211,  -127,
    -127,   205,  -127,   219,   223,  -127,   224,     8,   170,   222,
     285,   285,   285,   285,   170,   168,   235,   170,   170,   170,
     170,   170,   170,  -127,   236,  -127,  -127,  -127,  -127,  -127,
     225,   242,  -127,   168,  -127,  -127,  -127,  -127,  -127,  -127,
     254,   234,   249,   248,    24,   281,    99,   289,   295,   300,
     168,   232,    99,   301,   306,  -127,   317,   320,   328,   332,
     189,    71,   349,   232,   208,  -127,   389,   389,  -127,   389,
      80,   330,   336,   389,   389,   340,   389,   353,   246,   208,
    -127,   337,   389,   389,   273,   262,   342,   309,   183,   389,
     312,   226,   226,   119,   313,  -127,    32,   389,   346,   246,
     352,   322,   276,  -127,  -127,   348,   354,   356,   389,   389,
     363,    61,  -127,   324,   361,   364,  -127,  -127,   366,   226,
     372,    84,   389,   358,   129,   377,   378,   390,  -127,   343,
     374,   381,   327,   335,   389,  -127,  -127,    45,  -127,   226,
     226,   389,  -127,   389,   389,   389,   141,   149,   387,  -127,
     388,  -127,  -127,  -127,  -127,  -127,   389,  -127,   194,   398,
     407,   397,  -127,  -127,   250,   279,   288,   298,  -127,  -127,
    -127,  -127,  -127,   389,  -127,   246,  -127,  -127,  -127,   350,
    -127,   226,   149,    93,   402,   395,  -127,  -127,   391,   246,
    -127,   389,   406,   403,   226,   245,  -127,  -127,  -127,   391,
     226,  -127,  -127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,  -127,  -127,  -127,  -127,    -7,   114,   265,
      15,  -127,   -33,   -44,  -127,  -127,   325,   310,  -127,  -126,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -125,
    -127,  -127,  -127,  -127,  -127,   160,  -127
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -94
static const yytype_int16 yytable[] =
{
      60,    61,    62,    63,   142,    51,    40,   147,    35,    91,
      13,   157,   158,    56,   160,    30,     4,    17,   163,   164,
      48,   166,   168,    49,    18,   118,    41,   171,   172,     3,
      36,     6,    76,   178,   183,   186,   187,    92,    57,   -18,
      42,    58,   194,   196,    14,    70,   126,    44,    45,    31,
      46,    47,   100,   179,   203,   127,   -69,   128,   129,   119,
     181,   193,    11,   212,    67,    64,    65,   216,   130,    72,
     100,    75,   143,    95,    96,    97,    98,   205,    12,   228,
     131,   230,    15,   232,   233,   214,   234,   100,   235,   236,
     237,    16,   144,    93,   178,    53,   206,   -58,    54,    99,
      23,   136,   104,   105,   106,   107,   108,   109,   -33,   -33,
     215,   -33,   -33,   -81,   179,    37,    24,    25,   253,   255,
     178,   181,   -33,   -81,    29,   256,    28,    20,    22,    32,
     178,   121,    33,   263,   -33,    34,   265,   133,   268,    37,
     179,   188,   178,    23,   272,   141,   -33,   181,   189,   148,
     179,   -33,   -33,    38,   -33,   -33,    43,   181,   218,    24,
      25,    52,   179,    59,   169,   -33,   -33,    64,    65,   181,
     238,    23,    79,   239,   -33,    23,    64,    65,   -33,   -33,
     -33,    55,   -33,   -33,   178,    24,    25,    24,    25,    68,
     140,    24,    25,   -33,   -33,   178,    69,    73,   -33,   127,
      50,   128,   129,   182,   179,   -33,    24,    25,   257,    23,
      80,   181,   130,   -33,    81,   179,    24,    25,   -33,    82,
     -33,   -33,   181,   242,   131,    24,    25,   126,    83,    84,
      85,   -33,   -33,   126,    87,   -69,   127,   -69,   128,   129,
      94,   -69,   127,   -33,   128,   129,   178,   126,    88,   130,
     -69,   178,    89,    90,   103,   130,   127,   110,   128,   129,
     111,   131,   112,   174,   -44,   -93,   179,   131,   117,   130,
     -69,   179,   116,   181,   173,   -93,   114,   178,   181,   246,
     178,   131,   -83,   -83,   -83,   -14,     7,   -75,     8,   178,
     -83,   -83,   -83,   -85,   -85,   -85,   -90,   179,   -90,   249,
     179,   -85,   -85,   -85,   181,   -90,   -90,   181,   247,   179,
     178,   120,   122,   184,   190,   123,   181,   248,    71,   179,
     124,    74,    77,   178,   134,   178,   181,   250,   178,   135,
     179,   180,   185,   179,   179,   191,   226,   181,   136,   137,
     181,   181,   198,   179,   208,   179,    17,   138,   179,   225,
     181,   139,   181,    18,   161,   181,   179,   227,   146,   -68,
     162,   -68,   167,   181,   150,   151,   165,   -70,    -7,   152,
     195,   197,   170,   199,   -68,   150,   151,   153,   222,   200,
     152,   201,   217,   154,   155,   156,   150,   151,   153,   204,
     209,   152,   211,   210,   154,   155,   156,    23,   213,   153,
     -33,   219,   220,   150,   151,   154,   155,   156,   152,   223,
     221,   240,   241,    24,    25,   224,   153,   243,   244,   260,
     245,   261,   154,   155,   156,   259,   266,   267,   113,   271,
     125
};

static const yytype_uint16 yycheck[] =
{
      44,    45,    46,    47,   130,    38,     1,   133,     1,     1,
       1,   136,   137,     1,   139,     1,     3,     1,   143,   144,
      26,   146,   148,    29,     8,     1,    21,   152,   153,     0,
      23,    35,     1,     1,   159,   161,   162,    29,    26,    23,
      35,    29,   167,   169,    35,    52,     1,    32,    33,    35,
      35,    36,    85,    21,   179,    10,    11,    12,    13,    35,
      28,    29,    23,   189,    49,    34,    35,   192,    23,    54,
     103,    56,     1,    80,    81,    82,    83,    16,    35,   204,
      35,   207,    23,   209,   210,     1,   211,   120,   213,   214,
     215,     4,    21,    78,     1,    26,    35,    26,    29,    84,
       1,    21,    87,    88,    89,    90,    91,    92,     9,    10,
      26,    12,    13,    20,    21,    35,    17,    18,   243,   245,
       1,    28,    23,    30,    35,   251,     5,    13,    14,    23,
       1,   116,    23,   259,    35,    21,   261,   122,   264,    35,
      21,    22,     1,     1,   270,   130,     4,    28,    29,   134,
      21,     9,    10,     4,    12,    13,     6,    28,    29,    17,
      18,    24,    21,     7,   149,    23,    24,    34,    35,    28,
      29,     1,    19,   217,     4,     1,    34,    35,     4,     9,
      10,    22,    12,    13,     1,    17,    18,    17,    18,    35,
       1,    17,    18,    23,    24,     1,    35,    35,    24,    10,
       1,    12,    13,    20,    21,    35,    17,    18,   252,     1,
      24,    28,    23,    24,    24,    21,    17,    18,    10,    24,
      12,    13,    28,    29,    35,    17,    18,     1,     1,    29,
      19,    23,    24,     1,    29,     9,    10,    11,    12,    13,
      18,     9,    10,    35,    12,    13,     1,     1,    29,    23,
      24,     1,    29,    29,    19,    23,    10,    21,    12,    13,
      35,    35,    20,     1,    30,    20,    21,    35,    20,    23,
      24,    21,    23,    28,     1,    30,    22,     1,    28,    29,
       1,    35,    20,    21,    22,     0,     1,    25,     3,     1,
      28,    29,    30,    20,    21,    22,    20,    21,    22,     1,
      21,    28,    29,    30,    28,    29,    30,    28,    29,    21,
       1,    30,    23,     1,     1,    20,    28,    29,    53,    21,
      20,    56,    57,     1,    23,     1,    28,    29,     1,    23,
      21,    22,    20,    21,    21,    22,     1,    28,    21,    19,
      28,    28,    20,    21,    20,    21,     1,    19,    21,    22,
      28,    19,    28,     8,    24,    28,    21,    22,     9,     9,
      24,    11,     9,    28,    14,    15,    26,    25,    23,    19,
      24,    19,    35,    25,    24,    14,    15,    27,    35,    25,
      19,    25,    24,    33,    34,    35,    14,    15,    27,    26,
      29,    19,    26,    29,    33,    34,    35,     1,    26,    27,
       4,    24,    24,    14,    15,    33,    34,    35,    19,    35,
      20,    24,    24,    17,    18,    34,    27,    19,    11,    24,
      23,    30,    33,    34,    35,    23,    20,    24,   103,   269,
     120
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,     0,     3,    39,    35,     1,     3,    41,
      43,    23,    35,     1,    35,    23,     4,     1,     8,    44,
      44,    42,    44,     1,    17,    18,    46,    48,     5,    35,
       1,    35,    23,    23,    44,     1,    23,    35,     4,    49,
       1,    21,    35,     6,    46,    46,    46,    46,    26,    29,
       1,    48,    24,    26,    29,    22,     1,    26,    29,     7,
      49,    49,    49,    49,    34,    35,    45,    46,    35,    35,
      43,    45,    46,    35,    45,    46,     1,    45,    47,    19,
      24,    24,    24,     1,    29,    19,    50,    29,    29,    29,
      29,     1,    29,    46,    18,    43,    43,    43,    43,    46,
      48,    52,    53,    19,    46,    46,    46,    46,    46,    46,
      21,    35,    20,    52,    22,    54,    23,    20,     1,    35,
      30,    46,    23,    20,    20,    53,     1,    10,    12,    13,
      23,    35,    55,    46,    23,    23,    21,    19,    19,    19,
       1,    46,    55,     1,    21,    62,     9,    55,    46,    40,
      14,    15,    19,    27,    33,    34,    35,    65,    65,    59,
      65,    24,    24,    65,    65,    26,    65,     9,    55,    46,
      35,    65,    65,     1,     1,    68,    66,    67,     1,    21,
      22,    28,    20,    65,     1,    20,    55,    55,    22,    29,
       1,    22,    63,    29,    65,    24,    55,    19,    20,    25,
      25,    25,    65,    65,    26,    16,    35,    56,    20,    29,
      29,    26,    55,    26,     1,    26,    65,    24,    29,    24,
      24,    20,    35,    35,    34,    22,     1,    22,    65,    69,
      55,    60,    55,    55,    65,    65,    65,    65,    29,    49,
      24,    24,    29,    19,    11,    23,    29,    29,    29,     1,
      29,    64,    51,    65,    57,    55,    55,    49,    70,    23,
      24,    30,    71,    55,    61,    65,    20,    24,    55,    72,
      58,    71,    55
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
        case 2:

/* Line 1455 of yacc.c  */
#line 67 "syntax.y"
    {{init();};}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 68 "syntax.y"
    {{  
                           //printCodeTab();
                            verifyCalledMethods();
                            displayWarnings();
                            printSymbolTable();
                            printCodeTab();
                           //printUsedMethods();
                        };}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 78 "syntax.y"
    {  addCode("ENTREE",-1,"main");  ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 80 "syntax.y"
    {
              addCode("SORTIE",-1,"main");
            ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 84 "syntax.y"
    {yyerror ("Main method args needed"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 87 "syntax.y"
    {{
                                  addClass(nom,nbLigne);
                                  };}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 93 "syntax.y"
    {yyerror ("'class' expected"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 95 "syntax.y"
    {yyerror ("class name expected"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 97 "syntax.y"
    {yyerror ("'{' expected"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 99 "syntax.y"
    {yyerror ("'}' expected"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 103 "syntax.y"
    {yyerror ("'extends' expected"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 104 "syntax.y"
    {yyerror ("invalid Parent class name "); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 109 "syntax.y"
    {{
  
                  addVariable(nom,nbLigne,0);
                  };}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 115 "syntax.y"
    {yyerror ("invalid type declaration "); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 116 "syntax.y"
    {yyerror ("invalid identifier declaration "); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 117 "syntax.y"
    {yyerror (" ';' expected "); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 118 "syntax.y"
    {yyerror ("invalid type declaration "); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 119 "syntax.y"
    {yyerror ("invalid identifier declaration "); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 120 "syntax.y"
    {yyerror ("'=' expected "); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 121 "syntax.y"
    {yyerror ("invalid identifier affectation "); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 122 "syntax.y"
    {yyerror ("';' expected "); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 127 "syntax.y"
    {{
                        codeTabInt[calledMethodIndex].operand = nbCodes;
                        strcpy(methodName,nom);
                        addCode("ENTREE",-1,methodName);
                    };}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 133 "syntax.y"
    {
                      addCode("SORTIE",-1,methodName);
                      addCode("RETOUR",backToMainIndex,"");
                     ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 141 "syntax.y"
    {yyerror ("Missing return type"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 151 "syntax.y"
    {{
                    
                          char aux [50];
                          strcpy(aux,nom);
                          mehtodArgs[nbArgs]=(char*)malloc(50*sizeof(char));
                          memcpy(mehtodArgs[nbArgs],aux,strlen(aux)+1);
                          nbArgs ++;
                          addMethod(methodName,mehtodArgs,nbArgs,nbLigne);
                          nbArgs=0;
                    
                    };}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 163 "syntax.y"
    {{
                          char aux [50];
                          strcpy(aux,nom);
                          mehtodArgs[nbArgs]=(char*)malloc(50*sizeof(char));
                          memcpy(mehtodArgs[nbArgs],aux,strlen(aux)+1);
                          nbArgs ++;
                    };}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 177 "syntax.y"
    {
              addOperator(operSymbol);
              addCode("SIFAUX",9999,"");
              codeTabIndex=nbCodes-1;
            ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 183 "syntax.y"
    {
              addCode("SAUT",3333,"");
              codeTabInt[codeTabIndex].operand=nbCodes;
              codeTabIndex=nbCodes-1;
              ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 188 "syntax.y"
    {
              codeTabInt[codeTabIndex].operand=nbCodes;
               ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 192 "syntax.y"
    {
              beginOfWhile=nbCodes;
            ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 196 "syntax.y"
    {
              addOperator(operSymbol);
              addCode("TANTQUEFAUX",2000,"");
              codeTabIndex=nbCodes-1;
            ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 202 "syntax.y"
    {
              addCode("TANTQUE",2000,"");
              codeTabInt[codeTabIndex].operand=nbCodes;
              codeTabInt[nbCodes-1].operand=beginOfWhile;
            ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 210 "syntax.y"
    {yyerror ("Missing close parentheses"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 213 "syntax.y"
    {
              index= findIdentifier(nom);
            ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 215 "syntax.y"
    {{
            // printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
              markAsInitialisated(nom);
            };}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 220 "syntax.y"
    { 
              if (!strcmp(operSymbol,"*")){
                addCode("MUL",-1,"");                
              }
              else if (!strcmp(operSymbol,"+")){
                addCode("ADD",-1,""); 
              }
              else if (!strcmp(operSymbol,"-")){
                addCode("SUB",-1,""); 

              }
              addCode("STORE ",index,"");
            ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 234 "syntax.y"
    {yyerror ("Missing affectation"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 236 "syntax.y"
    {yyerror ("invalid expression"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 237 "syntax.y"
    {yyerror ("'[' expected"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 238 "syntax.y"
    {yyerror ("']' expected"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 239 "syntax.y"
    {yyerror ("'=' expected"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 240 "syntax.y"
    {yyerror ("';' expected"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 242 "syntax.y"
    {{
            // printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
              markAsUsed(nom);
              int index =  findIdentifier(nom);
              addCode("LDV",index,"");
            };}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 248 "syntax.y"
    {{
             //printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
              markAsUsed(nom);
              int index =  findIdentifier(nom);
              addCode("LDV",index,"");
            };}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 258 "syntax.y"
    {{
             //printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
              markAsUsed(nom);
              int index =  findIdentifier(nom);
              addCode("LDV",index,"");
            };}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 264 "syntax.y"
    {
              addCode("LDC",intValue,"");
            ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 268 "syntax.y"
    {
                addCode("LDC",intValue,"");
             ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 270 "syntax.y"
    {{
             //printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
               int index =  findIdentifier(nom);
              addCode("LDV",index,"");
            };}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 277 "syntax.y"
    {yyerror ("'[' expected"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 278 "syntax.y"
    {yyerror ("']' expected"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 280 "syntax.y"
    {{ 
               saveMethod(nom,nbLigne);
              calledMethodIndex=nbCodes;
              strcpy(calledMethodName,nom);
              addCode("APPEL",11111,"");
              backToMainIndex=nbCodes;
             };}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 286 "syntax.y"
    {{nbCalledArgs++;};}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 286 "syntax.y"
    {{
                                          //printf("Number of args: %d\n",nbCalledArgs);
                                          usedMethods[nbUsedMethods-1].nbArgs=nbCalledArgs;
                                          nbCalledArgs=0;
                                          };}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 292 "syntax.y"
    {
                index= findIdentifier(nom);
                addCode("LDC",intValue,"");
              ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 297 "syntax.y"
    {yyerror ("';' expected"); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 299 "syntax.y"
    {yyerror ("';' expected"); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 301 "syntax.y"
    {
                index= findIdentifier(nom);
                addCode("LDV",index,"");
              ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 311 "syntax.y"
    {{nbCalledArgs++;};}
    break;



/* Line 1455 of yacc.c  */
#line 2153 "syntax.tab.c"
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
#line 314 "syntax.y"


int yyerror(char const *msg) {
	err = 1;
	if(msg == "syntax error")
	  {
     fprintf(stderr, "\nerreur ligne %d :", nbLigne );
    }
  else
	{
  fprintf(stderr, msg);
  exit(0);
  }
	return 0;
}

extern FILE *yyin;

int main()
{
 yyparse();
 return 1;
}
int yywrap()
{
//     if(err==0)
  //   printf("Code compiled successfully\n");

	return(1);
}
  
     
