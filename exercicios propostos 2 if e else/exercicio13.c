#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float  preco,novopreco;
	
	printf("\n\t\t\t\t***CLASSIFICA��O DE PRE�OS DE UM PRODUTO***\n\n\n\n");
	printf("Digite o pre�o do produto: ");
		scanf("%f",&preco);
		
		system("cls");
		
				if(preco<=50)
				{
					novopreco=preco+(preco*0.05);
					printf("\no novo pre�o do produto com aumento de 5 por cento � de: %4.1f ",novopreco);
					printf("\n\n");
				
					if(novopreco<=80)
					{
					printf("o produto est� barato!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					}
				
				}
//------------------------------------------------------------------------------------------------------------------------------
		
				if(preco>50&&preco<=100);
				{
					novopreco=preco+(preco*0.10);
					printf("\no novo pre�o do produto com aumento de 10 por cento � de: %4.1f ",novopreco);
					printf("\n\n");
				
				if(novopreco<=80)
				
					{
					printf("o produto est� barato!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					}
					if(novopreco>80&&novopreco<=120)
					{
						printf("o pre�o est� normal!");
						printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					}
				}
//--------------------------------------------------------------------------------------------------------------------------------				
				if (preco>100)
				{
					novopreco=preco+(preco*0.15);
					printf("\no novo pre�o do produto com o aumento de 10 por cento � de: %4.1f ",novopreco);
					printf("\n\n");
					
					if(novopreco>80&&novopreco<=120)
				{
					printf("o pre�o est� normal!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
					if(novopreco>120&&novopreco<=200)
				{
					printf("o produto est� caro!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
					if(novopreco>200)
				{
					printf("o produto est� MUITO caro!!!!!!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
				
				}
				
system("pause");	
} 
