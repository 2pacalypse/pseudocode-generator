/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PRINTF = 258,
    SCANF = 259,
    INT = 260,
    FLOAT = 261,
    CHAR = 262,
    VOID = 263,
    ID = 264,
    RETURN = 265,
    STR = 266,
    NUMBER = 267,
    INCLUDE = 268,
    EQ = 269,
    GE = 270,
    GT = 271,
    LE = 272,
    LT = 273,
    NE = 274,
    IF = 275,
    ELSE = 276,
    FOR = 277,
    UNARY = 278,
    ADD = 279,
    SUBTRACT = 280,
    DIVIDE = 281,
    MULTIPLY = 282,
    CHARLITERAL = 283
  };
#endif
/* Tokens.  */
#define PRINTF 258
#define SCANF 259
#define INT 260
#define FLOAT 261
#define CHAR 262
#define VOID 263
#define ID 264
#define RETURN 265
#define STR 266
#define NUMBER 267
#define INCLUDE 268
#define EQ 269
#define GE 270
#define GT 271
#define LE 272
#define LT 273
#define NE 274
#define IF 275
#define ELSE 276
#define FOR 277
#define UNARY 278
#define ADD 279
#define SUBTRACT 280
#define DIVIDE 281
#define MULTIPLY 282
#define CHARLITERAL 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "translator.y" /* yacc.c:1909  */
 struct var_name { 
			char name[100]; 
			struct node* nd;
		} nd_obj;

#line 116 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
