#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float saldo,porc30,porc25,porc20,porc10;
	
	printf("\t\t\t\t\t\t*****Crédito especial*****\n\n\n\n");
	printf("digite o saldo médio para calcular seu crédito especial: ");
		scanf("%f",&saldo);
				system("cls");
					
		if (saldo>400)
		{
			porc30=(saldo*0.30);
			printf("\n\n\n\n\n\n\t\t\tseu saldo é %4.1f e seu crédito especial será de: %4.1f ",saldo,porc30);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		if (saldo<=400&&saldo>=300)
		{
			porc25=(saldo*0.25);
			printf("\n\n\n\n\n\t\t\tseu saldo é %4.1f e seu crédito especial será de: %4.1f ",saldo,porc25);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		if(saldo<300&&saldo>=200)
		{
			porc20=(saldo*0.20);
			printf("\n\n\n\n\n\t\t\tseu saldo é %4.1f e seu crédito especial será de: %4.1f ",saldo,porc20);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
			}
		if(saldo<200)
		{
			porc10=(saldo*0.10);
			printf("\n\n\n\n\n\t\t\tseu saldo é %4.1f e seu crédito especial será de: %4.1f ",saldo,porc10);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		
	
	
	
	system("pause");
}
