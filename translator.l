%option noyywrap

%{
#include "y.tab.h"
%}

unary "++"|"--"



%% 
printf { strcpy(yylval.nd_obj.name,(yytext)); return PRINTF;}
scanf { strcpy(yylval.nd_obj.name,(yytext)); return SCANF;}
int { strcpy(yylval.nd_obj.name,(yytext)); return INT;}
float { strcpy(yylval.nd_obj.name,(yytext)); return FLOAT;}
char { strcpy(yylval.nd_obj.name,(yytext)); return CHAR;}
void { strcpy(yylval.nd_obj.name,(yytext)); return VOID;}
return { strcpy(yylval.nd_obj.name,(yytext)); return RETURN;}
for { strcpy(yylval.nd_obj.name,(yytext)); return FOR;}
"++"|"--"                   { strcpy(yylval.nd_obj.name,(yytext)); return UNARY; }
"if"	                    { strcpy(yylval.nd_obj.name,(yytext)); return IF; }
"else"	                    { strcpy(yylval.nd_obj.name,(yytext)); return ELSE; }
"<="                        { strcpy(yylval.nd_obj.name,(yytext)); return LE; }
">="                        { strcpy(yylval.nd_obj.name,(yytext)); return GE; }
"=="                        { strcpy(yylval.nd_obj.name,(yytext)); return EQ; }
"!="                        { strcpy(yylval.nd_obj.name,(yytext)); return NE; }
">"	                        { strcpy(yylval.nd_obj.name,(yytext)); return GT; }
"<"	                        { strcpy(yylval.nd_obj.name,(yytext)); return LT; }
"+"                         { strcpy(yylval.nd_obj.name,(yytext)); return ADD; }
"-"                         { strcpy(yylval.nd_obj.name,(yytext)); return SUBTRACT; }
"/"                         { strcpy(yylval.nd_obj.name,(yytext)); return DIVIDE; }
"*"                         { strcpy(yylval.nd_obj.name,(yytext)); return MULTIPLY; }

^"#include"[ ]*<.+\.h>      { strcpy(yylval.nd_obj.name,(yytext)); return INCLUDE; }
[-]?[0-9]+            {strcpy(yylval.nd_obj.name,(yytext)); return NUMBER; }
[a-zA-Z]+[a-zA-Z0-9]* { strcpy(yylval.nd_obj.name,(yytext)); return ID; }
'.' {strcpy(yylval.nd_obj.name,(yytext));return CHARLITERAL;}
\"(\\.|[^"\\])*\" {strcpy(yylval.nd_obj.name,(yytext));return STR;}
[ \t\n]  { /* ignore whitespace */ }
.    { return yytext[0]; }
%%
