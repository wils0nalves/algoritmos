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
		printf("\n\n\t\t\t\tVoc� � menor de idade! voc� tem apenas %d anos. ",idade);
		printf("\n\n\n\n\n\n\n");
		}
		else
		
		if(idade>=18)
		{
			printf("\n\n\t\t\t\tVoc� � maior de idade! voc� tem %d anos.",idade);
			printf("\n\n\n\n\n\n\n");
		}
	
	
	
	system("pause");
}
