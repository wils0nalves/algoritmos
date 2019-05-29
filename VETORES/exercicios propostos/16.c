#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char produto[6][20];
	float preco[6],media[6];
	int i,quantidade = 0;
	
	for (i = 1; i <= 5; i++)
	{
		printf("digite o nome do %d produto: ",i);
		scanf("%s",&produto[i]);
		printf("digite o preço do(a) %s : ",produto[i]);
		scanf("%f",&preco[i]);
		printf("\n");
	}
	
	for (i = 1; i <= 5; i++)
	{
		if (preco[i] < 50) 	quantidade++;
		
	}
	
	for (i = 1; i <= 5;i++)
	{
		if (preco[i] >= 50 && preco[i] <= 100)
		printf("\n%s está entre 50 e 100 reais! ",produto[i]);
	}
	
	printf("\n\nSão %d produtos com preço inferior a R$50! ",quantidade);
	
	for (i = 1; i <= 5;i++)
	{
		if (preco[i] >s 100)
		{
		media[6] = ((preco[i]+preco[i])/i);
		printf("\n\na media de preco dos produtos com preco acima de 100R$ é de: %2.1f ",media[6]);
		}
	}
	
	

	
	printf("\n\n\n\n\n\n\n\n");
	system("pause");
}
