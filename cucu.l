%{ 
    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include "cucu.tab.h"
    FILE *lex_output;
%}
%%
"int"                   {fprintf (lex_output,"TYPE : int\n"); return INT;}
"char *"                {fprintf (lex_output,"TYPE : char *\n"); return CHAR;}
"while"                 {fprintf (lex_output,"WHILE : while\n"); return WHILE;}
"return"                {fprintf (lex_output,"RETURN : return\n"); return RETURN;}
"if"                    {fprintf (lex_output,"IF : if\n"); return IF;}
"else"                  {fprintf (lex_output,"ELSE : else\n"); return ELSE;}
[a-zA-Z_][a-zA-Z0-9_]*  {fprintf (lex_output,"IDENT : %s\n", yytext); yylval.str=strdup(yytext); return IDENT;}
(\"[a-zA-Z0-9 ]*\")      {fprintf (lex_output,"TYPE : string"); yylval.str=strdup(yytext); return STRING;}
[0-9]+                  {fprintf (lex_output,"NUM : %d\n", yylval.num=atoi(yytext)); return NUM;}
"("                     {fprintf (lex_output,"LEFT_BRAC : (\n"); return LEFT_BRAC;}
")"                     {fprintf (lex_output,"RIGHT_BRAC : )\n"); return RIGHT_BRAC;}
"{"                     {fprintf (lex_output,"LEFT_CURLY : {\n"); return LEFT_CURLY;}
"}"                     {fprintf (lex_output,"RIGHT_CURLY : }\n"); return RIGHT_CURLY;}
"="                     {fprintf (lex_output,"ASSIGN : =\n"); return ASSIGN;}
"+"                     {fprintf (lex_output,"PLUS : +\n"); return PLUS;}
"-"                     {fprintf (lex_output,"MINUS : +\n"); return MINUS;}
"/"                     {fprintf (lex_output,"DIV : /\n"); return DIV;}
"*"                     {fprintf (lex_output,"MUL : *\n"); return MUL;}
","                     {fprintf (lex_output,"COMMA : ,\n"); return COMMA;}
";"                     {fprintf (lex_output,"SEMI : ;\n"); return SEMI;}
"["                     {fprintf (lex_output,"LEFT_SQ_BRAC : [\n"); return LEFT_SQ_BRAC;}
"]"                     {fprintf (lex_output,"RIGH_SQ_BRAC : ]\n"); return RIGHT_SQ_BRAC;}
"=="                    {fprintf (lex_output,"EQUAL : ==\n"); return EQUAL;}
"!="                    {fprintf (lex_output,"NOT_EQUAL : !=\n"); return NOT_EQUAL;}
"<"                    {fprintf (lex_output, "LESS_THAN : <\n"); return LESS_THAN;}
">"                    {fprintf (lex_output, "GREATER_THAN : >\n"); return GREATER_THAN;}
"<="                    {fprintf (lex_output, "LESS_THAN_EQUAL : <=\n"); return LESS_THAN_EQUAL;}
">="                    {fprintf (lex_output, "GREATER_THAN_EQUAL : >=\n"); return GREATER_THAN_EQUAL;}
\/\*(.|\n)*\*\/         ;
[ \t\n]+                ;
%%
int yywrap()
{
    return 1;
}