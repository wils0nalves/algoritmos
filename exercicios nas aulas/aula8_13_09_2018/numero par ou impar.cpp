#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{

setlocale(LC_ALL,"Portuguese");

int numero;

printf("\t\t\t\t****descobrindo se o número é par ou impar****");
printf("\ndigite o número: ");
	scanf("%d",&numero);
printf("\n\n\n");

		if ((numero % 2)==0)
		{
			printf("o número %d é par",numero);
			printf("\n\n\n");
		}
		else
		{
			printf("o número %d é impar",numero);
			printf("\n\n\n");
		}

system("pause");

}
