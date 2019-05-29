#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char aluno[9][20];
	int i;
	float nota[9],media[9];
	
	for (i = 1; i <= 8; i++)
	{
		printf("DIGITE O NOME DO %dº ALUNO: ",i);
		scanf("%s",&aluno[i]);
		printf("DIGITE A NOTA DO %s : ",aluno[i]);
		scanf("%f",&nota[i]);
	}
	
	system("cls");
	
	printf("\n\n\t\t\t********RELATÓRIO DE NOTAS******* ");
	printf("\n\n");
		
	for (i = 1; i <= 8; i++)
	{
		media[9] = (nota[i]*nota[i])/i;
		printf("\n %s = %2.1f ",aluno[i],nota[i]);
	}
	
	printf("\n\nA MEDIA DA CLASSE É %2.1f: ",media[9]);
	
	printf("\n\n\n\n\n\n\n\n\n\n");
	
	system("pause");	
}
