#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("\n\t\t\t\t\t**********DESCOBRINDO MAIOR IDADE**********");
	printf("\n\nDigite sua idade: ");
		scanf("%d",&idade);
			system("cls");
			
		if(idade<18)
		{
		printf("\n\n\t\t\t\tVocê é menor de idade! você tem apenas %d anos. ",idade);
		printf("\n\n\n\n\n\n\n");
		}
		else
		
		if(idade>=18)
		{
			printf("\n\n\t\t\t\tVocê é maior de idade! você tem %d anos.",idade);
			printf("\n\n\n\n\n\n\n");
		}
	
	
	
	system("pause");
}
