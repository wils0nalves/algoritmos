#include<stdio.h>
#include<stdlib.h>

main()

{
	
	int vet[15],i,elemento30;
	
	for (i = 0; i <= 14; i++)
	{
		printf("\ndigite o %d numero: ",i+1);
		scanf("%d",&vet[i]);
	}
	
	for (i = 0; i <= 14; i++)
	{
		if (vet[i] == 30)
		{
			printf("\na posicao desse vetor com numero e 30 %d",i);
		}
	}
	
	printf("\n\n\n");
	
	system("pause");
}
