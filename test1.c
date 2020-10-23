/*Definition Section*/

%{

#include<stdio.h>

/*Global variables*/

int tchar=0,tword=0,tspace=0;     

%}



/*Rule Section*/



%%



/*Increase the tspace and tword whenever

encounter whitespace.*/

" " {tspace++;tword++;}                  

/*Increase the tword whenever encounter newline

character and tab mata character.*/

[\t\n] tword++;                                

[^\n\t] tchar++;



%%



/*call the yywrap function*/

int yywrap()

{

return 1;

}



int main()

{

yyin=fopen("q4.txt","r");

/*call the yylex function.*/

yylex();                                        

printf("Number of character:: %d\nNumber of words:: 

%d\nNumber of spaces:: %d\n",tchar,tword,tspace);

return 0;

}

