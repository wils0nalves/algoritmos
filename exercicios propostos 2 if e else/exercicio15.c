#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float escolha,investimento,poupanca,rendafixa;
	
	printf("\n\t\t\t\t***CALCULANDO O RENDIMENTO DO SEU INVESTIMENTO***");
	printf("\n\nDigite o investimento que deseja: \n\n");
	printf("1 - Poupança \n");
	printf("2 - Fundos de renda Fixa  ");
		scanf("%f",&escolha);
	printf("\n\n");
	printf("digite o quanto deseja investir: ");
		scanf("%f",&investimento);
	
		if(escolha==1)
		{
			poupanca=investimento*0.03;
			printf("\n\n\t\t\t\to seu rendimento mensal na poupaça será de: %4.1f ",poupanca);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		if(escolha==2)
		{
			rendafixa=investimento*0.04;
			printf("\n\n\t\t\t\to seu rendimento mensal em fundos de renda fixa será de: %4.1f",rendafixa);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");		
		}
		
system("pause");	
}
