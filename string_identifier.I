digit   [0-9]
alpha   [a-zA-Z_]

%%

{alpha}({alpha}|{digit})*     { printf("identifier=%s",yytext);  }           
({digit})+		      { printf("digit=%s",yytext);  }                           

%%
int yywrap(void)
{ return 1; }

int main()
{
yylex();

return 0;
}
