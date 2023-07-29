/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "translator.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COUNT 4
#define FUNCTIONS_LABEL "functions"
#define PROGRAM_LABEL "program"
#define FUNCTION_PARAM_LABEL "functionParam"
#define FUNCTION_PARAM_LIST "functionParamList"
#define FUNCTION_ID_PARAM_LIST "id_param_list"
#define FUNCTION_BODY_RETURN "bodyreturn"
#define FUNCTION "function"
#define ELSE_BLOCK "else"
#define COMPOUND_STATEMENT "compound statement"
#define IFBODY_ELSE "ifbody_else"
#define FOR_CONDITION_STATEMENT "FOR_CONDITION_STATEMENT"
#define FOR_STATEMENT_CONDITIONSTATEMENT "for_tatement_conditionstatement"
#define DECLARATION "declaration"
#define ASSIGNMENT_LIST "assignment_list"
#define ITERATOR "iterator"
#define FUNCTIONCALL_ID_VALUELIST "functioncall_id_valuelist"
#define VALUE_LIST "value_list"
#define DECLARATION_ASSIGNMENT_LIST "declaration_assignment_list"
#define RETURN_LABEL "return_label"
#define ASSIGNMENT "assignment"
#define VAL "value"
#define IFCONDITION "ifcondition"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s) {
    fprintf(stderr, "%s\n", s);
}
char* concat(char *s1, char *s2);
char* intToStr(int num);

struct node *head;


struct node {
  struct node *left;
  struct node *right;
  char *token;     
};
struct node* mknode(struct node *left, struct node *right, char *token);



#line 117 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 52 "translator.y" /* yacc.c:355  */
 struct var_name { 
			char name[100]; 
			struct node* nd;
		} nd_obj;

#line 219 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  118

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,     2,
      30,    31,     2,     2,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
       2,    36,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    73,    74,    79,    80,    85,    94,   106,
     107,   108,   114,   115,   116,   117,   120,   121,   122,   125,
     126,   127,   128,   129,   130,   140,   145,   146,   149,   150,
     151,   154,   155,   156,   157,   158,   159,   163,   168,   171,
     174,   175,   178,   179,   180,   181,   185,   190,   197,   200,
     201,   206,   212,   213,   214,   217,   218,   219,   220,   223,
     224
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINTF", "SCANF", "INT", "FLOAT",
  "CHAR", "VOID", "ID", "RETURN", "STR", "NUMBER", "INCLUDE", "EQ", "GE",
  "GT", "LE", "LT", "NE", "IF", "ELSE", "FOR", "UNARY", "ADD", "SUBTRACT",
  "DIVIDE", "MULTIPLY", "CHARLITERAL", "','", "'('", "')'", "'{'", "'}'",
  "';'", "'&'", "'='", "$accept", "program", "functions",
  "function_param_list", "function", "headers", "datatype", "else", "body",
  "condition", "return", "value", "relop", "declaration", "assignment",
  "assignment_list", "statement", "expression", "function_call",
  "value_list", "arithmetic", "init", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    44,
      40,    41,   123,   125,    59,    38,    61
};
# endif

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,   -46,    14,    -9,   -46,   -46,   112,   -46,   -46,   -46,
     -46,   -46,    22,     2,   112,     7,    30,     8,    15,   127,
     112,    33,    35,    85,    39,    40,    36,    63,   106,    46,
     -46,    56,    52,   -46,    77,    79,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,    45,    45,    59,    53,   -46,    55,    59,
     127,    60,    87,    87,   -46,    76,   114,    97,   -46,   -46,
     -46,    98,   -46,    98,   -46,   113,   123,    72,    59,   -46,
     111,   -46,   110,    56,   -46,   139,   116,    59,   -46,   -46,
     -46,   -46,    45,   120,    59,    59,   -46,   -46,   122,   145,
     -46,    -1,    98,   127,   -46,   121,   124,   125,    59,   -46,
       4,    53,   -46,   126,   -46,   136,   128,   -46,    75,   -46,
     129,   127,   127,   127,    13,    44,   -46,   -46
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,    11,     0,     3,     1,    10,     2,    12,    13,    14,
      15,     4,     0,     0,     5,     0,     0,     0,     6,     0,
       5,     0,     0,    39,     0,     0,     0,     0,    26,    42,
      41,    44,     0,     7,     0,     0,    35,    34,    32,    33,
      31,    36,    46,     0,     0,     0,     0,    47,    60,     0,
      19,     0,     0,     0,    20,     0,     0,    29,    28,    30,
      49,    38,    50,    45,    29,     0,     0,     0,     0,    37,
       0,     8,    39,    43,    40,     0,     0,    52,    55,    56,
      58,    57,     0,     0,     0,     0,    59,    27,     0,     0,
      54,     0,    48,     0,    25,     0,     0,     0,     0,    51,
       0,     0,    21,     0,    53,    18,     0,    22,     0,    23,
       0,     0,    17,     0,     0,     0,    16,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,   -46,   142,   -46,   -46,     9,   -46,   -19,    78,
     -46,   -43,    99,   -46,   115,   117,   -45,   -39,   -46,   -46,
     -46,   -46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     6,    15,    11,     3,    27,   109,    50,    65,
      51,    60,    44,    29,    30,    31,    32,    61,    62,    91,
      82,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      28,    67,    66,     1,     5,    63,    70,    21,    22,     7,
       8,     9,    10,    23,     4,    12,    21,    22,     7,     8,
       9,    10,    23,    16,    24,    86,    25,    26,    98,    16,
      99,    13,    14,    24,    90,    25,    26,   105,    17,    18,
      19,    94,    66,    92,    20,    47,   116,    21,    22,     7,
       8,     9,    10,    23,    57,   104,   106,    58,     7,     8,
       9,    10,    23,    34,    24,    35,    25,    26,    64,    45,
      46,    58,    48,    59,   100,    52,    26,   117,    21,    22,
       7,     8,     9,    10,    23,    53,    54,    59,    55,   112,
      56,    68,   114,    71,   115,    24,    72,    25,    26,    36,
      37,    38,    39,    40,    41,    75,    85,   111,    42,    21,
      22,     7,     8,     9,    10,    23,    49,     7,     8,     9,
      10,    43,    78,    79,    80,    81,    24,    77,    25,    26,
      21,    22,     7,     8,     9,    10,    23,    36,    37,    38,
      39,    40,    41,    76,    83,    87,    43,    24,    88,    25,
      26,    89,    93,    96,    97,   101,   103,   108,   102,   110,
     107,   113,    33,    95,     0,    84,     0,     0,    74,    73
};

static const yytype_int8 yycheck[] =
{
      19,    46,    45,    13,    13,    44,    49,     3,     4,     5,
       6,     7,     8,     9,     0,     6,     3,     4,     5,     6,
       7,     8,     9,    14,    20,    68,    22,    23,    29,    20,
      31,     9,    30,    20,    77,    22,    23,    33,    31,     9,
      32,    84,    85,    82,    29,     9,    33,     3,     4,     5,
       6,     7,     8,     9,     9,    98,   101,    12,     5,     6,
       7,     8,     9,    30,    20,    30,    22,    23,     9,    30,
      30,    12,     9,    28,    93,    29,    23,    33,     3,     4,
       5,     6,     7,     8,     9,    29,    34,    28,    11,   108,
      11,    36,   111,    33,   113,    20,     9,    22,    23,    14,
      15,    16,    17,    18,    19,    29,    34,    32,    23,     3,
       4,     5,     6,     7,     8,     9,    10,     5,     6,     7,
       8,    36,    24,    25,    26,    27,    20,    30,    22,    23,
       3,     4,     5,     6,     7,     8,     9,    14,    15,    16,
      17,    18,    19,    29,    31,    34,    36,    20,     9,    22,
      23,    35,    32,    31,     9,    34,    31,    21,    34,    31,
      34,    32,    20,    85,    -1,    66,    -1,    -1,    53,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    38,    42,     0,    13,    39,     5,     6,     7,
       8,    41,    43,     9,    30,    40,    43,    31,     9,    32,
      29,     3,     4,     9,    20,    22,    23,    43,    45,    50,
      51,    52,    53,    40,    30,    30,    14,    15,    16,    17,
      18,    19,    23,    36,    49,    30,    30,     9,     9,    10,
      45,    47,    29,    29,    34,    11,    11,     9,    12,    28,
      48,    54,    55,    54,     9,    46,    48,    53,    36,    58,
      48,    33,     9,    52,    51,    29,    29,    30,    24,    25,
      26,    27,    57,    31,    49,    34,    48,    34,     9,    35,
      48,    56,    54,    32,    48,    46,    31,     9,    29,    31,
      45,    34,    34,    31,    48,    33,    53,    34,    21,    44,
      31,    32,    45,    32,    45,    45,    33,    33
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    42,
      42,    42,    43,    43,    43,    43,    44,    44,    44,    45,
      45,    45,    45,    45,    45,    46,    47,    47,    48,    48,
      48,    49,    49,    49,    49,    49,    49,    50,    51,    51,
      52,    52,    53,    53,    53,    53,    53,    53,    54,    54,
      54,    55,    56,    56,    56,    57,    57,    57,    57,    58,
      58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     0,     2,     4,     9,     0,
       2,     1,     1,     1,     1,     1,     4,     2,     0,     2,
       2,     7,     8,     8,    11,     3,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     1,     1,     3,     1,     3,     2,     2,     3,     1,
       1,     4,     0,     3,     1,     1,     1,     1,     1,     2,
       0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 67 "translator.y" /* yacc.c:1646  */
    { 
    head = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, PROGRAM_LABEL); 

}
#line 1404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 74 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, FUNCTIONS_LABEL);}
#line 1410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 79 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode(NULL, NULL, "");}
#line 1416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 80 "translator.y" /* yacc.c:1646  */
    {
struct node* temp = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name);
struct node* temp2 = mknode(NULL, NULL, (yyvsp[0].nd_obj).name);
(yyval.nd_obj).nd = mknode(temp, temp2, FUNCTION_PARAM_LABEL);
}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 85 "translator.y" /* yacc.c:1646  */
    {
struct node* temp = mknode(NULL, NULL, (yyvsp[-3].nd_obj).name);
struct node* temp2 = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name);
struct node* temp3 = mknode(temp, temp2, FUNCTION_PARAM_LABEL);
(yyval.nd_obj).nd = mknode(temp3, (yyvsp[0].nd_obj).nd, FUNCTION_PARAM_LIST);
 }
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 95 "translator.y" /* yacc.c:1646  */
    {
struct node* id = mknode(NULL, NULL, (yyvsp[-7].nd_obj).name);
struct node* temp = mknode(id, (yyvsp[-5].nd_obj).nd, FUNCTION_ID_PARAM_LIST);
struct node* temp2 = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[-1].nd_obj).nd, FUNCTION_BODY_RETURN);
(yyval.nd_obj).nd = mknode(temp, temp2, FUNCTION);

}
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 107 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, NULL, (yyvsp[0].nd_obj).name); }
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 108 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 120 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, NULL, ELSE_BLOCK);}
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 121 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[0].nd_obj).nd, NULL, ELSE_BLOCK);}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 122 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode(NULL, NULL, "");}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 125 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, COMPOUND_STATEMENT);}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 126 "translator.y" /* yacc.c:1646  */
    { (yyval.nd_obj).nd = (yyvsp[-1].nd_obj).nd; }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 127 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode(mknode(NULL, NULL, (yyvsp[-2].nd_obj).name), NULL, (yyvsp[-6].nd_obj).name);}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 128 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode( mknode(NULL, NULL, (yyvsp[-5].nd_obj).name), mknode(NULL, NULL, (yyvsp[-2].nd_obj).name), (yyvsp[-7].nd_obj).name);}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 129 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[-5].nd_obj).nd, mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, IFBODY_ELSE), (yyvsp[-7].nd_obj).name);}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 130 "translator.y" /* yacc.c:1646  */
    {
    struct node *temp = mknode((yyvsp[-6].nd_obj).nd, (yyvsp[-4].nd_obj).nd, FOR_CONDITION_STATEMENT); 
    struct node *temp2 = mknode((yyvsp[-8].nd_obj).nd, temp, FOR_STATEMENT_CONDITIONSTATEMENT); 
    (yyval.nd_obj).nd = mknode(temp2, (yyvsp[-1].nd_obj).nd, (yyvsp[-10].nd_obj).name); }
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 140 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode(mknode(NULL, NULL, concat(concat((yyvsp[-2].nd_obj).nd->left->token,(yyvsp[-1].nd_obj).name), (yyvsp[0].nd_obj).nd->left->token)), NULL, IFCONDITION);}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 145 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = NULL;}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 146 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, NULL, RETURN_LABEL);}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 149 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode(mknode(NULL, NULL, (yyvsp[0].nd_obj).name), NULL, VAL);}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 150 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode(mknode(NULL, NULL, (yyvsp[0].nd_obj).name), NULL, VAL);}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode(mknode(NULL, NULL, (yyvsp[0].nd_obj).name), NULL, VAL);}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 163 "translator.y" /* yacc.c:1646  */
    { 
    (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); 
    (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, DECLARATION); 
}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 168 "translator.y" /* yacc.c:1646  */
    { 
    (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); 
    (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, ASSIGNMENT);}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 171 "translator.y" /* yacc.c:1646  */
    { (yyval.nd_obj).nd = mknode(NULL, NULL, "");}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 174 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, ASSIGNMENT_LIST);}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 175 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd;}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 178 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd;}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 179 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, DECLARATION_ASSIGNMENT_LIST);}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 180 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd;}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 181 "translator.y" /* yacc.c:1646  */
    { 
    (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); 
    (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); 
}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 185 "translator.y" /* yacc.c:1646  */
    { 
    (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); 
    (yyvsp[0].nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); 
    (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, ITERATOR); 
}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 190 "translator.y" /* yacc.c:1646  */
    { 
    (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); 
    (yyvsp[0].nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); 
    (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, ITERATOR); 
}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 197 "translator.y" /* yacc.c:1646  */
    { 
    (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); 
}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 200 "translator.y" /* yacc.c:1646  */
    { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 201 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 206 "translator.y" /* yacc.c:1646  */
    {
struct node* temp =mknode(NULL, NULL, (yyvsp[-3].nd_obj).name);
(yyval.nd_obj).nd = mknode(temp, (yyvsp[-1].nd_obj).nd, FUNCTIONCALL_ID_VALUELIST);
}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 213 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, VALUE_LIST);}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 214 "translator.y" /* yacc.c:1646  */
    {(yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd;}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 223 "translator.y" /* yacc.c:1646  */
    { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 224 "translator.y" /* yacc.c:1646  */
    { (yyval.nd_obj).nd = mknode(NULL, NULL, ""); }
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1693 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 228 "translator.y" /* yacc.c:1906  */



struct node* mknode(struct node *left, struct node *right, char *token) {	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	char *newstr = (char *)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newstr;
	return(newnode);
}

void printSpaces(int n){
	for(int i = 0 ; i < n; i++)
		printf(" ");
}

void printTree(struct node* root, int space){
	if (root == NULL){
		return;
	}
	char *current = root->token;
	if (!strcmp(current, FUNCTIONS_LABEL)){
		printTree(root->left, space);
		printf("FUNCTION %s", root->right->left->left->token);

		printTree(root->right, space);
		printf("END FUNCTION %s\n\n", root->right->left->left->token);

	}
	else if (!strcmp(current, FUNCTION)){
		printTree(root->left->right, space);
		printf("\n");
		printTree(root->right->left, space + COUNT);
		if (root->right->right){
			printSpaces(space + COUNT);
			printf("%s=", root->left->left->token);
			printTree(root->right->right, space);
			printf("\n");
		}

	}
	else if (!strcmp(current, FUNCTION_PARAM_LABEL)){
		printf(" %s",root->right->token);
	}
	else if (!strcmp(current, "printf")){
		printSpaces(space);
		printf("PRINT %s", root->left->token);
		printf("\n");
	}
	else if (!strcmp(current, "scanf")){
		printSpaces(space);
		printf("READ %s\n", root->right->token);
	}
	else if (!strcmp(current, DECLARATION)){
		if (strcmp(root->right->token, "")){
			printSpaces(space);
			printf("%s=%s",  root->left->token, root->right->left->token);
			printf("\n");
		}else{
			printSpaces(space);
			printf("%s", root->left->token);
			printf("\n");
		}
	}
	else if (!strcmp(current, ASSIGNMENT)){
		printSpaces(space);
		printf("%s=", root->left->token);
		printTree(root->right, space);
		printf("\n");
	}
	else if (!strcmp(current, VAL)){
		printf("%s ", root->left->token);
	}
	else if (!strcmp(current, FUNCTION_PARAM_LIST)){
		printTree(root->left, space);
		printTree(root->right, space);
	}
	else if (!strcmp(current, FUNCTIONCALL_ID_VALUELIST)){
		printf("%s ", root->left->token);
		printTree(root->right, space);
	}
	else if (!strcmp(current, "+") || !strcmp(current, "-") ||!strcmp(current, "*") || !strcmp(current, "/")){
		printTree(root->left, space);
		printf("%s ", current);
		printTree(root->right, space);
	}
	else if (!strcmp(current, "for")){
		printTree(root->left->left, space);
		printSpaces(space);
		printf("WHILE ");
		printf("%s", root->left->right->left->left->token);
		printf("\n");
		printTree(root->right, space + COUNT);
		printTree(root->left->right->right, space+ COUNT);
		printSpaces(space);
		printf("END WHILE\n");

	}
	else if (!strcmp(current, "if")){
		printSpaces(space);
		printf("IF %s THEN\n", root->left->left->token);
		printTree(root->right->left, space + COUNT);
		printTree(root->right->right, space);
		printSpaces(space);
		printf("ENDIF\n");
	}
	else if (!strcmp(current, ITERATOR)){
		printSpaces(space);
		printf("%s%s\n", root->left->token, root->right->token);
	}
	else if (!strcmp(current, ELSE_BLOCK)){
		printSpaces(space);
		if (!strcmp(root->left->token, "if")){
			printf("ELSEIF %s THEN\n", root->left->left->left->token);	
			printTree(root->left->right->left, space + COUNT);
			printTree(root->left->right->right, space);
		}else{
			printf("ELSE\n");
			printTree(root->left, space + COUNT);
		}

	}
	else {
		printTree(root->left, space);
		printTree(root->right, space);
	}
}


void print2DUtil(struct node* root, int space)
{
    if (root == NULL)
        return;

    space += COUNT;
    print2DUtil(root->right, space);
 
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%s\n", root->token);
 
    print2DUtil(root->left, space);
}
 
void print2D(struct node* root)
{
    print2DUtil(root, 0);
}

char* concat(char *s1, char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}


int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error opening file.\n");
            return 1;
        }
    }
    yyparse();
	printTree(head, 0);
	//print2D(head);
    return 0;
}

