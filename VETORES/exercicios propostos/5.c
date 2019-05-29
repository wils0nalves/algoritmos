#include<stdio.h>
#include<stdlib.h>

main()

{
	
	int logica[16];
	int linguagem[10];
	int i,a,b;
	
	for (i = 0;i <= 14;i++)
	{
		printf("\n digite a %d matricula dos alunos de logica: ",i+1);
		scanf("%d",&logica[i]);
	}
	
	for (i = 0;i <= 14;i++)
	{
		printf("\n digite a %d matricula dos alunos de linguagem de programacao: ",i+1);
		scanf("%d",&linguagem[i]);	
	}
	
	 printf("\n");

	system("cls");

    for(i=0; i<14; i++){

        for(a=14; a>=0; a--)
        {
            if(logica[i] == linguagem[a]) printf("as matriculas iguais sao: %d\n", logica[i]);
        }
        for(b<14; b=0; b--)
        {
            if(logica[b] == linguagem[i]) printf("as matriculas iguais sao: %d\n", logica[b]);
        }
    }

	printf("\n\n\n");
	
	system("color 0D");
	
	system("pause");
}
