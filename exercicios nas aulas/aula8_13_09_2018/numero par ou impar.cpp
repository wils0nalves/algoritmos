#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{

setlocale(LC_ALL,"Portuguese");

int numero;

printf("\t\t\t\t****descobrindo se o n�mero � par ou impar****");
printf("\ndigite o n�mero: ");
	scanf("%d",&numero);
printf("\n\n\n");

		if ((numero % 2)==0)
		{
			printf("o n�mero %d � par",numero);
			printf("\n\n\n");
		}
		else
		{
			printf("o n�mero %d � impar",numero);
			printf("\n\n\n");
		}

system("pause");

}
