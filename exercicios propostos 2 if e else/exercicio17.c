#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	int senha;
	
	printf("\t\t\t\t\t\t\t\t\t\t\t\ta senha �: 4531 :) ");
	printf("\n\n\n\t\t\t=====================VERIFICA��O DE SENHA=======================");
	printf("\n\n\nDigite a senha para descobrir o segredo: ");
		scanf("%d",&senha);
			system("cls");
			
	if(senha == 4531)
	{
		printf("\n\n\t\t\t\t\tSENHA CORRETA!!!");
		printf("\n\nParab�ns aqui est� o seu pr�mio! :D ");
		printf("\n\n\n\n\n\t\t\tSegue o link ---> https://www.youtube.com/watch?v=dQw4w9WgXcQ ");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}

	else
	
	if(senha != 4531)
	{
		printf("\n\n\n\n\t\t\t\t\t\tSENHA INCORRETA!");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	
system("pause");	
}
