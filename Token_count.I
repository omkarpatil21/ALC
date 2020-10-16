%{
int count1,count2;
%}
digit [0-9]
alpha [a-zA-Z_]
%%
{alpha}({alpha}|{digit})* { count1++; }
({digit})+ { count2++; } 
%%
int yywrap(void)
{ return 1; }
int main(int argc,char* argv[])
{
yyin=fopen(argv[1],"r");
yylex();
printf("Number of Identifier=%d,Number of Numeric=%d",count1,count2);
return 0;
}
