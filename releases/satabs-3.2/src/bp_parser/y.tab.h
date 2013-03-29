/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

/* Line 2068 of yacc.c  */
#line 20 "bp.yy"

	int number;
	char *str;
  	// ...



/* Line 2068 of yacc.c  */
#line 144 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


