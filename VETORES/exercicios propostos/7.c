#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	float vet[11],negativo = 0;
	int i,somapositivo;	
	
	for (i = 0;i <= 9;i++)
	{
		printf("\n digite o %d n�mero: ",i+1);
		scanf("%f",&vet[i]);		
	}
	for (i = 0;i <= 9;i++)
	{
		if (vet[i] < 0)
		
		negativo++;
 }
 	for (i = 0;i <= 9;i++)
 	{
 		if (vet[i] >= 0)
 		
 			somapositivo += vet[i];
		
	 }
	 
	 system("color 0D");
	 
 system("cls");
 
 printf("\na soma dos n�meros positivos nesse vetor �: %d ",somapositivo);
 printf("\n");
 
 printf("\ns�o %.0f n�meros negativos",negativo);
		printf("\n");
 
 printf("\n\n\n\n");
	
	system("pause");
}
