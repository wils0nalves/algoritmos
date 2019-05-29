#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	int codigoproduto;
	float precoatual,desconto,novopreco;
	
	printf("\n\n\t\t\t***CONVERTENDO O PREÇO DO SEU PRODUTO E MOSTRANDO SEU CÓDIGO JUNTO***\n\n\n");
	printf("Digite o valor do produto: ");
		scanf("%f",&precoatual);
	printf("\nDigite o código dele: ");
		scanf("%d",&codigoproduto);
				system("cls");
	
		if(precoatual<=30)
		{
			printf("\nO produto não terá desconto!");
			printf(" e seu código é: %d ",codigoproduto);
			printf("\n\n\n\n\n");
		}
		if(precoatual>30&&precoatual<=100)
		{
			novopreco=precoatual-(precoatual*0.10);
			desconto=precoatual-novopreco;
			printf("\no preço do produto é %4.1f ,o desconto é de 10 por cento %4.1f , o novo preço será %4.1f ",precoatual,desconto,novopreco);
			printf("\n\n\n\n\n");
		}
		if(precoatual>100)
		{
			novopreco=precoatual-(precoatual*0.15);
			desconto=precoatual-novopreco;
			printf("\no preço do produto é %4.1f ,o desconto é de 15 por cento %4.1f , o novo preço será %4.1f ",precoatual,desconto,novopreco);
			printf("\n\n\n\n\n");
		}
			
		
	
	system("pause");
}
