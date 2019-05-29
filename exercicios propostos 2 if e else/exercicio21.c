#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	int codigo;
	float valor;
	
	printf("\n\t\t\t===================DESCOBRINDO A PROCEDÊNCIA DO PRODUTO===================");
	printf("\n\nPor favor,digite o valor do produto: ");
		scanf("%f",&valor);
	printf("\nAgora digite o código de origem dele: ");
		scanf("%d",&codigo);
	
					system("cls");					
//-----------------------------------------------------------------------------------------------------

		if(codigo == 1)
		{
			printf("\no valor do produto é: %4.1f e ele vem do SUL!",valor);
			printf("\n\n\n\n\n\n\n\n\n");
		}

//------------------------------------------------------------------------------------------------------

		if(codigo == 2)
		{
			printf("\no valor do produto é: %4.1f e ele vem do NORTE!",valor);
			printf("\n\n\n\n\n\n\n\n\n");
		}
		
//--------------------------------------------------------------------------------------------------------

		if(codigo == 3)
		{
			printf("\no valor do produto é: %4.1f e ele vem do LESTE!",valor);
			printf("\n\n\n\n\n\n\n\n\n");
		}

//--------------------------------------------------------------------------------------------------------

		if(codigo == 4)
		{
			printf("\no valor do produto é: %4.1f e ele vem do OESTE!",valor);
			printf("\n\n\n\n\n\n\n\n\n");
		}

//-------------------------------------------------------------------------------------------------------

		if(codigo == 5 || codigo ==6)
		{
			printf("\no valor do produto é: %4.1f e ele vem do NORDESTE!",valor);
			printf("\n\n\n\n\n\n\n\n\n");
		}
		
//------------------------------------------------------------------------------------------------------

		if(codigo == 7 || codigo == 8 || codigo == 9)
		{
			printf("\no valor do produto é: %4.1f e ele vem do SUDESTE!",valor);
			printf("\n\n\n\n\n\n\n\n\n");
		}

//-------------------------------------------------------------------------------------------------------
		
		if(codigo >= 10 && codigo <= 20)
		{
			printf("\no valor do produto é: %4.1f e ele vem do CENTRO-OESTE!",valor);
			printf("\n\n\n\n\n\n\n\n\n");
		}
		
//-------------------------------------------------------------------------------------------------------

		if(codigo >= 21 && codigo <= 30)
		{
			printf("\no valor do produto é: %4.1f e ele vem do NORDESTE!",valor);
			printf("\n\n\n\n\n\n\n\n\n");
		}
		
//-------------------------------------------------------------------------------------------------------

		else
		
		if(codigo>30)
		{
			printf("\n\n\n\t\t\tERRO! O CODIGO DIGITADO ESTÁ INCORRETO OU NÃO EXISTE!!!");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n");
			}	
		
	system("pause");
}
