#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	int codigoproduto,quantidadecomprada;
	float precounidade,total,desconto,precofinalcomdesconto;
	
	printf("\n\t\t===============================C�LCULOS DE UMA NOTA FISCAL=====================================");
	printf("\n\n\nDigite o c�digo do produto: ");
		scanf("%d",&codigoproduto);
	printf("\nDigite a quantidade comprada desse produto: ");
		scanf("%d",&quantidadecomprada);
		
//--------------------parte onde o programa vai mostrar o pre�o do produto pelo seu n�mero-----------------------------------

			if(codigoproduto>=1 && codigoproduto<=10)
		{
				precounidade=10,00;
				printf("\no pre�o da unidade desse produto � de: %4.2f",precounidade);
				printf("\n\n");
       }
//xxxxxxxxxxxxxxxxxx PARTE COM ALGUM ERRO DE SINTAXE,POIS ESTA PARTE PRA BAIXO N�O FUCNCIONAxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

			if(codigoproduto>10 && codigoproduto<=20)
		{
				precounidade=15,00;
				printf("\no pre�o da unidade desse produto � de: %4.2f",precounidade);
				printf("\n\n");
			}
			if(codigoproduto>20 && codigoproduto<=30)
			{
				precounidade=20,00;
				printf("\no pre�o da unidade desse produto � de: %4.2f",precounidade);
				printf("\n\n");
			}
			
			
			
			if(codigoproduto> 30 && codigoproduto<=40)
			{
				precounidade=20,00;
				printf("\no pre�o da unidade desse produto � de: %4.2f",precounidade);
				printf("\n\n");
			}
	  
	 
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX FIM DA PARTE COM ERRO XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

//--------------------------------------parte do pre�o total da nota-----------------------------------------------


	total=precounidade*quantidadecomprada;
	printf("\n\nO PRE�O TOTAL SER� DE: %4.2f ",total);
	printf("\n\n");			
	
//--------------------------aqui ser� calculado apenas o desconto ganho------------------------------------------------------	
	
		if(total<250)
			{
				desconto=total*0.05;
				printf("\nvoc� ganha 5 por cento de desconto que ser�: %4.1f ",desconto);
				printf("\n\n");

//XXXXXXXXXXXXXXXX O MESMO ERRO L� DE CIMA ACONTECE AQUI DE NOVO DESTA PARTE PRA BAIXO N�O FUNCIONA XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

				if(total>=250&&total<500)
			{
				desconto=total*0.10;
				printf("\nvoc� ganha 10 por cento de desconto que ser�: %4.1f ",desconto);
				printf("\n\n");
		}
				if(total>=500)
				{
					desconto=total*0.15;
					printf("\nvoc� ganha 15 por cento de desconto que ser�: %4.1f",desconto);
					printf("\n\n");
				}
				
			
//xxxxxxxxxxxxxxxxxxxxxxxxxxx FIM DO ERRO xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	
//------------------------PRE�O TOTAL DA NOTA APLICADO COM O DESCONTO------------------------------------------------------

			if(total<250)
			{
				total=total-(total*0.05);
				printf("\no produto tem desconto de 5 por cento ao total ser�: %4.1f",total);
				printf("\n\n");
			}
			if(total>=250&&total<500)
			{
				total=total-(total*0.10);
				printf("\no produto tem desconto de 10 por cento ao total ser�: %4.1f",total);
				printf("\n\n");
			}
			if(total>=500)
			{
				total=total-(total*0.15);
				printf("\no produto tem desconto de 15 por cento ao total ser�: %4.1f",total);
				printf("\n\n");
			}
			
		
printf("\n\n\n\n\n\n");			
	
	
	
	
	system("pause");
}}
