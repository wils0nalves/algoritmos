#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{

setlocale(LC_ALL,"Portuguese");

int idade,repeticao,porcentagem,um = 0,dois = 0,tres = 0,quatro = 0,cinco = 0;


for (repeticao = 1; repeticao <= 15; repeticao++)
{
	printf("DIGITE SUA IDADE: ");
	scanf("%d",&idade);

	if (idade <= 15)
	{
		um++;
	}
		if (idade >= 16 && idade <=30)
	{
		dois++;
	}
		if (idade >=31 && idade <= 45)
	{	
		tres++;
	}
		if (idade >=46 && idade <= 60)
	{
		quatro++;
	}
		if (idade >= 61)
	{
		cinco++;
	}
}
		printf("\nsão %d na faixa etária 1\n",um);
		porcentagem = ((um*100)/15);
		printf("a porcentagem de pessoas na faixa etária 1 é de %d ",porcentagem);
		
		printf("\nsão %d na faixa etária 2\n",dois);
		printf("a porcentagem de pessoas na faixa etária 2 é de %d ",porcentagem);
		
		printf("\nsão %d na faixa etária 3\n",tres);
		printf("a porcentagem de pessoas na faixa etária 3 é de %d ",porcentagem);
		
		printf("\nsão %d na faixa etária 4\n",quatro);
		printf("a porcentagem de pessoas na faixa etária 4 é de %d ",porcentagem);
		
		printf("\nsão %d na faixa etária 5\n",cinco);	
		porcentagem = ((cinco*100)/15);
		printf("a porcentagem de pessoas na faixa etária 5 é de %d ",porcentagem);
		
	
	
system("pause");
}
