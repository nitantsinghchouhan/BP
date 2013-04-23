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
#line 1 "bp.yy"


// compile with: yacc -vd -p bp

#include <stdlib.h>
#include <stdio.h>

	#define YYERROR_VERBOSE

	extern int bplex(void);
	extern int bperror(const char *error);
	extern int bplineno;
	extern char *bptext;
	extern int bpleng;
	extern FILE *bpin;


	extern int yylex();


unsigned int parallel_assign__counter, assign_constrain_opt__counter, CONSTRAIN_expression__counter, function_definition__counter, labelled_statement__counter, start_thread_statement__counter, end_thread_statement__counter, sync_statement__counter, atomic_begin_statement__counter, atomic_end_statement__counter;


/* Line 268 of yacc.c  */
#line 95 "y.tab.c"

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
     IDENTIFIER = 258,
     TICKED_IDENTIFIER = 259,
     INTEGER = 260,
     NONDET = 261,
     ASSIGN = 262,
     EQ_OP = 263,
     NE_OP = 264,
     IMPLIES = 265,
     DECL = 266,
     ENFORCE = 267,
     AND = 268,
     OR = 269,
     TERNARY = 270,
     IF = 271,
     THEN = 272,
     ELSE = 273,
     ELSIF = 274,
     FI = 275,
     WHILE = 276,
     DO = 277,
     OD = 278,
     RETURN = 279,
     SKIP = 280,
     GOTO = 281,
     BEG = 282,
     END = 283,
     BOOL = 284,
     VOID = 285,
     ASSERT = 286,
     ASSUME = 287,
     PRINT = 288,
     CHOOSE = 289,
     CONSTRAIN = 290,
     DEAD = 291,
     ABORTIF = 292,
     DFS = 293,
     START_THREAD = 294,
     END_THREAD = 295,
     SYNC = 296,
     ATOMIC_BEGIN = 297,
     ATOMIC_END = 298
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TICKED_IDENTIFIER 259
#define INTEGER 260
#define NONDET 261
#define ASSIGN 262
#define EQ_OP 263
#define NE_OP 264
#define IMPLIES 265
#define DECL 266
#define ENFORCE 267
#define AND 268
#define OR 269
#define TERNARY 270
#define IF 271
#define THEN 272
#define ELSE 273
#define ELSIF 274
#define FI 275
#define WHILE 276
#define DO 277
#define OD 278
#define RETURN 279
#define SKIP 280
#define GOTO 281
#define BEG 282
#define END 283
#define BOOL 284
#define VOID 285
#define ASSERT 286
#define ASSUME 287
#define PRINT 288
#define CHOOSE 289
#define CONSTRAIN 290
#define DEAD 291
#define ABORTIF 292
#define DFS 293
#define START_THREAD 294
#define END_THREAD 295
#define SYNC 296
#define ATOMIC_BEGIN 297
#define ATOMIC_END 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 24 "bp.yy"

	int number;
	char *str;
  	// ...



/* Line 293 of yacc.c  */
#line 225 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 237 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,     2,     2,    53,
      48,    49,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    44,
      46,     2,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    54,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    10,    15,    16,    18,    22,
      24,    29,    30,    32,    36,    38,    40,    43,    52,    55,
      58,    64,    67,    69,    70,    74,    75,    79,    80,    84,
      86,    87,    89,    92,    95,    98,   100,   104,   107,   111,
     113,   115,   118,   121,   124,   127,   130,   133,   136,   139,
     142,   145,   148,   150,   152,   155,   158,   163,   167,   168,
     171,   173,   177,   179,   183,   185,   188,   191,   196,   201,
     205,   211,   213,   217,   223,   229,   231,   234,   236,   239,
     243,   248,   250,   253,   255,   257,   261,   263,   270,   272,
     275,   277,   279,   282,   284,   286,   288,   292,   296,   298,
     302,   304,   308,   310,   314,   318,   320,   326,   328,   330
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    61,    67,    60,    -1,    -1,    -1,
      11,    62,    44,    61,    -1,    -1,    63,    -1,    62,    45,
      63,    -1,     3,    -1,    11,    65,    44,    64,    -1,    -1,
      66,    -1,    65,    45,    66,    -1,     3,    -1,    68,    -1,
      68,    67,    -1,    69,    74,    27,    64,    72,    73,    76,
      28,    -1,    70,     3,    -1,    71,    29,    -1,    71,    29,
      46,     5,    47,    -1,    71,    30,    -1,    38,    -1,    -1,
      12,   108,    44,    -1,    -1,    37,   108,    44,    -1,    -1,
      48,    75,    49,    -1,    65,    -1,    -1,    77,    -1,    76,
      77,    -1,    76,    44,    -1,    78,    80,    -1,    80,    -1,
      78,     3,    50,    -1,     3,    50,    -1,    79,    45,     3,
      -1,     3,    -1,    81,    -1,    96,    44,    -1,    97,    44,
      -1,    98,    44,    -1,    99,    44,    -1,   100,    44,    -1,
      82,    44,    -1,    83,    44,    -1,    88,    44,    -1,    89,
      44,    -1,    90,    44,    -1,    91,    44,    -1,    92,    -1,
      94,    -1,    95,    44,    -1,    36,    86,    -1,    86,     7,
      85,    84,    -1,    86,     7,    91,    -1,    -1,    35,   108,
      -1,   109,    -1,    85,    45,   109,    -1,    87,    -1,    86,
      45,    87,    -1,     3,    -1,    31,   108,    -1,    32,   108,
      -1,    33,    48,   110,    49,    -1,     3,    48,   110,    49,
      -1,     3,    48,    49,    -1,    16,   109,    17,    76,    93,
      -1,    20,    -1,    18,    76,    20,    -1,    19,   109,    17,
      76,    93,    -1,    21,   108,    22,    76,    23,    -1,    24,
      -1,    24,   110,    -1,    25,    -1,    26,    79,    -1,    39,
      26,     3,    -1,    39,     3,    48,    49,    -1,    40,    -1,
      41,     3,    -1,    42,    -1,    43,    -1,    48,   108,    49,
      -1,     6,    -1,    34,    51,   108,    45,   108,    52,    -1,
       3,    -1,    53,     3,    -1,     5,    -1,   101,    -1,   103,
     101,    -1,    54,    -1,    55,    -1,   102,    -1,   104,     8,
     102,    -1,   104,     9,   102,    -1,   104,    -1,   105,    13,
     104,    -1,   105,    -1,   106,    56,   105,    -1,   106,    -1,
     107,    14,   106,    -1,   107,    10,   106,    -1,   107,    -1,
     108,    15,   108,    50,   107,    -1,   108,    -1,   109,    -1,
     110,    45,   109,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    96,   100,   107,   111,   114,   118,   124,
     130,   134,   137,   141,   146,   154,   155,   159,   167,   174,
     175,   176,   180,   181,   185,   190,   195,   200,   204,   211,
     213,   220,   225,   229,   236,   240,   247,   251,   258,   262,
     269,   270,   271,   272,   273,   274,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   290,   297,   302,   308,   314,
     324,   328,   334,   338,   344,   350,   356,   362,   368,   372,
     378,   384,   388,   392,   398,   404,   408,   412,   416,   422,
     427,   434,   442,   450,   458,   469,   473,   477,   481,   485,
     489,   496,   497,   504,   505,   508,   509,   513,   520,   521,
     528,   529,   536,   537,   541,   548,   549,   556,   560,   564
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"identifier\"",
  "\"escaped identifier\"", "\"integer\"", "\"*\"", "\"assignment\"",
  "\"=\"", "\"<>\"", "\"implication\"", "\"decl\"", "\"enforce\"", "\"&\"",
  "\"|\"", "\"?\"", "\"if\"", "\"then\"", "\"else\"", "\"elsif\"",
  "\"fi\"", "\"while\"", "\"do\"", "\"od\"", "\"return\"", "\"skip\"",
  "\"goto\"", "\"begin\"", "\"end\"", "\"bool\"", "\"void\"", "\"assert\"",
  "\"assume\"", "\"print\"", "\"schoose\"", "\"constrain\"", "\"dead\"",
  "\"abortif\"", "\"dfs\"", "\"start_thread\"", "\"end_thread\"",
  "\"sync\"", "\"atomic_begin\"", "\"atomic_end\"", "';'", "','", "'<'",
  "'>'", "'('", "')'", "':'", "'['", "']'", "'\\''", "'~'", "'!'", "'^'",
  "$accept", "program", "pstart", "pend", "g_decl_list",
  "g_identifier_list", "g_decl_id", "decl_list", "identifier_list",
  "decl_id", "fun_list", "function_definition", "function_heading",
  "fun_type", "fun_search_order", "enforce", "abortif", "parms",
  "parameter_list", "statement_list", "labelled_statement", "label_list",
  "target_label_list", "concurrent_statement", "statement",
  "dead_statement", "parallel_assign", "assign_constrain_opt",
  "assign_expression_list", "assign_id_list", "asgn_id", "assert",
  "assume", "print", "call", "selection_statement", "elsif_list",
  "iteration_statement", "jump_statement", "start_thread_statement",
  "end_thread_statement", "sync_statement", "atomic_begin_statement",
  "atomic_end_statement", "primary_expression", "unary_expression",
  "unary_operator", "equality_expression", "and_expression",
  "exclusive_or_expression", "or_expression", "expression",
  "choose_expression", "expression_list", 0
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
     295,   296,   297,   298,    59,    44,    60,    62,    40,    41,
      58,    91,    93,    39,   126,    33,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    60,    61,    61,    62,    62,    63,
      64,    64,    65,    65,    66,    67,    67,    68,    69,    70,
      70,    70,    71,    71,    72,    72,    73,    73,    74,    75,
      75,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    88,    89,    90,    91,    91,
      92,    93,    93,    93,    94,    95,    95,    95,    95,    96,
      96,    97,    98,    99,   100,   101,   101,   101,   101,   101,
     101,   102,   102,   103,   103,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   108,   108,   109,   110,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     0,     4,     0,     1,     3,     1,
       4,     0,     1,     3,     1,     1,     2,     8,     2,     2,
       5,     2,     1,     0,     3,     0,     3,     0,     3,     1,
       0,     1,     2,     2,     2,     1,     3,     2,     3,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     2,     2,     4,     3,     0,     2,
       1,     3,     1,     3,     1,     2,     2,     4,     4,     3,
       5,     1,     3,     5,     5,     1,     2,     1,     2,     3,
       4,     1,     2,     1,     1,     3,     1,     6,     1,     2,
       1,     1,     2,     1,     1,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     5,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     6,     1,     0,    23,     9,     0,     7,    22,
       4,    23,     0,     0,     0,     6,     0,     2,    16,    30,
       0,    18,    19,    21,     5,     8,    14,    29,    12,     0,
      11,     0,     0,    28,     0,    25,     0,    13,     0,     0,
      27,    20,    11,    88,    90,    86,     0,     0,     0,    93,
      94,    91,    95,     0,    98,   100,   102,   105,     0,     0,
       0,    10,     0,     0,    89,    92,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    64,     0,     0,    75,    77,
       0,     0,     0,     0,     0,     0,    81,     0,    83,    84,
       0,    31,     0,    35,    40,     0,     0,     0,    62,     0,
       0,     0,     0,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    85,    96,    97,    99,   101,   104,   103,     0,
      26,     0,    37,   107,     0,     0,   108,    76,    39,    78,
      65,    66,     0,    64,    55,     0,     0,    82,    17,    33,
      32,    64,    34,    46,    47,     0,     0,    48,    49,    50,
      51,    54,    41,    42,    43,    44,    45,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,    79,    36,    88,
      58,    57,    60,    63,     0,   106,    68,     0,     0,   109,
      38,    67,    80,     0,     0,    56,    87,     0,     0,    71,
      70,    74,    59,    61,     0,     0,    72,     0,     0,    73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    17,     5,     7,     8,    35,    27,    28,
      10,    11,    12,    13,    14,    40,    60,    20,    29,    90,
      91,    92,   129,    93,    94,    95,    96,   185,   170,    97,
      98,    99,   100,   101,   102,   103,   190,   104,   105,   106,
     107,   108,   109,   110,    51,    52,    53,    54,    55,    56,
      57,   123,   126,   127
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -152
static const yytype_int16 yypact[] =
{
    -152,    19,    20,  -152,    48,    29,  -152,    39,  -152,  -152,
    -152,     7,    14,    72,    63,    20,    48,  -152,  -152,    77,
      67,  -152,    40,  -152,  -152,  -152,  -152,    57,  -152,    49,
      94,   102,    77,  -152,    77,    99,    61,  -152,    52,    10,
      82,  -152,    94,  -152,  -152,  -152,    74,    10,   123,  -152,
    -152,  -152,  -152,    34,    92,   118,    78,    59,    17,    10,
     220,  -152,    10,     3,  -152,  -152,    10,    10,    10,    10,
      10,    10,    10,  -152,    35,   -26,    10,    10,    10,  -152,
     130,    10,    10,    93,   139,     9,  -152,   142,  -152,  -152,
     127,  -152,   251,  -152,  -152,   103,   105,     2,  -152,   106,
     110,   112,   113,  -152,  -152,   120,   121,   128,   129,   131,
     132,    15,  -152,  -152,  -152,    92,   118,    78,    78,     6,
    -152,     0,  -152,   147,   160,    44,  -152,   101,  -152,   133,
     147,   147,    10,  -152,   135,   137,   183,  -152,  -152,  -152,
    -152,    24,  -152,  -152,  -152,    23,   139,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,    10,    10,  -152,
      36,   220,   220,    10,   184,    46,   144,  -152,  -152,   140,
     -18,  -152,  -152,  -152,   -11,    59,  -152,    96,   158,  -152,
    -152,  -152,  -152,    10,    10,  -152,  -152,   220,    10,  -152,
    -152,  -152,   147,  -152,   189,   178,  -152,   220,    96,  -152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,  -152,   181,  -152,   187,   162,   172,   175,
     197,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -151,
     -88,  -152,  -152,   119,  -152,  -152,  -152,  -152,  -152,   134,
      66,  -152,  -152,  -152,    71,  -152,    21,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,   164,    37,  -152,   156,   157,    53,
      69,   -39,   -75,  -107
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -16
static const yytype_int16 yytable[] =
{
      58,   124,   140,    43,    72,    44,    45,   -15,    63,   145,
     177,   178,   135,    43,   160,    44,    45,   183,    72,     3,
      74,    72,   121,   111,   122,   165,   169,   184,    44,    45,
      72,     4,    72,   119,    46,   136,   194,    43,   125,    44,
      45,   186,   130,   131,    46,     9,   198,   146,    47,   159,
      72,     6,   112,    48,    49,    50,   158,    46,    47,    72,
     157,    73,    19,    48,    49,    50,   162,     9,    46,    70,
     172,    47,   121,    71,   168,    21,    48,    49,    50,   120,
      26,   163,    47,    15,    16,   176,    31,    48,   179,   140,
     140,   163,    22,    23,    30,   181,    42,    32,    33,    75,
      66,    67,    32,   113,   114,    34,   140,    36,    41,   193,
     140,    39,    76,   195,   187,   188,   189,    77,   174,    59,
      78,    79,    80,   117,   118,    62,    64,    81,    82,    83,
      75,    68,    84,   128,    69,    85,    86,    87,    88,    89,
     139,   132,   133,    76,   192,   137,   163,   143,    77,   144,
     147,    78,    79,    80,   148,   138,   149,   150,    81,    82,
      83,    75,    72,    84,   151,   152,    85,    86,    87,    88,
      89,   139,   153,   154,    76,   155,   156,   161,   164,    77,
     146,   191,    78,    79,    80,   166,   167,   180,   121,    81,
      82,    83,    75,   182,    84,   197,    24,    85,    86,    87,
      88,    89,   139,    25,    61,    76,    38,    37,    18,   196,
      77,   142,   173,    78,    79,    80,   171,    65,   134,   199,
      81,    82,    83,    75,   115,    84,   116,   175,    85,    86,
      87,    88,    89,   139,     0,     0,    76,     0,     0,     0,
       0,    77,     0,     0,    78,    79,    80,     0,     0,     0,
       0,    81,    82,    83,   141,     0,    84,     0,     0,    85,
      86,    87,    88,    89,     0,     0,     0,    76,     0,     0,
       0,     0,    77,     0,     0,    78,    79,    80,     0,     0,
       0,     0,    81,    82,    83,     0,     0,    84,     0,     0,
      85,    86,    87,    88,    89
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-152))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      39,    76,    90,     3,    15,     5,     6,     0,    47,     7,
     161,   162,     3,     3,   121,     5,     6,    35,    15,     0,
      59,    15,    48,    62,    50,   132,     3,    45,     5,     6,
      15,    11,    15,    72,    34,    26,   187,     3,    77,     5,
       6,    52,    81,    82,    34,    38,   197,    45,    48,    49,
      15,     3,    49,    53,    54,    55,    50,    34,    48,    15,
      45,    44,    48,    53,    54,    55,    22,    38,    34,    10,
     145,    48,    48,    14,    50,     3,    53,    54,    55,    44,
       3,    45,    48,    44,    45,    49,    46,    53,   163,   177,
     178,    45,    29,    30,    27,    49,    44,    45,    49,     3,
       8,     9,    45,    66,    67,    11,   194,     5,    47,   184,
     198,    12,    16,   188,    18,    19,    20,    21,   157,    37,
      24,    25,    26,    70,    71,    51,     3,    31,    32,    33,
       3,    13,    36,     3,    56,    39,    40,    41,    42,    43,
      44,    48,     3,    16,   183,     3,    45,    44,    21,    44,
      44,    24,    25,    26,    44,    28,    44,    44,    31,    32,
      33,     3,    15,    36,    44,    44,    39,    40,    41,    42,
      43,    44,    44,    44,    16,    44,    44,    17,    45,    21,
      45,    23,    24,    25,    26,    48,     3,     3,    48,    31,
      32,    33,     3,    49,    36,    17,    15,    39,    40,    41,
      42,    43,    44,    16,    42,    16,    34,    32,    11,    20,
      21,    92,   146,    24,    25,    26,   145,    53,    84,   198,
      31,    32,    33,     3,    68,    36,    69,   158,    39,    40,
      41,    42,    43,    44,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     3,    -1,    36,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,     0,    11,    61,     3,    62,    63,    38,
      67,    68,    69,    70,    71,    44,    45,    60,    67,    48,
      74,     3,    29,    30,    61,    63,     3,    65,    66,    75,
      27,    46,    45,    49,    11,    64,     5,    66,    65,    12,
      72,    47,    44,     3,     5,     6,    34,    48,    53,    54,
      55,   101,   102,   103,   104,   105,   106,   107,   108,    37,
      73,    64,    51,   108,     3,   101,     8,     9,    13,    56,
      10,    14,    15,    44,   108,     3,    16,    21,    24,    25,
      26,    31,    32,    33,    36,    39,    40,    41,    42,    43,
      76,    77,    78,    80,    81,    82,    83,    86,    87,    88,
      89,    90,    91,    92,    94,    95,    96,    97,    98,    99,
     100,   108,    49,   102,   102,   104,   105,   106,   106,   108,
      44,    48,    50,   108,   109,   108,   109,   110,     3,    79,
     108,   108,    48,     3,    86,     3,    26,     3,    28,    44,
      77,     3,    80,    44,    44,     7,    45,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    45,    50,    49,
     110,    17,    22,    45,    45,   110,    48,     3,    50,     3,
      85,    91,   109,    87,   108,   107,    49,    76,    76,   109,
       3,    49,    49,    35,    45,    84,    52,    18,    19,    20,
      93,    23,   108,   109,    76,   109,    20,    17,    76,    93
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
#line 96 "bp.yy"
    {
	  }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 100 "bp.yy"
    {
	  }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 108 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 115 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 119 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 125 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 131 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 138 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 142 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 147 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 160 "bp.yy"
    {
	    function_definition__counter++;
	  	// ...
	  }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 168 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 174 "bp.yy"
    { (yyval.number) = 1; }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 175 "bp.yy"
    { (yyval.number) = (yyvsp[(4) - (5)].number); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 176 "bp.yy"
    { (yyval.number) = 0; }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 186 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 190 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 196 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 200 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 205 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 213 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 221 "bp.yy"
    {
        labelled_statement__counter++;
	  	// ...
	  }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 226 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 230 "bp.yy"
    {
	  	// ...
      }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 237 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 241 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 248 "bp.yy"
    {
	  		// ...
		  }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 252 "bp.yy"
    {
	  		// ...
		  }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 259 "bp.yy"
    {
		  	// ...
		  }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 263 "bp.yy"
    {
		  	// ...
		  }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 291 "bp.yy"
    {
	  	// ...
      }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 298 "bp.yy"
    {
	    parallel_assign__counter++;
	  	// ...
	  }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 303 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 308 "bp.yy"
    {
	  assign_constrain_opt__counter++;
#ifdef HUUUU
	(yyval.expr) = NULL; 
#endif
	}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 315 "bp.yy"
    {
	    CONSTRAIN_expression__counter++;
#ifdef HUUUU
	  (yyval.expr) = (yyvsp[(2) - (2)].expr); 
#endif
	  }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 325 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 329 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 335 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 339 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 345 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 351 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 357 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 363 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 369 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 373 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 379 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 385 "bp.yy"
    {	
	  	// ...
	  }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 389 "bp.yy"
    {	
	  	// ...
	  }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 393 "bp.yy"
    {	
	  	// ...
	  }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 399 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 405 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 409 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 413 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 417 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 423 "bp.yy"
    {
        start_thread_statement__counter++;
	  	// ...
      }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 428 "bp.yy"
    {
	  	// ...
      }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 435 "bp.yy"
    {
        end_thread_statement__counter++;
	  	// ...
      }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 443 "bp.yy"
    {
        sync_statement__counter++;
	  	// not generated by SATABS - just ignore
      }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 451 "bp.yy"
    {
        atomic_begin_statement__counter++;
	  	// ...
      }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 459 "bp.yy"
    {
        atomic_end_statement__counter++;
	  	// ...
      }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 470 "bp.yy"
    {
	  	// ...
  	  }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 474 "bp.yy"
    {
	  	// ...
      }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 478 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 482 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 486 "bp.yy"
    {
	  	// ...
	  }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 490 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 498 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 510 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 514 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 522 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 530 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 538 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 542 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 550 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 561 "bp.yy"
    { 
	  	// ...
	  }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 565 "bp.yy"
    { 
	  	// ...
	  }
    break;



/* Line 1806 of yacc.c  */
#line 2366 "y.tab.c"
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
#line 570 "bp.yy"



main() {

       yyparse();

}

yyerror(char *s) {
	     printf("%s\n",s);
	     exit(1);
}

