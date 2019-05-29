#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	do{
	
	int i,r,numero[11];
	
	for (i = 1; i <= 10; i++)
	{
		printf("digite o %d número: ",i);
		scanf("%d",&numero[i]);
	}
	
	system("cls");
	
	printf("\n\n");
	printf("\t\t\tnúmeros positivos digitados ABAIXO! ");
	
	for (i = 1; i <= 10; i++)
	{
		if(numero[i] % 2 == 0)
		printf("\t\t\t\t\n%d ",numero[i]);
	}

printf("\n\n\t\t\tnúmeros negativos digitados ABAIXO! ");

	for (i = 1; i <= 10; i++)
	{
		if(numero[i] % 2 != 0)
		printf("\t\t\t\t\n%d ",numero[i]);
	}
	printf("\ndigite 1 para reiniciar o programa ou 1 para parar: ");
	scanf("%d",&r);
}
while(r == 0)
	
	
	printf("n\n\n\n\n\n\n");
system("pause");	
}

