#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("\n\t\t\t==================IDENTIFICANDO SUA CATEGORIA NA NATA��O==================\n");
	
	printf("\nPor favor,digite a sua idade: ");
		scanf("%d",&idade);
			system("cls");
			
//---------------------------------------------------------------------------------------------------------------------------

		if(idade>=5&&idade<=7)
		{
			printf("\nVoc� est� na categoria INFANTIL!");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
	
//---------------------------------------------------------------------------------------------------------------------------

		if(idade>=8&&idade<=10)
		{
			printf("\nVoc� est� na modalidade JUVENIL!");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}

//-----------------------------------------------------------------------------------------------------------------------------

		if(idade>=11&&idade<=15)
		{
			printf("\nVoc� est� na categoria ADOLESCENTE!");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}

//------------------------------------------------------------------------------------------------------------------------------

		if(idade>=16&&idade<=30)
		{
			printf("\nVoc� est� na categoria ADULTO!");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}

//-----------------------------------------------------------------------------------------------------------------------------
		
		else
		
		if(idade>30)
		{
			printf("\nVoc� est� na categoria S�NIOR vovoz�o :D ");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
	
	
	
	system("pause");
}
