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

/* Substitute the variable and function names.  */
#define yyparse         yybpparse
#define yylex           yybplex
#define yyerror         yybperror
#define yylval          yybplval
#define yychar          yybpchar
#define yydebug         yybpdebug
#define yynerrs         yybpnerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "parser.y"

#include <i2string.h>

#include "bp_parser.h"
#include "bp_typecheck.h"

#define YYSTYPE unsigned
#define PARSER bp_parser

#include "y.tab.h"

#define YYMAXDEPTH 200000
#define YYSTYPE_IS_TRIVIAL 1

/*------------------------------------------------------------------------*/

#define yylineno yybplineno
#define yytext yybptext

#define yyerror yybperror
int yybperror(const std::string &error);
int yylex();
extern char *yytext;

/*------------------------------------------------------------------------*/

#define mto(x, y) stack(x).move_to_operands(stack(y))
#define binary(x, y, id, z) { init(x, id); \
  stack(x).reserve_operands(2); mto(x, y); mto(x, z); }

/*******************************************************************\

Function: init

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

static void init(exprt &expr)
{
  expr.clear();

  locationt &location=expr.location();
  location.set_line(PARSER.line_no);

  if(PARSER.filename!=irep_idt())
    location.set_file(PARSER.filename);

  if(PARSER.function!=irep_idt())
    location.set_function(PARSER.function);
}

/*******************************************************************\

Function: init

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

static void init(YYSTYPE &expr)
{
  newstack(expr);
  init(stack(expr));
}

/*******************************************************************\

Function: init

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

static void init(YYSTYPE &expr, const irep_idt &id)
{
  init(expr);
  stack(expr).id(id);
}

/*******************************************************************\

Function: j_binary

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

static void j_binary(YYSTYPE &dest, YYSTYPE &op1,
                     const irep_idt &id, YYSTYPE &op2)
{
  if(stack(op1).id()==id)
  {
    dest=op1;
    mto(dest, op2);
  }
  else if(stack(op2).id()==id)
  {
    dest=op2;
    mto(dest, op1);
  }
  else
    binary(dest, op1, id, op2);
}

/*******************************************************************\

Function: statement

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

static void statement(YYSTYPE &dest, const irep_idt &statement)
{
  init(dest, ID_code);
  stack(dest).set(ID_statement, statement);
}

/*******************************************************************\

Function: new_declaration

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

static void new_declaration(YYSTYPE &decl)
{
  PARSER.parse_tree.declarations.push_back(exprt());
  PARSER.parse_tree.declarations.back().swap(stack(decl));
}

/*------------------------------------------------------------------------*/



/* Line 268 of yacc.c  */
#line 241 "y.tab.cpp"

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
     BEGIN_Token = 258,
     END_Token = 259,
     DECL_Token = 260,
     VOID_Token = 261,
     BOOL_Token = 262,
     GOTO_Token = 263,
     ENFORCE_Token = 264,
     IF_Token = 265,
     THEN_Token = 266,
     ELSE_Token = 267,
     ELSIF_Token = 268,
     FI_Token = 269,
     SKIP_Token = 270,
     WHILE_Token = 271,
     DO_Token = 272,
     OD_Token = 273,
     ABORTIF_Token = 274,
     START_THREAD_Token = 275,
     END_THREAD_Token = 276,
     THREAD_LOCAL_Token = 277,
     SYNC_Token = 278,
     ATOMIC_BEGIN_Token = 279,
     ATOMIC_END_Token = 280,
     DEAD_Token = 281,
     RETURN_Token = 282,
     SCHOOSE_Token = 283,
     IDENTIFIER_Token = 284,
     NUMBER_Token = 285,
     DFS_Token = 286,
     ASSIGN_Token = 287,
     CONSTRAIN_Token = 288,
     NEQ_Token = 289,
     EQ_Token = 290,
     IMPLIES_Token = 291,
     EQUIV_Token = 292,
     XOR_Token = 293,
     OR_Token = 294,
     AND_Token = 295,
     TICK_Token = 296
   };
#endif
/* Tokens.  */
#define BEGIN_Token 258
#define END_Token 259
#define DECL_Token 260
#define VOID_Token 261
#define BOOL_Token 262
#define GOTO_Token 263
#define ENFORCE_Token 264
#define IF_Token 265
#define THEN_Token 266
#define ELSE_Token 267
#define ELSIF_Token 268
#define FI_Token 269
#define SKIP_Token 270
#define WHILE_Token 271
#define DO_Token 272
#define OD_Token 273
#define ABORTIF_Token 274
#define START_THREAD_Token 275
#define END_THREAD_Token 276
#define THREAD_LOCAL_Token 277
#define SYNC_Token 278
#define ATOMIC_BEGIN_Token 279
#define ATOMIC_END_Token 280
#define DEAD_Token 281
#define RETURN_Token 282
#define SCHOOSE_Token 283
#define IDENTIFIER_Token 284
#define NUMBER_Token 285
#define DFS_Token 286
#define ASSIGN_Token 287
#define CONSTRAIN_Token 288
#define NEQ_Token 289
#define EQ_Token 290
#define IMPLIES_Token 291
#define EQUIV_Token 292
#define XOR_Token 293
#define OR_Token 294
#define AND_Token 295
#define TICK_Token 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 365 "y.tab.cpp"

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  152

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,     2,     2,     2,
      44,    45,    49,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    42,
      46,     2,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    53,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    15,    18,    20,
      24,    26,    30,    31,    33,    34,    36,    40,    42,    44,
      49,    50,    51,    59,    60,    62,    64,    68,    69,    72,
      74,    78,    80,    86,    93,    96,   102,   107,   113,   116,
     118,   122,   127,   129,   132,   134,   137,   139,   142,   145,
     147,   150,   152,   154,   157,   159,   161,   163,   165,   167,
     169,   171,   173,   175,   177,   179,   181,   183,   185,   187,
     189,   191,   193,   194,   196,   199,   204,   208,   212,   214,
     216,   218,   220,   224,   228,   232,   236,   240,   244,   248,
     250,   252,   257,   259,   261,   264,   267
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    57,    -1,    56,    57,    -1,
      58,    42,    -1,    65,    -1,     5,    59,    -1,    98,    -1,
      59,    43,    98,    -1,    99,    -1,    60,    43,    99,    -1,
      -1,    59,    -1,    -1,    60,    -1,    44,    61,    45,    -1,
       6,    -1,     7,    -1,     7,    46,    30,    47,    -1,    -1,
      -1,    68,    64,    97,    66,    63,    69,    67,    -1,    -1,
      31,    -1,    70,    -1,     3,    71,     4,    -1,    -1,    72,
      42,    -1,    72,    -1,    72,    42,    90,    -1,    90,    -1,
      10,    99,    11,    71,    14,    -1,    10,    99,    11,    71,
      74,    14,    -1,    12,    71,    -1,    13,    99,    11,    71,
      74,    -1,    13,    99,    11,    71,    -1,    16,    99,    17,
      71,    18,    -1,     8,    77,    -1,    96,    -1,    77,    43,
      96,    -1,    97,    44,    62,    45,    -1,    78,    -1,    27,
      60,    -1,    27,    -1,     9,    99,    -1,    15,    -1,    19,
      99,    -1,    20,    90,    -1,    21,    -1,    23,    29,    -1,
      24,    -1,    25,    -1,    26,    60,    -1,    81,    -1,    83,
      -1,    82,    -1,    89,    -1,    76,    -1,    79,    -1,    80,
      -1,    75,    -1,    73,    -1,    95,    -1,    94,    -1,    91,
      -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    58,    -1,    -1,    93,    -1,    33,    99,    -1,    60,
      32,    60,    92,    -1,    60,    32,    78,    -1,    96,    48,
      90,    -1,    29,    -1,    29,    -1,    29,    -1,   101,    -1,
      99,    36,    99,    -1,    99,    40,    99,    -1,    99,    39,
      99,    -1,    99,    38,    99,    -1,    99,    35,    99,    -1,
      99,    34,    99,    -1,    44,    99,    45,    -1,    49,    -1,
      98,    -1,    28,    50,    60,    51,    -1,    30,    -1,   100,
      -1,    52,   101,    -1,    53,   101,    -1,    41,   101,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   209,   209,   212,   213,   216,   217,   220,   226,   228,
     232,   234,   238,   239,   242,   243,   246,   249,   250,   251,
     259,   261,   258,   271,   272,   275,   278,   281,   282,   283,
     287,   288,   291,   294,   300,   302,   306,   312,   317,   332,
     336,   342,   352,   355,   359,   362,   370,   376,   382,   388,
     393,   399,   404,   409,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   434,   441,   445,   448,   454,   472,   479,   487,   490,
     496,   503,   504,   505,   506,   507,   508,   509,   512,   513,
     514,   515,   520,   528,   529,   530,   531
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"begin\"", "\"end\"", "\"decl\"",
  "\"void\"", "\"bool\"", "\"goto\"", "\"enforce\"", "\"if\"", "\"then\"",
  "\"else\"", "\"elsif\"", "\"fi\"", "\"skip\"", "\"while\"", "\"do\"",
  "\"od\"", "\"abortif\"", "\"start_thread\"", "\"end_thread\"",
  "\"thread_local\"", "\"sync\"", "\"atomic_begin\"", "\"atomic_end\"",
  "\"dead\"", "\"return\"", "\"schoose\"", "IDENTIFIER_Token",
  "NUMBER_Token", "\"dfs\"", "\":=\"", "\"constrain\"", "\"!=\"", "\"=\"",
  "IMPLIES_Token", "EQUIV_Token", "XOR_Token", "OR_Token", "AND_Token",
  "TICK_Token", "';'", "','", "'('", "')'", "'<'", "'>'", "':'", "'*'",
  "'['", "']'", "'!'", "'~'", "$accept", "start", "declarations",
  "declaration", "variable_declaration", "variable_list",
  "expression_list", "variable_list_opt", "expression_list_opt",
  "argument_list", "type", "function_definition", "$@1", "$@2", "dfs_opt",
  "function_body", "block_statement", "statement_list",
  "statement_list_rec", "if_statement", "elsif_list", "while_statement",
  "goto_statement", "label_list", "function_call",
  "function_call_statement", "return_statement", "enforce_statement",
  "skip_statement", "abortif_statement", "start_thread_statement",
  "end_thread_statement", "sync_statement", "atomic_begin_statement",
  "atomic_end_statement", "dead_statement", "statement", "decl_statement",
  "constrain_opt", "constrain", "assignment_statement",
  "labeled_statement", "label", "function_name", "variable_name",
  "expression", "primary_expression", "unary_expression", 0
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
     295,   296,    59,    44,    40,    41,    60,    62,    58,    42,
      91,    93,    33,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    60,    61,    61,    62,    62,    63,    64,    64,    64,
      66,    67,    65,    68,    68,    69,    70,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    75,    76,    77,
      77,    78,    79,    80,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    92,    92,    93,    94,    94,    95,    96,    97,
      98,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   101,   101,   101,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     2,     1,     3,
       1,     3,     0,     1,     0,     1,     3,     1,     1,     4,
       0,     0,     7,     0,     1,     1,     3,     0,     2,     1,
       3,     1,     5,     6,     2,     5,     4,     5,     2,     1,
       3,     4,     1,     2,     1,     2,     1,     2,     2,     1,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     2,     4,     3,     3,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     4,     1,     1,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      23,     0,    24,     0,    23,     3,     0,     6,     0,    80,
       7,     8,     1,     4,     5,    17,    18,     0,     0,     0,
      79,    20,     9,     0,     0,    19,    12,     0,    13,     0,
      27,    21,    25,    16,     0,     0,     0,    46,     0,     0,
       0,    49,     0,    51,    52,     0,    44,     0,    80,    92,
       0,     0,    89,     0,     0,    71,     0,     0,    29,    62,
      61,    58,    42,    59,    60,    54,    56,    55,    66,    67,
      68,    69,    70,    57,    31,    65,    64,    63,     0,     0,
      90,    10,    93,    81,    22,    78,    38,    39,    45,     0,
       0,    47,    48,    50,    53,    43,     0,    96,     0,    94,
      95,     0,     0,    26,    28,     0,    14,     0,     0,     0,
       0,     0,     0,     0,    27,    27,     0,    88,    80,    72,
      76,    11,    30,    77,    15,     0,    87,    86,    82,    85,
      84,    83,    40,     0,     0,    91,     0,    75,    73,    41,
      27,     0,    32,     0,    37,    74,    34,     0,    33,    27,
      36,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    55,    10,    56,    29,   125,    27,
      17,     7,    24,    84,     8,    31,    32,    57,    58,    59,
     143,    60,    61,    86,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,   137,   138,
      76,    77,    78,    79,    80,    81,    82,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int16 yypact[] =
{
      10,    -3,   -98,    35,     5,   -98,    12,   -98,    89,   -98,
      16,   -98,   -98,   -98,   -98,   -98,    23,    56,    -3,    70,
     -98,   -98,   -98,    57,    68,   -98,    -3,   106,    16,    69,
       4,   -98,   -98,   -98,    94,    58,    58,   -98,    58,    58,
       4,   -98,   105,   -98,   -98,    58,    58,    80,    -4,   -98,
      58,    58,   -98,    58,    58,   -98,   -21,   140,   104,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,    97,   107,
     -98,   101,   -98,   -98,   -98,   -98,   109,   -98,   101,    26,
      86,   101,   -98,   -98,   110,   110,    58,   -98,    93,   -98,
     -98,    64,    58,   -98,     4,     4,    58,    58,    58,    58,
      58,    58,    58,    94,     4,     4,    -1,   -98,   111,     6,
     -98,   101,   -98,   -98,   110,   102,   101,   101,   101,   103,
     108,   -98,   -98,    77,   131,   -98,    58,   -98,   -98,   -98,
       4,    58,   -98,   136,   -98,   101,   -98,    44,   -98,     4,
      85,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -98,   150,    47,   130,   -38,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -97,   -98,   -98,
       7,   -98,   -98,   -98,    59,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -34,   -98,   -98,   -98,
     -98,   -98,   -32,   141,    20,   -35,   -98,    65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -80
static const yytype_int16 yytable[] =
{
      88,    89,    87,    90,    91,    -2,    92,    94,    95,     1,
       1,   101,    34,    35,    36,     1,    98,   133,   134,    37,
      38,    11,   102,    39,    40,    41,     9,    42,    43,    44,
      45,    46,    47,    48,    49,    12,     2,   114,    22,   136,
     -79,     2,   102,   146,   -78,    50,    11,     6,    51,   102,
     135,     6,   150,    52,    14,   149,    53,    54,   116,    18,
     107,   108,   109,   119,   110,   111,   112,   121,   124,    19,
     122,   123,   126,   127,   128,   129,   130,   131,   107,   108,
     109,   132,   110,   111,   112,    20,    47,     9,    49,   140,
     141,   142,    47,   118,    49,    15,    16,   140,   141,    50,
      23,   145,    51,   115,    25,    50,   147,    52,    51,    30,
      53,    54,    26,    52,    33,    97,    53,    54,    99,   100,
     107,   108,   109,    85,   110,   111,   112,   107,   108,   109,
      96,   110,   111,   112,    93,   107,   108,   109,   117,   110,
     111,   112,   111,   112,   103,   105,   104,   139,   112,   144,
     148,   106,   113,   102,    13,   -79,    28,   151,    21,     0,
     120
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-98))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      35,    36,    34,    38,    39,     0,    40,    45,    46,     5,
       5,    32,     8,     9,    10,     5,    51,   114,   115,    15,
      16,     1,    43,    19,    20,    21,    29,    23,    24,    25,
      26,    27,    28,    29,    30,     0,    31,    11,    18,    33,
      44,    31,    43,   140,    48,    41,    26,     0,    44,    43,
      51,     4,   149,    49,    42,    11,    52,    53,    96,    43,
      34,    35,    36,   101,    38,    39,    40,   102,   106,    46,
     104,   105,   107,   108,   109,   110,   111,   112,    34,    35,
      36,   113,    38,    39,    40,    29,    28,    29,    30,    12,
      13,    14,    28,    29,    30,     6,     7,    12,    13,    41,
      30,   136,    44,    17,    47,    41,   141,    49,    44,     3,
      52,    53,    44,    49,    45,    50,    52,    53,    53,    54,
      34,    35,    36,    29,    38,    39,    40,    34,    35,    36,
      50,    38,    39,    40,    29,    34,    35,    36,    45,    38,
      39,    40,    39,    40,     4,    48,    42,    45,    40,    18,
      14,    44,    43,    43,     4,    44,    26,   150,    17,    -1,
     101
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    31,    55,    56,    57,    58,    65,    68,    29,
      59,    98,     0,    57,    42,     6,     7,    64,    43,    46,
      29,    97,    98,    30,    66,    47,    44,    63,    59,    61,
       3,    69,    70,    45,     8,     9,    10,    15,    16,    19,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      41,    44,    49,    52,    53,    58,    60,    71,    72,    73,
      75,    76,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    94,    95,    96,    97,
      98,    99,   100,   101,    67,    29,    77,    96,    99,    99,
      99,    99,    90,    29,    60,    60,    50,   101,    99,   101,
     101,    32,    43,     4,    42,    48,    44,    34,    35,    36,
      38,    39,    40,    43,    11,    17,    60,    45,    29,    60,
      78,    99,    90,    90,    60,    62,    99,    99,    99,    99,
      99,    99,    96,    71,    71,    51,    33,    92,    93,    45,
      12,    13,    14,    74,    18,    99,    71,    99,    14,    11,
      71,    74
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
        case 3:

/* Line 1806 of yacc.c  */
#line 212 "parser.y"
    { new_declaration((yyvsp[(1) - (1)])); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 213 "parser.y"
    { new_declaration((yyvsp[(2) - (2)])); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 221 "parser.y"
    { init((yyval), "variable");
               stack((yyval)).operands().swap(stack((yyvsp[(2) - (2)])).operands());
             }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 227 "parser.y"
    { init((yyval)); mto((yyval), (yyvsp[(1) - (1)])); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 229 "parser.y"
    { (yyval)=(yyvsp[(1) - (3)]); mto((yyval), (yyvsp[(3) - (3)])); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 233 "parser.y"
    { init((yyval)); mto((yyval), (yyvsp[(1) - (1)])); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 235 "parser.y"
    { (yyval)=(yyvsp[(1) - (3)]); mto((yyval), (yyvsp[(3) - (3)])); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 238 "parser.y"
    { init((yyval)); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 242 "parser.y"
    { init((yyval)); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 246 "parser.y"
    { (yyval)=(yyvsp[(2) - (3)]); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 249 "parser.y"
    { init((yyval), ID_empty); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 250 "parser.y"
    { init((yyval), ID_bool); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 252 "parser.y"
    {
               init((yyval), "bool-vector");
               stack((yyval)).set(ID_width, stack((yyvsp[(3) - (4)])).id());
             }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 259 "parser.y"
    { PARSER.function=stack((yyvsp[(3) - (3)])).get(ID_identifier); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 261 "parser.y"
    { PARSER.function=irep_idt(); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 262 "parser.y"
    { init((yyval), ID_function);
               stack((yyval)).add(ID_return_type).swap(stack((yyvsp[(2) - (7)])));
               stack((yyval)).set(ID_identifier, stack((yyvsp[(3) - (7)])).get(ID_identifier));
               stack((yyval)).add(ID_arguments).get_sub().swap(
                 stack((yyvsp[(5) - (7)])).add(ID_operands).get_sub());
               stack((yyval)).add(ID_body).swap(stack((yyvsp[(6) - (7)])));
             }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 278 "parser.y"
    { (yyval)=(yyvsp[(2) - (3)]); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 281 "parser.y"
    { statement((yyval), ID_block); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 282 "parser.y"
    { (yyval)=(yyvsp[(1) - (2)]); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 283 "parser.y"
    { (yyval)=(yyvsp[(1) - (1)]); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 287 "parser.y"
    { (yyval)=(yyvsp[(1) - (3)]); mto((yyval), (yyvsp[(3) - (3)])); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 288 "parser.y"
    { statement((yyval), ID_block); mto((yyval), (yyvsp[(1) - (1)])); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 292 "parser.y"
    { statement((yyval), ID_ifthenelse);
               stack((yyval)).move_to_operands(stack((yyvsp[(2) - (5)])), stack((yyvsp[(4) - (5)]))); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 295 "parser.y"
    { statement((yyval), ID_ifthenelse);
               stack((yyval)).move_to_operands(stack((yyvsp[(2) - (6)])), stack((yyvsp[(4) - (6)])), stack((yyvsp[(5) - (6)])));
             }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 301 "parser.y"
    { (yyval)=(yyvsp[(2) - (2)]); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 303 "parser.y"
    { statement((yyval), ID_ifthenelse);
               stack((yyval)).move_to_operands(stack((yyvsp[(2) - (5)])), stack((yyvsp[(4) - (5)])), stack((yyvsp[(5) - (5)])));
             }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 307 "parser.y"
    { statement((yyval), ID_ifthenelse);
               stack((yyval)).move_to_operands(stack((yyvsp[(2) - (4)])), stack((yyvsp[(4) - (4)])));
             }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 313 "parser.y"
    { statement((yyval), ID_while);
               stack((yyval)).move_to_operands(stack((yyvsp[(2) - (5)])), stack((yyvsp[(4) - (5)]))); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 318 "parser.y"
    { 
               if(stack((yyvsp[(2) - (2)])).operands().size()==1)
               {
                 statement((yyval), ID_goto);
                 stack((yyval)).set(ID_destination, stack((yyvsp[(2) - (2)])).op0().id());
               }
               else
               {
                 statement((yyval), "non-deterministic-goto");
                 stack((yyval)).add("destinations").get_sub().swap(stack((yyvsp[(2) - (2)])).add(ID_operands).get_sub());
               }
             }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 333 "parser.y"
    {
               init((yyval)); mto((yyval), (yyvsp[(1) - (1)]));
             }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 337 "parser.y"
    {
               (yyval)=(yyvsp[(1) - (3)]); mto((yyval), (yyvsp[(3) - (3)]));
             }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 343 "parser.y"
    { statement((yyval), ID_function_call);
               stack((yyval)).operands().resize(3);
               stack((yyval)).op0().make_nil();
               stack((yyval)).op1().swap(stack((yyvsp[(1) - (4)])));
               stack((yyval)).op2().id(ID_arguments);
               stack((yyval)).op2().operands().swap(stack((yyvsp[(3) - (4)])).operands());
             }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 356 "parser.y"
    { statement((yyval), ID_return);
               stack((yyval)).operands().swap(stack((yyvsp[(2) - (2)])).operands());
             }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 359 "parser.y"
    { statement((yyval), ID_return); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 363 "parser.y"
    { statement((yyval), ID_bp_enforce);
               stack((yyval)).reserve_operands(2); // for code
               mto((yyval), (yyvsp[(2) - (2)]));
               stack((yyval)).operands().resize(2);
             }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 371 "parser.y"
    { statement((yyval), ID_skip);
               stack((yyval)).set("explicit", true);
             }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 377 "parser.y"
    { statement((yyval), ID_bp_abortif);
               mto((yyval), (yyvsp[(2) - (2)]));
             }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 383 "parser.y"
    { statement((yyval), ID_start_thread);
               mto((yyval), (yyvsp[(2) - (2)]));
             }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 389 "parser.y"
    { statement((yyval), ID_end_thread);
             }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 394 "parser.y"
    { statement((yyval), ID_sync);
               stack((yyval)).set(ID_event, stack((yyvsp[(2) - (2)])).id());
             }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 400 "parser.y"
    { statement((yyval), ID_atomic_begin);
             }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 405 "parser.y"
    { statement((yyval), ID_atomic_end);
             }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 410 "parser.y"
    { statement((yyval), ID_bp_dead);
               stack((yyval)).operands().swap(stack((yyvsp[(2) - (2)])).operands());
             }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 435 "parser.y"
    { statement((yyval), ID_decl);
               stack((yyval)).operands().swap(stack((yyvsp[(1) - (1)])).operands());
             }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 441 "parser.y"
    {
               init((yyval));
               stack((yyval)).make_nil();
             }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 449 "parser.y"
    {
               (yyval)=(yyvsp[(2) - (2)]);
             }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 455 "parser.y"
    {
               statement((yyval), ID_assign);
               stack((yyval)).reserve_operands(2);
               mto((yyval), (yyvsp[(1) - (4)]));
               mto((yyval), (yyvsp[(3) - (4)]));

               if(stack((yyvsp[(4) - (4)])).is_not_nil())
               {
                 exprt tmp;
                 tmp.swap(stack((yyval)));
                 
                 init(stack((yyval)));
                 stack((yyval)).id(ID_code);
                 stack((yyval)).set(ID_statement, ID_bp_constrain);
                 stack((yyval)).move_to_operands(tmp, stack((yyvsp[(4) - (4)])));
               }
             }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 473 "parser.y"
    {
               (yyval)=(yyvsp[(3) - (3)]);
               stack((yyval)).op0().swap(stack((yyvsp[(1) - (3)])));
             }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 480 "parser.y"
    {
               statement((yyval), ID_label);
               stack((yyval)).set(ID_label, stack((yyvsp[(1) - (3)])).id());
               mto((yyval), (yyvsp[(3) - (3)]));
             }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 491 "parser.y"
    { init((yyval), ID_symbol);
               stack((yyval)).set(ID_identifier, stack((yyvsp[(1) - (1)])).id());
             }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 497 "parser.y"
    { init((yyval), ID_symbol);
               stack((yyval)).set(ID_identifier, stack((yyvsp[(1) - (1)])).id());
             }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 504 "parser.y"
    { binary((yyval), (yyvsp[(1) - (3)]), ID_implies, (yyvsp[(3) - (3)])); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 505 "parser.y"
    { j_binary((yyval), (yyvsp[(1) - (3)]), ID_and, (yyvsp[(3) - (3)])); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 506 "parser.y"
    { j_binary((yyval), (yyvsp[(1) - (3)]), ID_or, (yyvsp[(3) - (3)])); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 507 "parser.y"
    { binary((yyval), (yyvsp[(1) - (3)]), ID_xor, (yyvsp[(3) - (3)])); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 508 "parser.y"
    { binary((yyval), (yyvsp[(1) - (3)]), ID_equal, (yyvsp[(3) - (3)])); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 509 "parser.y"
    { binary((yyval), (yyvsp[(1) - (3)]), ID_notequal, (yyvsp[(3) - (3)])); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 512 "parser.y"
    { (yyval)=(yyvsp[(2) - (3)]); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 513 "parser.y"
    { init((yyval), ID_nondet_bool); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 516 "parser.y"
    {
               init((yyval), ID_bp_schoose);
               stack((yyval)).operands().swap(stack((yyvsp[(3) - (4)])).operands());
             }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 521 "parser.y"
    {
               init((yyval), ID_constant);
               stack((yyval)).set(ID_value, stack((yyvsp[(1) - (1)])).id());
             }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 529 "parser.y"
    { init((yyval), ID_not); mto((yyval), (yyvsp[(2) - (2)])); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 530 "parser.y"
    { init((yyval), ID_not); mto((yyval), (yyvsp[(2) - (2)])); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 531 "parser.y"
    { init((yyval), ID_next_symbol); mto((yyval), (yyvsp[(2) - (2)])); }
    break;



/* Line 1806 of yacc.c  */
#line 2298 "y.tab.cpp"
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
#line 534 "parser.y"


int yybperror(const std::string &error)
{
  PARSER.parse_error(error, yytext);
  return 0;
}

#undef yyerror


