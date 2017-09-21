#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//#include"string_soma.h"

int string_soma (char* str )
{
	int i=0,soma=0,j=0,k=0;
	char n[4];

	while(str[i] != '\0'){
		while(str[i] != '\0' && str[i] != ','){
			n[j]=str[i];
			i++;
			j++;

		}
		n[j]='\0';
		//printf("%s",n);
		soma = soma + atoi(n);
		i++;
		k++;
		j=0;n[0]='\0';
	}
	if(k>3) return -1;
	return soma;
}