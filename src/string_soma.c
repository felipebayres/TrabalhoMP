#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//#include"string_soma.h"

int string_soma (char * string )
{
int soma = 0,comprimento=0,i=0,j=0;;
char str[2],delimitador[20];

comprimento = strlen(string);

while( i < comprimento){
	
	if(47 < string[i] < 58 && j<4) {
	str[j] = string[i];
	j++;}
	if(j>3) str[2]="\0";
	soma = soma + atoi(str);
i++;}




return soma;

}

/*while(47 < string[i] < 58 && j < 4){ 	
		str[j]=string[i];
		j++;}
	soma = soma + atoi(str);
	if(string[i] != delimitador && string[i] != */
