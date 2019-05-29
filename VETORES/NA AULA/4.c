//faca um programa que receba um vetor com 5 posicoes calcule e mostre os valores do vetor multiplicado por 5

#include<stdlib.h>
#include<stdio.h>

main()

{
 
 int vet[5],mult,i,n;
 	
 	for (i = 1; i <= 5; i++)
 	{
	printf("\n digite o %d valor: ",i);
 	scanf("%d",&vet[i]); 
	 
	 mult = vet[i]*5;
		printf("\n o valor do vetor multiplicado por 5 e igual a: %d \n",mult);
		printf("\n");
  }
	

	
	
	system("pause");
}
