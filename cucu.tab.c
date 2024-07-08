/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cucu.y"

    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(char const *);
    extern FILE *yyin,*yyout,*lex_output;

#line 81 "cucu.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cucu.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_RETURN = 6,                     /* RETURN  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_LEFT_BRAC = 9,                  /* LEFT_BRAC  */
  YYSYMBOL_RIGHT_BRAC = 10,                /* RIGHT_BRAC  */
  YYSYMBOL_LEFT_CURLY = 11,                /* LEFT_CURLY  */
  YYSYMBOL_RIGHT_CURLY = 12,               /* RIGHT_CURLY  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 14,                      /* PLUS  */
  YYSYMBOL_MINUS = 15,                     /* MINUS  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_MUL = 17,                       /* MUL  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_SEMI = 19,                      /* SEMI  */
  YYSYMBOL_LEFT_SQ_BRAC = 20,              /* LEFT_SQ_BRAC  */
  YYSYMBOL_RIGHT_SQ_BRAC = 21,             /* RIGHT_SQ_BRAC  */
  YYSYMBOL_EQUAL = 22,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 23,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_THAN = 24,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 25,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 26,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 27,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_NUM = 28,                       /* NUM  */
  YYSYMBOL_IDENT = 29,                     /* IDENT  */
  YYSYMBOL_STRING = 30,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_program = 32,                   /* program  */
  YYSYMBOL_var_decl = 33,                  /* var_decl  */
  YYSYMBOL_int_decl = 34,                  /* int_decl  */
  YYSYMBOL_char_decl = 35,                 /* char_decl  */
  YYSYMBOL_int_expr = 36,                  /* int_expr  */
  YYSYMBOL_char_expr = 37,                 /* char_expr  */
  YYSYMBOL_func_decl = 38,                 /* func_decl  */
  YYSYMBOL_func_def = 39,                  /* func_def  */
  YYSYMBOL_func_args = 40,                 /* func_args  */
  YYSYMBOL_func_arg = 41,                  /* func_arg  */
  YYSYMBOL_func_body = 42,                 /* func_body  */
  YYSYMBOL_stmt_list = 43,                 /* stmt_list  */
  YYSYMBOL_stmt = 44,                      /* stmt  */
  YYSYMBOL_assignment = 45,                /* assignment  */
  YYSYMBOL_func_call = 46,                 /* func_call  */
  YYSYMBOL_ret = 47,                       /* ret  */
  YYSYMBOL_if = 48,                        /* if  */
  YYSYMBOL_while = 49,                     /* while  */
  YYSYMBOL_expr_list = 50,                 /* expr_list  */
  YYSYMBOL_bool = 51,                      /* bool  */
  YYSYMBOL_expr = 52,                      /* expr  */
  YYSYMBOL_identifier = 53,                /* identifier  */
  YYSYMBOL_const = 54,                     /* const  */
  YYSYMBOL_string = 55,                    /* string  */
  YYSYMBOL_int = 56,                       /* int  */
  YYSYMBOL_char = 57                       /* char  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  137

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    27,    27,    28,    29,    30,    31,    32,    33,    34,
      37,    38,    41,    42,    45,    46,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    60,    61,    62,    65,    66,
      69,    70,    73,    74,    77,    78,    79,    82,    83,    86,
      87,    90,    91,    92,    93,    94,    95,    98,   101,   104,
     105,   108,   109,   112,   115,   116,   117,   120,   121,   122,
     123,   124,   125,   126,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   140,   143,   147,   150,   153
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "CHAR", "WHILE",
  "RETURN", "IF", "ELSE", "LEFT_BRAC", "RIGHT_BRAC", "LEFT_CURLY",
  "RIGHT_CURLY", "ASSIGN", "PLUS", "MINUS", "DIV", "MUL", "COMMA", "SEMI",
  "LEFT_SQ_BRAC", "RIGHT_SQ_BRAC", "EQUAL", "NOT_EQUAL", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "NUM", "IDENT",
  "STRING", "$accept", "program", "var_decl", "int_decl", "char_decl",
  "int_expr", "char_expr", "func_decl", "func_def", "func_args",
  "func_arg", "func_body", "stmt_list", "stmt", "assignment", "func_call",
  "ret", "if", "while", "expr_list", "bool", "expr", "identifier", "const",
  "string", "int", "char", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     216,   -74,   -74,    -2,     4,     6,    59,   -74,   -74,   -74,
     133,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   151,    -4,   -74,   -74,   -20,   -20,    59,   -74,
     108,    24,    59,   245,   -74,   -74,   -74,   -74,   -74,    59,
      59,    59,    59,    59,    59,    59,     9,   177,   204,   224,
     -74,   227,   -74,   186,    57,    57,   -74,   -74,    10,   225,
     249,    73,    42,   -74,    73,    64,   -74,   178,    59,    59,
      59,    59,   178,   -74,    45,    59,   -74,    19,    31,   -20,
     -20,    42,   269,   -74,    -3,   -74,    51,    84,   -74,    99,
     -74,   216,   -74,   -74,   -74,   -20,   -20,   267,   267,   267,
     267,   105,   -74,   -74,   141,    73,   -74,   -74,   257,    42,
      42,    42,    42,   -74,    42,   169,   -74,   206,   -74,    12,
      29,   178,   -74,   -74,   -74,   -74,    89,    89,   -74,   -74,
     261,   -74,   -74,   -74,   -74,   -74,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    76,    77,     0,     0,     0,     0,    74,    73,    75,
       0,     6,    10,    11,     8,     7,     9,    41,    42,    43,
      44,    45,     0,    70,    71,    72,     0,     0,     0,    49,
       0,    70,     0,     0,     1,     2,     4,     3,     5,     0,
       0,     0,     0,     0,    56,     0,     0,     0,     0,    63,
      50,     0,    64,     0,    65,    66,    68,    67,     0,    55,
       0,    36,     0,    12,    36,     0,    14,     0,     0,     0,
       0,     0,     0,    47,     0,    56,    69,     0,    33,     0,
       0,     0,     0,    24,    23,    22,     0,     0,    27,    26,
      25,     0,    46,    53,    38,     0,     0,    57,    58,    59,
      60,    51,    48,    54,     0,    36,    34,    35,     0,     0,
       0,     0,     0,    13,     0,     0,    15,     0,    40,     0,
       0,     0,    28,    30,    32,    16,    17,    18,    20,    19,
       0,    29,    31,    37,    39,    52,    21
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,    30,   -74,   -74,   -73,   -74,   116,   118,   -60,
     -74,   -69,   -74,     1,   -74,   -12,   -74,   -74,   -74,    60,
      88,    15,     0,    20,    76,     2,    14
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    92,    12,    13,    82,    87,    14,    15,    77,
      78,    93,   117,    94,    17,    18,    19,    20,    21,    58,
      59,    22,    31,    24,    25,    95,    96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    16,    26,   101,    86,    44,    44,    28,   108,     8,
      23,    38,    26,     6,    27,    32,    45,   114,    61,    30,
      74,    33,    62,    29,    27,    62,    46,    47,    63,   104,
      11,    63,     7,     8,     9,   123,   126,   127,   128,   129,
      35,   130,    65,    49,    45,   124,   132,    49,    66,   105,
      83,    81,   135,    88,    53,    54,    55,    56,    57,    49,
      60,   115,    84,    79,   102,    89,    79,    23,     6,    83,
       7,     8,    23,    42,    43,    80,     1,     2,    80,   106,
     107,    84,    85,    49,    49,    49,    49,     7,     8,     9,
      49,    23,   118,     8,     9,   119,   120,    83,    83,    83,
      83,    85,    83,   116,    23,   111,   112,    79,    44,    84,
      84,    84,    84,   121,    84,    23,    48,    23,   134,    80,
      51,    23,    40,    41,    42,    43,    36,    50,    37,    85,
      85,    85,    85,    34,    85,   103,     1,     2,     3,     4,
       5,    90,     6,     0,     1,     2,     3,     4,     5,     0,
       6,     0,    91,     0,     0,     0,    97,    98,    99,   100,
     122,     7,     8,     9,    39,    40,    41,    42,    43,     7,
       8,     9,     1,     2,     3,     4,     5,     0,     6,     0,
      91,     1,     2,     3,     4,     5,    64,     6,   131,    91,
      65,     0,     0,     0,     0,     0,    66,     7,     8,     9,
      40,    41,    42,    43,     0,    73,     7,     8,     9,     1,
       2,     3,     4,     5,    67,     6,     0,     0,   133,     1,
       2,     3,     4,     5,     0,     6,    68,    69,     0,     0,
      70,    71,     0,     0,     7,     8,     9,    72,    40,    41,
      42,    43,     0,    75,     7,     8,     9,    68,    69,    68,
      69,    70,    71,    70,    71,    52,     0,     0,     0,    40,
      41,    42,    43,    40,    41,    42,    43,   125,     0,     0,
      76,   109,   110,   111,   112,   109,   110,   111,   112,     0,
       0,     0,   136,   109,   110,   111,   112,     0,   113,    -1,
      -1,     0,     0,    -1,    -1
};

static const yytype_int8 yycheck[] =
{
       0,     0,     0,    72,    64,     9,     9,     9,    81,    29,
      10,    10,    10,     9,     0,     9,    20,    20,     9,     4,
      10,     6,    13,    19,    10,    13,    26,    27,    19,    10,
       0,    19,    28,    29,    30,   104,   109,   110,   111,   112,
      10,   114,    13,    28,    20,   105,   115,    32,    19,    18,
      62,     9,   121,    65,    39,    40,    41,    42,    43,    44,
      45,    10,    62,    61,    19,    65,    64,    67,     9,    81,
      28,    29,    72,    16,    17,    61,     3,     4,    64,    79,
      80,    81,    62,    68,    69,    70,    71,    28,    29,    30,
      75,    91,    91,    29,    30,    95,    96,   109,   110,   111,
     112,    81,   114,    19,   104,    16,    17,   105,     9,   109,
     110,   111,   112,     8,   114,   115,    28,   117,   117,   105,
      32,   121,    14,    15,    16,    17,    10,    19,    10,   109,
     110,   111,   112,     0,   114,    75,     3,     4,     5,     6,
       7,    65,     9,    -1,     3,     4,     5,     6,     7,    -1,
       9,    -1,    11,    -1,    -1,    -1,    68,    69,    70,    71,
      19,    28,    29,    30,    13,    14,    15,    16,    17,    28,
      29,    30,     3,     4,     5,     6,     7,    -1,     9,    -1,
      11,     3,     4,     5,     6,     7,     9,     9,    19,    11,
      13,    -1,    -1,    -1,    -1,    -1,    19,    28,    29,    30,
      14,    15,    16,    17,    -1,    19,    28,    29,    30,     3,
       4,     5,     6,     7,    10,     9,    -1,    -1,    12,     3,
       4,     5,     6,     7,    -1,     9,    22,    23,    -1,    -1,
      26,    27,    -1,    -1,    28,    29,    30,    10,    14,    15,
      16,    17,    -1,    18,    28,    29,    30,    22,    23,    22,
      23,    26,    27,    26,    27,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    14,    15,    16,    17,    10,    -1,    -1,
      21,    14,    15,    16,    17,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    14,    15,    16,    17,    -1,    19,    22,
      23,    -1,    -1,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    28,    29,    30,
      32,    33,    34,    35,    38,    39,    44,    45,    46,    47,
      48,    49,    52,    53,    54,    55,    56,    57,     9,    19,
      52,    53,     9,    52,     0,    33,    38,    39,    44,    13,
      14,    15,    16,    17,     9,    20,    53,    53,    51,    52,
      19,    51,    10,    52,    52,    52,    52,    52,    50,    51,
      52,     9,    13,    19,     9,    13,    19,    10,    22,    23,
      26,    27,    10,    19,    10,    18,    21,    40,    41,    56,
      57,     9,    36,    46,    53,    54,    40,    37,    46,    53,
      55,    11,    33,    42,    44,    56,    57,    51,    51,    51,
      51,    42,    19,    50,    10,    18,    53,    53,    36,    14,
      15,    16,    17,    19,    20,    10,    19,    43,    44,    53,
      53,     8,    19,    42,    40,    10,    36,    36,    36,    36,
      36,    19,    42,    12,    44,    42,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    32,    32,    32,    32,    32,    32,    32,
      33,    33,    34,    34,    35,    35,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    37,    37,    37,    38,    38,
      39,    39,    40,    40,    41,    41,    41,    42,    42,    43,
      43,    44,    44,    44,    44,    44,    44,    45,    46,    47,
      47,    48,    48,    49,    50,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    53,    54,    55,    56,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     3,     5,     3,     5,     3,     3,     3,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     6,     6,
       6,     6,     3,     1,     2,     2,     0,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     2,
       3,     5,     7,     5,     3,     1,     0,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: program var_decl  */
#line 27 "cucu.y"
                                {fprintf(yyout,"\n");}
#line 1244 "cucu.tab.c"
    break;

  case 3: /* program: program func_def  */
#line 28 "cucu.y"
                                {fprintf(yyout,"\n");}
#line 1250 "cucu.tab.c"
    break;

  case 4: /* program: program func_decl  */
#line 29 "cucu.y"
                                {fprintf(yyout,"\n");}
#line 1256 "cucu.tab.c"
    break;

  case 6: /* program: var_decl  */
#line 31 "cucu.y"
                                {fprintf(yyout,"\n");}
#line 1262 "cucu.tab.c"
    break;

  case 7: /* program: func_def  */
#line 32 "cucu.y"
                                {fprintf(yyout,"\n");}
#line 1268 "cucu.tab.c"
    break;

  case 8: /* program: func_decl  */
#line 33 "cucu.y"
                                {fprintf(yyout,"\n");}
#line 1274 "cucu.tab.c"
    break;

  case 10: /* var_decl: int_decl  */
#line 37 "cucu.y"
                                {fprintf(yyout,"int declared\n");}
#line 1280 "cucu.tab.c"
    break;

  case 11: /* var_decl: char_decl  */
#line 38 "cucu.y"
                                {fprintf(yyout,"char * declared\n");}
#line 1286 "cucu.tab.c"
    break;

  case 13: /* int_decl: int identifier ASSIGN int_expr SEMI  */
#line 42 "cucu.y"
                                                {fprintf(yyout,"Assignment ends\n");}
#line 1292 "cucu.tab.c"
    break;

  case 15: /* char_decl: char identifier ASSIGN char_expr SEMI  */
#line 46 "cucu.y"
                                                    {fprintf(yyout,"Assignment ends\n");}
#line 1298 "cucu.tab.c"
    break;

  case 17: /* int_expr: int_expr PLUS int_expr  */
#line 50 "cucu.y"
                                        {fprintf(yyout,"Operator : + \n");}
#line 1304 "cucu.tab.c"
    break;

  case 18: /* int_expr: int_expr MINUS int_expr  */
#line 51 "cucu.y"
                                        {fprintf(yyout,"Operator : - \n");}
#line 1310 "cucu.tab.c"
    break;

  case 19: /* int_expr: int_expr MUL int_expr  */
#line 52 "cucu.y"
                                        {fprintf(yyout,"Operator : * \n");}
#line 1316 "cucu.tab.c"
    break;

  case 20: /* int_expr: int_expr DIV int_expr  */
#line 53 "cucu.y"
                                        {fprintf(yyout,"Operator : / \n");}
#line 1322 "cucu.tab.c"
    break;

  case 21: /* int_expr: identifier LEFT_SQ_BRAC int_expr RIGHT_SQ_BRAC  */
#line 54 "cucu.y"
                                                             {fprintf(yyout,"Operator : [] \n");}
#line 1328 "cucu.tab.c"
    break;

  case 28: /* func_decl: int identifier LEFT_BRAC func_args RIGHT_BRAC SEMI  */
#line 65 "cucu.y"
                                                                    {fprintf(yyout,"Function declaration ends \n\n");}
#line 1334 "cucu.tab.c"
    break;

  case 29: /* func_decl: char identifier LEFT_BRAC func_args RIGHT_BRAC SEMI  */
#line 66 "cucu.y"
                                                                    {fprintf(yyout,"Function declaration ends \n\n");}
#line 1340 "cucu.tab.c"
    break;

  case 30: /* func_def: int identifier LEFT_BRAC func_args RIGHT_BRAC func_body  */
#line 69 "cucu.y"
                                                                    {fprintf(yyout,"Function Defination ends \n\n");}
#line 1346 "cucu.tab.c"
    break;

  case 31: /* func_def: char identifier LEFT_BRAC func_args RIGHT_BRAC func_body  */
#line 70 "cucu.y"
                                                                    {fprintf(yyout,"Function Defination ends \n\n");}
#line 1352 "cucu.tab.c"
    break;

  case 33: /* func_args: func_arg  */
#line 74 "cucu.y"
                                        {fprintf(yyout,"Function Arguments end \n\n");}
#line 1358 "cucu.tab.c"
    break;

  case 34: /* func_arg: int identifier  */
#line 77 "cucu.y"
                                        {fprintf(yyout,"Type : int\n");}
#line 1364 "cucu.tab.c"
    break;

  case 35: /* func_arg: char identifier  */
#line 78 "cucu.y"
                                        {fprintf(yyout,"Type : char *\n");}
#line 1370 "cucu.tab.c"
    break;

  case 37: /* func_body: LEFT_CURLY stmt_list RIGHT_CURLY  */
#line 82 "cucu.y"
                                                {fprintf(yyout,"Function body ends\n");}
#line 1376 "cucu.tab.c"
    break;

  case 41: /* stmt: assignment  */
#line 90 "cucu.y"
                            {fprintf(yyout,"Assignment : =  ends \n");}
#line 1382 "cucu.tab.c"
    break;

  case 42: /* stmt: func_call  */
#line 91 "cucu.y"
                            {fprintf(yyout,"Function call ends \n\n");}
#line 1388 "cucu.tab.c"
    break;

  case 43: /* stmt: ret  */
#line 92 "cucu.y"
                            {fprintf(yyout,"Return statement ends \n\n");}
#line 1394 "cucu.tab.c"
    break;

  case 44: /* stmt: if  */
#line 93 "cucu.y"
                            {fprintf(yyout,"If condition ends  \n\n");}
#line 1400 "cucu.tab.c"
    break;

  case 45: /* stmt: while  */
#line 94 "cucu.y"
                            {fprintf(yyout,"While Loop ends \n\n");}
#line 1406 "cucu.tab.c"
    break;

  case 57: /* bool: bool EQUAL bool  */
#line 120 "cucu.y"
                                  {fprintf(yyout,"Operator : == \n");}
#line 1412 "cucu.tab.c"
    break;

  case 58: /* bool: bool NOT_EQUAL bool  */
#line 121 "cucu.y"
                                {fprintf(yyout,"Operator : != \n");}
#line 1418 "cucu.tab.c"
    break;

  case 59: /* bool: bool LESS_THAN_EQUAL bool  */
#line 122 "cucu.y"
                                      {fprintf(yyout,"Operator : <= \n");}
#line 1424 "cucu.tab.c"
    break;

  case 60: /* bool: bool GREATER_THAN_EQUAL bool  */
#line 123 "cucu.y"
                                         {fprintf(yyout,"Operator : >= \n");}
#line 1430 "cucu.tab.c"
    break;

  case 61: /* bool: bool LESS_THAN_EQUAL bool  */
#line 124 "cucu.y"
                                      {fprintf(yyout,"Operator : <= \n");}
#line 1436 "cucu.tab.c"
    break;

  case 62: /* bool: bool GREATER_THAN_EQUAL bool  */
#line 125 "cucu.y"
                                      {fprintf(yyout,"Operator : >= \n");}
#line 1442 "cucu.tab.c"
    break;

  case 65: /* expr: expr PLUS expr  */
#line 130 "cucu.y"
                                 {fprintf(yyout,"Operator : + \n");}
#line 1448 "cucu.tab.c"
    break;

  case 66: /* expr: expr MINUS expr  */
#line 131 "cucu.y"
                                 {fprintf(yyout,"Operator : - \n");}
#line 1454 "cucu.tab.c"
    break;

  case 67: /* expr: expr MUL expr  */
#line 132 "cucu.y"
                                 {fprintf(yyout,"Operator : * \n");}
#line 1460 "cucu.tab.c"
    break;

  case 68: /* expr: expr DIV expr  */
#line 133 "cucu.y"
                                 {fprintf(yyout,"Operator : / \n");}
#line 1466 "cucu.tab.c"
    break;

  case 69: /* expr: identifier LEFT_SQ_BRAC expr RIGHT_SQ_BRAC  */
#line 134 "cucu.y"
                                                       {fprintf(yyout,"Operator : [] \n");}
#line 1472 "cucu.tab.c"
    break;

  case 73: /* identifier: IDENT  */
#line 140 "cucu.y"
                       {fprintf(yyout,"Identifier : %s \n", (yyvsp[0].str));}
#line 1478 "cucu.tab.c"
    break;

  case 74: /* const: NUM  */
#line 143 "cucu.y"
                        {fprintf(yyout,"Const : %d \n", (yyvsp[0].num));}
#line 1484 "cucu.tab.c"
    break;

  case 75: /* string: STRING  */
#line 147 "cucu.y"
                         {fprintf(yyout,"String : %s \n", (yyvsp[0].str));}
#line 1490 "cucu.tab.c"
    break;

  case 76: /* int: INT  */
#line 150 "cucu.y"
                {fprintf(yyout,"Type : int\n");}
#line 1496 "cucu.tab.c"
    break;

  case 77: /* char: CHAR  */
#line 153 "cucu.y"
                {fprintf(yyout,"Type : char *\n");}
#line 1502 "cucu.tab.c"
    break;


#line 1506 "cucu.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 157 "cucu.y"


int main()
{
    printf("Enter file name : ");
    char name[20];
    scanf("%s",name);
    yyin = fopen(name ,"r");
    yyout=fopen("parser.txt","w");
    lex_output=fopen("lexer.txt","w");
    yyparse();
    return 0;
}

void yyerror(char const *s){
    printf("Syntax Error\n");
}
