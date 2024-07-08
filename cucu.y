%{
    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(char const *);
    extern FILE *yyin,*yyout,*lex_output;
%}
%token INT CHAR WHILE RETURN IF ELSE LEFT_BRAC RIGHT_BRAC LEFT_CURLY RIGHT_CURLY ASSIGN PLUS MINUS DIV MUL COMMA SEMI LEFT_SQ_BRAC RIGHT_SQ_BRAC EQUAL NOT_EQUAL LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL

%union{
    int num;
    char *str;
}

%token <num> NUM
%token <str> IDENT
%token <str> STRING

%left PLUS MINUS
%left MUL DIV
%left LEFT_BRAC RIGHT_BRAC
%nonassoc EQUAL NOT_EQUAL LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL

%%
program : program var_decl      {fprintf(yyout,"\n");}
        | program func_def      {fprintf(yyout,"\n");}
        | program func_decl     {fprintf(yyout,"\n");}
        | program stmt
        | var_decl              {fprintf(yyout,"\n");}
        | func_def              {fprintf(yyout,"\n");}
        | func_decl             {fprintf(yyout,"\n");}
        | stmt
        ;

var_decl : int_decl             {fprintf(yyout,"int declared\n");}
        | char_decl             {fprintf(yyout,"char * declared\n");}
        ;
    
int_decl : int identifier SEMI                    
        | int identifier ASSIGN int_expr SEMI   {fprintf(yyout,"Assignment ends\n");}
        ;

char_decl : char identifier SEMI
        | char identifier ASSIGN char_expr SEMI     {fprintf(yyout,"Assignment ends\n");}
        ;

int_expr : LEFT_BRAC int_expr RIGHT_BRAC
    | int_expr PLUS int_expr            {fprintf(yyout,"Operator : + \n");}
    | int_expr MINUS int_expr           {fprintf(yyout,"Operator : - \n");}
    | int_expr MUL int_expr             {fprintf(yyout,"Operator : * \n");}
    | int_expr DIV int_expr             {fprintf(yyout,"Operator : / \n");}
    | identifier LEFT_SQ_BRAC int_expr RIGHT_SQ_BRAC         {fprintf(yyout,"Operator : [] \n");}
    | const                   
    | identifier 
    | func_call
    ;

char_expr : string
          | identifier
          |  func_call
    ;

func_decl : int identifier LEFT_BRAC func_args RIGHT_BRAC SEMI      {fprintf(yyout,"Function declaration ends \n\n");}
        | char identifier LEFT_BRAC func_args RIGHT_BRAC SEMI       {fprintf(yyout,"Function declaration ends \n\n");}
        ;

func_def : int identifier LEFT_BRAC func_args RIGHT_BRAC func_body  {fprintf(yyout,"Function Defination ends \n\n");}
        | char identifier LEFT_BRAC func_args RIGHT_BRAC func_body  {fprintf(yyout,"Function Defination ends \n\n");}
        ;

func_args : func_arg COMMA func_args
        | func_arg                      {fprintf(yyout,"Function Arguments end \n\n");}                               
        ;

func_arg : int identifier               {fprintf(yyout,"Type : int\n");}
        | char identifier               {fprintf(yyout,"Type : char *\n");}
        |  
        ;

func_body : LEFT_CURLY stmt_list RIGHT_CURLY    {fprintf(yyout,"Function body ends\n");}
        | stmt
         ;

stmt_list : stmt_list stmt
        | stmt
        ;

stmt : assignment           {fprintf(yyout,"Assignment : =  ends \n");}
     | func_call            {fprintf(yyout,"Function call ends \n\n");}
     | ret                  {fprintf(yyout,"Return statement ends \n\n");}
     | if                   {fprintf(yyout,"If condition ends  \n\n");}
     | while                {fprintf(yyout,"While Loop ends \n\n");}
     | var_decl
     ;

assignment : expr ASSIGN expr SEMI  
            ;

func_call : identifier LEFT_BRAC expr_list RIGHT_BRAC SEMI
        ;

ret : RETURN SEMI
    | RETURN expr SEMI
    ;

if : IF LEFT_BRAC bool RIGHT_BRAC func_body
    | IF LEFT_BRAC bool RIGHT_BRAC func_body ELSE func_body
    ;

while : WHILE LEFT_BRAC bool RIGHT_BRAC func_body
    ;

expr_list : bool COMMA expr_list
            | bool
            |
            ;

bool :  bool EQUAL bool           {fprintf(yyout,"Operator : == \n");}
    | bool NOT_EQUAL bool       {fprintf(yyout,"Operator : != \n");}
    | bool LESS_THAN_EQUAL bool       {fprintf(yyout,"Operator : <= \n");}
    | bool GREATER_THAN_EQUAL bool       {fprintf(yyout,"Operator : >= \n");}
    | bool LESS_THAN_EQUAL bool       {fprintf(yyout,"Operator : <= \n");}
    | bool GREATER_THAN_EQUAL bool    {fprintf(yyout,"Operator : >= \n");}
    | expr
    ;

expr : LEFT_BRAC expr RIGHT_BRAC
     | expr PLUS expr            {fprintf(yyout,"Operator : + \n");}
     | expr MINUS expr           {fprintf(yyout,"Operator : - \n");}
     | expr MUL expr             {fprintf(yyout,"Operator : * \n");}
     | expr DIV expr             {fprintf(yyout,"Operator : / \n");}
     | identifier LEFT_SQ_BRAC expr RIGHT_SQ_BRAC      {fprintf(yyout,"Operator : [] \n");}
     | identifier
     | const
     | string
     ;

identifier : IDENT     {fprintf(yyout,"Identifier : %s \n", $1);}
            ;

const : NUM             {fprintf(yyout,"Const : %d \n", $1);}
        ;


string : STRING          {fprintf(yyout,"String : %s \n", $1);}
        ;

int : INT       {fprintf(yyout,"Type : int\n");}
    ;

char : CHAR     {fprintf(yyout,"Type : char *\n");}
    ;


%%

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
