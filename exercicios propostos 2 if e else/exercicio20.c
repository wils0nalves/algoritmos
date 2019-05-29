#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("\n\t\t\t==================IDENTIFICANDO SUA CATEGORIA NA NATAÇÃO==================\n");
	
	printf("\nPor favor,digite a sua idade: ");
		scanf("%d",&idade);
			system("cls");
			
//---------------------------------------------------------------------------------------------------------------------------

		if(idade>=5&&idade<=7)
		{
			printf("\nVocê está na categoria INFANTIL!");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
	
//---------------------------------------------------------------------------------------------------------------------------

		if(idade>=8&&idade<=10)
		{
			printf("\nVocê está na modalidade JUVENIL!");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}

//-----------------------------------------------------------------------------------------------------------------------------

		if(idade>=11&&idade<=15)
		{
			printf("\nVocê está na categoria ADOLESCENTE!");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}

//------------------------------------------------------------------------------------------------------------------------------

		if(idade>=16&&idade<=30)
		{
			printf("\nVocê está na categoria ADULTO!");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}

//-----------------------------------------------------------------------------------------------------------------------------
		
		else
		
		if(idade>30)
		{
			printf("\nVocê está na categoria SÊNIOR vovozão :D ");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
	
	
	
	system("pause");
}
