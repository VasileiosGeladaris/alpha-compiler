/* A Bison parser, made by GNU Bison 3.7.3.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_PARSER_H_INCLUDED
# define YY_YY_SRC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    TRUE = 259,                    /* TRUE  */
    FALSE = 260,                   /* FALSE  */
    NIL = 261,                     /* NIL  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    WHILE = 264,                   /* WHILE  */
    FOR = 265,                     /* FOR  */
    FUNCTION = 266,                /* FUNCTION  */
    RETURN = 267,                  /* RETURN  */
    BREAK = 268,                   /* BREAK  */
    CONTINUE = 269,                /* CONTINUE  */
    LOCAL = 270,                   /* LOCAL  */
    AND = 271,                     /* AND  */
    OR = 272,                      /* OR  */
    NOT = 273,                     /* NOT  */
    NUMBER = 274,                  /* NUMBER  */
    STRING = 275,                  /* STRING  */
    REAL = 276,                    /* REAL  */
    ASSIGN = 277,                  /* ASSIGN  */
    COMMENT = 278,                 /* COMMENT  */
    ADD = 279,                     /* ADD  */
    INC = 280,                     /* INC  */
    SUB = 281,                     /* SUB  */
    DEC = 282,                     /* DEC  */
    MUL = 283,                     /* MUL  */
    DIV = 284,                     /* DIV  */
    MOD = 285,                     /* MOD  */
    EQUAL = 286,                   /* EQUAL  */
    NEQ = 287,                     /* NEQ  */
    GT = 288,                      /* GT  */
    LT = 289,                      /* LT  */
    GE = 290,                      /* GE  */
    LE = 291,                      /* LE  */
    LCURLY = 292,                  /* LCURLY  */
    RCURLY = 293,                  /* RCURLY  */
    LBRACKET = 294,                /* LBRACKET  */
    RBRACKET = 295,                /* RBRACKET  */
    LPAREN = 296,                  /* LPAREN  */
    RPAREN = 297,                  /* RPAREN  */
    SEMICOLON = 298,               /* SEMICOLON  */
    COMMA = 299,                   /* COMMA  */
    COLON = 300,                   /* COLON  */
    SCOPE = 301,                   /* SCOPE  */
    POINT = 302,                   /* POINT  */
    RANGE = 303,                   /* RANGE  */
    MUL_COMMENT = 304,             /* MUL_COMMENT  */
    UMINUS = 305                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 77 "parser.y"

    int intVal;
    char* strVal;
    double doubleVal;

#line 120 "./src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_H_INCLUDED  */