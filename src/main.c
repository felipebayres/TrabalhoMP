#include <stdlib.h>
#include <stdio.h>
#include "../include/string_soma.h"
int main ()

{
	int soma=0;
	char string[150];
	scanf("%s", string);
	printf("%s\n",string);
	soma =  string_soma(string);
	printf("o valor da somaeh:%d\n",soma);

	return 0;
}
