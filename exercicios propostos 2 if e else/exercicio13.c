#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float  preco,novopreco;
	
	printf("\n\t\t\t\t***CLASSIFICAÇÃO DE PREÇOS DE UM PRODUTO***\n\n\n\n");
	printf("Digite o preço do produto: ");
		scanf("%f",&preco);
		
		system("cls");
		
				if(preco<=50)
				{
					novopreco=preco+(preco*0.05);
					printf("\no novo preço do produto com aumento de 5 por cento é de: %4.1f ",novopreco);
					printf("\n\n");
				
					if(novopreco<=80)
					{
					printf("o produto está barato!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					}
				
				}
//------------------------------------------------------------------------------------------------------------------------------
		
				if(preco>50&&preco<=100);
				{
					novopreco=preco+(preco*0.10);
					printf("\no novo preço do produto com aumento de 10 por cento é de: %4.1f ",novopreco);
					printf("\n\n");
				
				if(novopreco<=80)
				
					{
					printf("o produto está barato!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					}
					if(novopreco>80&&novopreco<=120)
					{
						printf("o preço está normal!");
						printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					}
				}
//--------------------------------------------------------------------------------------------------------------------------------				
				if (preco>100)
				{
					novopreco=preco+(preco*0.15);
					printf("\no novo preço do produto com o aumento de 10 por cento é de: %4.1f ",novopreco);
					printf("\n\n");
					
					if(novopreco>80&&novopreco<=120)
				{
					printf("o preço está normal!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
					if(novopreco>120&&novopreco<=200)
				{
					printf("o produto está caro!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
					if(novopreco>200)
				{
					printf("o produto está MUITO caro!!!!!!");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
				
				}
				
system("pause");	
} 
