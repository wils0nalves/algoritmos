#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{

int i,vet[6],soma;
	
	setlocale(LC_ALL,"Portuguese");
	
	for (i = 1; i <= 5; i++)
	{
		printf("digite o %d número: ",i);
		scanf("%d",&vet[i]);
	}
	
	printf("\nos números digitados foram: ");
	
	for (i = 1; i <= 5; i++)
	{
		printf("+ %d ",vet[i]);
	}
	
	for (i = 1; i <= 5; i++)
	{
		soma += vet[i];
	}
	

	printf("= %d",soma-1);
		
	printf("\n\n\n");	
		
	system("pause");
}
