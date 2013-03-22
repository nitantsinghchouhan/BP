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

extern YYSTYPE yybplval;


