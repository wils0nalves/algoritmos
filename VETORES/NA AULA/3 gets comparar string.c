#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char p1[30],p2[30]; //captura de palavras
	
	printf("informe a palavra 1: ");
	gets(p1);
	printf("informe a palavra 2: ");
	gets(p2); //verifica de o char e igual
	
	if(strcmp(p1,p2)==0)
		printf("\n palavras iguais.");
	
	if(strcmp(p1,"papagaio")==0)
		printf("\n palavra 1 igual a papagaio.");
	
	if(strcmp(p2,"papagaio")==0)
		printf("palavra 2 igual papagaio");
		
		return 0;
}
