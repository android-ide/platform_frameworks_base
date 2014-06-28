/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"

#include "aidl_language.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yyerror(char* errstr);
int yylex(void);
extern int yylineno;

static int count_brackets(const char*);



/* Line 268 of yacc.c  */
#line 86 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.cpp"

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
     IMPORT = 258,
     PACKAGE = 259,
     IDENTIFIER = 260,
     IDVALUE = 261,
     GENERIC = 262,
     ARRAY = 263,
     PARCELABLE = 264,
     INTERFACE = 265,
     FLATTENABLE = 266,
     RPC = 267,
     IN = 268,
     OUT = 269,
     INOUT = 270,
     ONEWAY = 271
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 144 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   86

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNRULES -- Number of states.  */
#define YYNSTATES  78

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   271

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      20,    21,     2,     2,    23,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    17,
       2,    22,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,    19,     2,     2,     2,     2,
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
      15,    16
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    15,    17,    19,
      22,    23,    26,    29,    31,    33,    37,    40,    44,    48,
      51,    55,    57,    60,    62,    64,    66,    72,    78,    82,
      83,    86,    90,    97,   105,   114,   124,   125,   127,   131,
     133,   137,   139,   142,   144,   145,   147,   149
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      25,     0,    -1,    29,    -1,    26,    29,    -1,    27,    -1,
      28,    -1,    27,    28,    -1,     4,    -1,     3,    -1,     3,
      28,    -1,    -1,    29,    30,    -1,    29,     1,    -1,    31,
      -1,    34,    -1,     9,     5,    17,    -1,     9,    17,    -1,
       9,     1,    17,    -1,    11,     5,    17,    -1,    11,    17,
      -1,    11,     1,    17,    -1,    10,    -1,    16,    10,    -1,
      12,    -1,    10,    -1,    12,    -1,    32,     5,    18,    35,
      19,    -1,    33,     1,    18,    35,    19,    -1,    33,     1,
      19,    -1,    -1,    35,    36,    -1,    35,     1,    17,    -1,
      39,     5,    20,    37,    21,    17,    -1,    16,    39,     5,
      20,    37,    21,    17,    -1,    39,     5,    20,    37,    21,
      22,     6,    17,    -1,    16,    39,     5,    20,    37,    21,
      22,     6,    17,    -1,    -1,    38,    -1,    37,    23,    38,
      -1,     1,    -1,    40,    39,     5,    -1,     5,    -1,     5,
       8,    -1,     7,    -1,    -1,    13,    -1,    14,    -1,    15,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    33,    37,    38,    39,    43,    47,    48,
      52,    53,    70,    78,    79,    83,    94,    99,   104,   115,
     120,   129,   139,   149,   162,   163,   167,   176,   181,   190,
     191,   203,   211,   229,   247,   265,   286,   287,   288,   300,
     307,   319,   324,   329,   337,   338,   339,   340
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "PACKAGE", "IDENTIFIER",
  "IDVALUE", "GENERIC", "ARRAY", "PARCELABLE", "INTERFACE", "FLATTENABLE",
  "RPC", "IN", "OUT", "INOUT", "ONEWAY", "';'", "'{'", "'}'", "'('", "')'",
  "'='", "','", "$accept", "document", "headers", "package", "imports",
  "document_items", "declaration", "parcelable_decl", "interface_header",
  "interface_keywords", "interface_decl", "interface_items", "method_decl",
  "arg_list", "arg", "type", "direction", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    59,   123,   125,
      40,    41,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    24,    25,    25,    26,    26,    26,    27,    28,    28,
      29,    29,    29,    30,    30,    31,    31,    31,    31,    31,
      31,    32,    32,    32,    33,    33,    34,    34,    34,    35,
      35,    35,    36,    36,    36,    36,    37,    37,    37,    37,
      38,    39,    39,    39,    40,    40,    40,    40
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     1,     2,
       0,     2,     2,     1,     1,     3,     2,     3,     3,     2,
       3,     1,     2,     1,     1,     1,     5,     5,     3,     0,
       2,     3,     6,     7,     8,     9,     0,     1,     3,     1,
       3,     1,     2,     1,     0,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,     8,     7,     0,    10,     4,     5,     0,     9,     1,
       0,     6,    12,     0,    21,     0,    23,     0,    11,    13,
       0,     0,    14,     0,     0,    16,     0,     0,    19,    22,
       0,     0,    17,    15,    20,    18,    29,    29,    28,     0,
       0,     0,    41,    43,     0,    26,    30,     0,    27,    31,
      42,     0,     0,     0,     0,     0,    39,    45,    46,    47,
       0,    37,     0,     0,     0,    44,     0,     0,    32,     0,
      38,    40,    33,     0,     0,     0,    34,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,    18,    19,    20,    21,
      22,    39,    46,    60,    61,    47,    62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -42
static const yytype_int8 yypact[] =
{
      60,    15,   -42,     2,   -42,    15,   -42,    23,   -42,   -42,
      36,   -42,   -42,    26,    49,    37,    52,    18,   -42,   -42,
      61,    56,   -42,    48,    53,   -42,    54,    55,   -42,   -42,
      57,    22,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
      10,    59,    65,   -42,    51,   -42,   -42,    62,   -42,   -42,
     -42,    63,    58,    64,    -1,    -1,   -42,   -42,   -42,   -42,
      38,   -42,    51,    39,     8,    -5,    69,    27,   -42,    71,
     -42,   -42,   -42,    73,    66,    68,   -42,   -42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -42,   -42,   -42,   -42,    50,    76,   -42,   -42,   -42,   -42,
     -42,    32,   -42,    31,    16,   -41,   -42
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -45
static const yytype_int8 yytable[] =
{
      56,    41,     9,    51,   -44,    42,   -44,    43,    57,    58,
      59,    41,    57,    58,    59,    42,    44,    43,     1,    45,
     -36,    66,   -36,    -2,    12,    68,    44,    23,    29,    48,
      69,    24,    13,    14,    15,    16,    -3,    12,    26,    17,
      37,    38,    27,    25,    72,    13,    14,    15,    16,    73,
     -24,     8,    17,   -25,    28,    11,    42,    31,    43,    64,
      67,    65,    65,     1,     2,    32,    30,    52,    53,    40,
      33,    34,    35,    50,    71,    36,    49,    74,    54,    75,
      10,    70,     0,    76,    55,    77,    63
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-42))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       1,     1,     0,    44,     5,     5,     7,     7,    13,    14,
      15,     1,    13,    14,    15,     5,    16,     7,     3,    19,
      21,    62,    23,     0,     1,    17,    16,     1,    10,    19,
      22,     5,     9,    10,    11,    12,     0,     1,     1,    16,
      18,    19,     5,    17,    17,     9,    10,    11,    12,    22,
       1,     1,    16,     1,    17,     5,     5,     1,     7,    21,
      21,    23,    23,     3,     4,    17,     5,     5,     5,    37,
      17,    17,    17,     8,     5,    18,    17,     6,    20,     6,
       4,    65,    -1,    17,    20,    17,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    25,    26,    27,    28,    29,    28,     0,
      29,    28,     1,     9,    10,    11,    12,    16,    30,    31,
      32,    33,    34,     1,     5,    17,     1,     5,    17,    10,
       5,     1,    17,    17,    17,    17,    18,    18,    19,    35,
      35,     1,     5,     7,    16,    19,    36,    39,    19,    17,
       8,    39,     5,     5,    20,    20,     1,    13,    14,    15,
      37,    38,    40,    37,    21,    23,    39,    21,    17,    22,
      38,     5,    17,    22,     6,     6,    17,    17
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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

/* Line 1806 of yacc.c  */
#line 32 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { g_callbacks->document((yyvsp[(1) - (1)]).document_item); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 33 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { g_callbacks->document((yyvsp[(2) - (2)]).document_item); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 37 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 38 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 39 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 43 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 47 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { g_callbacks->import(&((yyvsp[(1) - (1)]).buffer)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 48 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { g_callbacks->import(&((yyvsp[(1) - (2)]).buffer)); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 52 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { (yyval).document_item = NULL; }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 53 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                    if ((yyvsp[(2) - (2)]).document_item == NULL) {
                                                        // error cases only
                                                        (yyval) = (yyvsp[(1) - (2)]);
                                                    } else {
                                                        document_item_type* p = (yyvsp[(1) - (2)]).document_item;
                                                        while (p && p->next) {
                                                            p=p->next;
                                                        }
                                                        if (p) {
                                                            p->next = (document_item_type*)(yyvsp[(2) - (2)]).document_item;
                                                            (yyval) = (yyvsp[(1) - (2)]);
                                                        } else {
                                                            (yyval).document_item = (document_item_type*)(yyvsp[(2) - (2)]).document_item;
                                                        }
                                                    }
                                                }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 70 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                    fprintf(stderr, "%s:%d: syntax error don't know what to do with \"%s\"\n", g_currentFilename,
                                                            (yyvsp[(2) - (2)]).buffer.lineno, (yyvsp[(2) - (2)]).buffer.data);
                                                    (yyval) = (yyvsp[(1) - (2)]);
                                                }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 78 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { (yyval).document_item = (document_item_type*)(yyvsp[(1) - (1)]).user_data; }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 79 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { (yyval).document_item = (document_item_type*)(yyvsp[(1) - (1)]).interface_item; }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 83 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        user_data_type* b = (user_data_type*)malloc(sizeof(user_data_type));
                                                        b->document_item.item_type = USER_DATA_TYPE;
                                                        b->document_item.next = NULL;
                                                        b->keyword_token = (yyvsp[(1) - (3)]).buffer;
                                                        b->name = (yyvsp[(2) - (3)]).buffer;
                                                        b->package = g_currentPackage ? strdup(g_currentPackage) : NULL;
                                                        b->semicolon_token = (yyvsp[(3) - (3)]).buffer;
                                                        b->flattening_methods = PARCELABLE_DATA;
                                                        (yyval).user_data = b;
                                                    }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 94 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        fprintf(stderr, "%s:%d syntax error in parcelable declaration. Expected type name.\n",
                                                                     g_currentFilename, (yyvsp[(1) - (2)]).buffer.lineno);
                                                        (yyval).user_data = NULL;
                                                    }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 99 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        fprintf(stderr, "%s:%d syntax error in parcelable declaration. Expected type name, saw \"%s\".\n",
                                                                     g_currentFilename, (yyvsp[(2) - (3)]).buffer.lineno, (yyvsp[(2) - (3)]).buffer.data);
                                                        (yyval).user_data = NULL;
                                                    }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 104 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        user_data_type* b = (user_data_type*)malloc(sizeof(user_data_type));
                                                        b->document_item.item_type = USER_DATA_TYPE;
                                                        b->document_item.next = NULL;
                                                        b->keyword_token = (yyvsp[(1) - (3)]).buffer;
                                                        b->name = (yyvsp[(2) - (3)]).buffer;
                                                        b->package = g_currentPackage ? strdup(g_currentPackage) : NULL;
                                                        b->semicolon_token = (yyvsp[(3) - (3)]).buffer;
                                                        b->flattening_methods = PARCELABLE_DATA | RPC_DATA;
                                                        (yyval).user_data = b;
                                                    }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 115 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        fprintf(stderr, "%s:%d syntax error in flattenable declaration. Expected type name.\n",
                                                                     g_currentFilename, (yyvsp[(1) - (2)]).buffer.lineno);
                                                        (yyval).user_data = NULL;
                                                    }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 120 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        fprintf(stderr, "%s:%d syntax error in flattenable declaration. Expected type name, saw \"%s\".\n",
                                                                     g_currentFilename, (yyvsp[(2) - (3)]).buffer.lineno, (yyvsp[(2) - (3)]).buffer.data);
                                                        (yyval).user_data = NULL;
                                                    }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 129 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        interface_type* c = (interface_type*)malloc(sizeof(interface_type));
                                                        c->document_item.item_type = INTERFACE_TYPE_BINDER;
                                                        c->document_item.next = NULL;
                                                        c->interface_token = (yyvsp[(1) - (1)]).buffer;
                                                        c->oneway = false;
                                                        memset(&c->oneway_token, 0, sizeof(buffer_type));
                                                        c->comments_token = &c->interface_token;
                                                        (yyval).interface_obj = c;
                                                   }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 139 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        interface_type* c = (interface_type*)malloc(sizeof(interface_type));
                                                        c->document_item.item_type = INTERFACE_TYPE_BINDER;
                                                        c->document_item.next = NULL;
                                                        c->interface_token = (yyvsp[(2) - (2)]).buffer;
                                                        c->oneway = true;
                                                        c->oneway_token = (yyvsp[(1) - (2)]).buffer;
                                                        c->comments_token = &c->oneway_token;
                                                        (yyval).interface_obj = c;
                                                   }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 149 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        interface_type* c = (interface_type*)malloc(sizeof(interface_type));
                                                        c->document_item.item_type = INTERFACE_TYPE_RPC;
                                                        c->document_item.next = NULL;
                                                        c->interface_token = (yyvsp[(1) - (1)]).buffer;
                                                        c->oneway = false;
                                                        memset(&c->oneway_token, 0, sizeof(buffer_type));
                                                        c->comments_token = &c->interface_token;
                                                        (yyval).interface_obj = c;
                                                   }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 167 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { 
                                                        interface_type* c = (yyvsp[(1) - (5)]).interface_obj;
                                                        c->name = (yyvsp[(2) - (5)]).buffer;
                                                        c->package = g_currentPackage ? strdup(g_currentPackage) : NULL;
                                                        c->open_brace_token = (yyvsp[(3) - (5)]).buffer;
                                                        c->interface_items = (yyvsp[(4) - (5)]).interface_item;
                                                        c->close_brace_token = (yyvsp[(5) - (5)]).buffer;
                                                        (yyval).interface_obj = c;
                                                    }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 176 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        fprintf(stderr, "%s:%d: syntax error in interface declaration.  Expected type name, saw \"%s\"\n",
                                                                    g_currentFilename, (yyvsp[(2) - (5)]).buffer.lineno, (yyvsp[(2) - (5)]).buffer.data);
                                                        (yyval).document_item = NULL;
                                                    }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 181 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        fprintf(stderr, "%s:%d: syntax error in interface declaration.  Expected type name, saw \"%s\"\n",
                                                                    g_currentFilename, (yyvsp[(2) - (3)]).buffer.lineno, (yyvsp[(2) - (3)]).buffer.data);
                                                        (yyval).document_item = NULL;
                                                    }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 190 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { (yyval).interface_item = NULL; }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 191 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        interface_item_type* p=(yyvsp[(1) - (2)]).interface_item;
                                                        while (p && p->next) {
                                                            p=p->next;
                                                        }
                                                        if (p) {
                                                            p->next = (interface_item_type*)(yyvsp[(2) - (2)]).method;
                                                            (yyval) = (yyvsp[(1) - (2)]);
                                                        } else {
                                                            (yyval).interface_item = (interface_item_type*)(yyvsp[(2) - (2)]).method;
                                                        }
                                                    }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 203 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        fprintf(stderr, "%s:%d: syntax error before ';' (expected method declaration)\n",
                                                                    g_currentFilename, (yyvsp[(3) - (3)]).buffer.lineno);
                                                        (yyval) = (yyvsp[(1) - (3)]);
                                                    }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 211 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        method_type *method = (method_type*)malloc(sizeof(method_type));
                                                        method->interface_item.item_type = METHOD_TYPE;
                                                        method->interface_item.next = NULL;
                                                        method->oneway = false;
                                                        method->type = (yyvsp[(1) - (6)]).type;
                                                        memset(&method->oneway_token, 0, sizeof(buffer_type));
                                                        method->name = (yyvsp[(2) - (6)]).buffer;
                                                        method->open_paren_token = (yyvsp[(3) - (6)]).buffer;
                                                        method->args = (yyvsp[(4) - (6)]).arg;
                                                        method->close_paren_token = (yyvsp[(5) - (6)]).buffer;
                                                        method->hasId = false;
                                                        memset(&method->equals_token, 0, sizeof(buffer_type));
                                                        memset(&method->id, 0, sizeof(buffer_type));
                                                        method->semicolon_token = (yyvsp[(6) - (6)]).buffer;
                                                        method->comments_token = &method->type.type;
                                                        (yyval).method = method;
                                                    }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 229 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        method_type *method = (method_type*)malloc(sizeof(method_type));
                                                        method->interface_item.item_type = METHOD_TYPE;
                                                        method->interface_item.next = NULL;
                                                        method->oneway = true;
                                                        method->oneway_token = (yyvsp[(1) - (7)]).buffer;
                                                        method->type = (yyvsp[(2) - (7)]).type;
                                                        method->name = (yyvsp[(3) - (7)]).buffer;
                                                        method->open_paren_token = (yyvsp[(4) - (7)]).buffer;
                                                        method->args = (yyvsp[(5) - (7)]).arg;
                                                        method->close_paren_token = (yyvsp[(6) - (7)]).buffer;
                                                        method->hasId = false;
                                                        memset(&method->equals_token, 0, sizeof(buffer_type));
                                                        memset(&method->id, 0, sizeof(buffer_type));
                                                        method->semicolon_token = (yyvsp[(7) - (7)]).buffer;
                                                        method->comments_token = &method->oneway_token;
                                                        (yyval).method = method;
                                                    }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 247 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        method_type *method = (method_type*)malloc(sizeof(method_type));
                                                        method->interface_item.item_type = METHOD_TYPE;
                                                        method->interface_item.next = NULL;
                                                        method->oneway = false;
                                                        memset(&method->oneway_token, 0, sizeof(buffer_type));
                                                        method->type = (yyvsp[(1) - (8)]).type;
                                                        method->name = (yyvsp[(2) - (8)]).buffer;
                                                        method->open_paren_token = (yyvsp[(3) - (8)]).buffer;
                                                        method->args = (yyvsp[(4) - (8)]).arg;
                                                        method->close_paren_token = (yyvsp[(5) - (8)]).buffer;
                                                        method->hasId = true;
                                                        method->equals_token = (yyvsp[(6) - (8)]).buffer;
                                                        method->id = (yyvsp[(7) - (8)]).buffer;
                                                        method->semicolon_token = (yyvsp[(8) - (8)]).buffer;
                                                        method->comments_token = &method->type.type;
                                                        (yyval).method = method;
                                                    }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 265 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                        method_type *method = (method_type*)malloc(sizeof(method_type));
                                                        method->interface_item.item_type = METHOD_TYPE;
                                                        method->interface_item.next = NULL;
                                                        method->oneway = true;
                                                        method->oneway_token = (yyvsp[(1) - (9)]).buffer;
                                                        method->type = (yyvsp[(2) - (9)]).type;
                                                        method->name = (yyvsp[(3) - (9)]).buffer;
                                                        method->open_paren_token = (yyvsp[(4) - (9)]).buffer;
                                                        method->args = (yyvsp[(5) - (9)]).arg;
                                                        method->close_paren_token = (yyvsp[(6) - (9)]).buffer;
                                                        method->hasId = true;
                                                        method->equals_token = (yyvsp[(7) - (9)]).buffer;
                                                        method->id = (yyvsp[(8) - (9)]).buffer;
                                                        method->semicolon_token = (yyvsp[(9) - (9)]).buffer;
                                                        method->comments_token = &method->oneway_token;
                                                        (yyval).method = method;
                                                    }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 286 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { (yyval).arg = NULL; }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 287 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 288 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                    if ((yyval).arg != NULL) {
                                        // only NULL on error
                                        (yyval) = (yyvsp[(1) - (3)]);
                                        arg_type *p = (yyvsp[(1) - (3)]).arg;
                                        while (p && p->next) {
                                            p=p->next;
                                        }
                                        (yyvsp[(3) - (3)]).arg->comma_token = (yyvsp[(2) - (3)]).buffer;
                                        p->next = (yyvsp[(3) - (3)]).arg;
                                    }
                                }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 300 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                    fprintf(stderr, "%s:%d: syntax error in parameter list\n", g_currentFilename, (yyvsp[(1) - (1)]).buffer.lineno);
                                    (yyval).arg = NULL;
                                }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 307 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                                arg_type* arg = (arg_type*)malloc(sizeof(arg_type));
                                                memset(&arg->comma_token, 0, sizeof(buffer_type));
                                                arg->direction = (yyvsp[(1) - (3)]).buffer;
                                                arg->type = (yyvsp[(2) - (3)]).type;
                                                arg->name = (yyvsp[(3) - (3)]).buffer;
                                                arg->next = NULL;
                                                (yyval).arg = arg;
                                      }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 319 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                    (yyval).type.type = (yyvsp[(1) - (1)]).buffer;
                                    init_buffer_type(&(yyval).type.array_token, yylineno);
                                    (yyval).type.dimension = 0;
                                }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 324 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                    (yyval).type.type = (yyvsp[(1) - (2)]).buffer;
                                    (yyval).type.array_token = (yyvsp[(2) - (2)]).buffer;
                                    (yyval).type.dimension = count_brackets((yyvsp[(2) - (2)]).buffer.data);
                                }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 329 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    {
                                    (yyval).type.type = (yyvsp[(1) - (1)]).buffer;
                                    init_buffer_type(&(yyval).type.array_token, yylineno);
                                    (yyval).type.dimension = 0;
                                }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 337 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { init_buffer_type(&(yyval).buffer, yylineno); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 338 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { (yyval).buffer = (yyvsp[(1) - (1)]).buffer; }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 339 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { (yyval).buffer = (yyvsp[(1) - (1)]).buffer; }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 340 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"
    { (yyval).buffer = (yyvsp[(1) - (1)]).buffer; }
    break;



/* Line 1806 of yacc.c  */
#line 1956 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 343 "jni/platform/frameworks/base/tools/aidl/aidl_language_y.y"


#include <ctype.h>
#include <stdio.h>

int g_error = 0;

int yyerror(char* errstr)
{
    fprintf(stderr, "%s:%d: %s\n", g_currentFilename, yylineno, errstr);
    g_error = 1;
    return 1;
}

void init_buffer_type(buffer_type* buf, int lineno)
{
    buf->lineno = lineno;
    buf->token = 0;
    buf->data = NULL;
    buf->extra = NULL;
}

static int count_brackets(const char* s)
{
    int n=0;
    while (*s) {
        if (*s == '[') n++;
        s++;
    }
    return n;
}

