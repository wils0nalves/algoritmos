#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#define MAX 100 //para o vetor receber ate 100 digitos

main()

{
	
	setlocale(LC_ALL,"Portuguese");
	
	int n,i,v[MAX];
	
	printf("Digite o comprimento da sequ�ncia: ");
	scanf("%d",&n);
	
	printf("Digite uma sequ�ncia com %d n�meros inteiros: ",n);
	for (i = 0; i < n; i++)
		scanf("%d",&v[i]);
	for(i = n-1; i >= 0; i--)
		printf("%d ",v[i]);
	printf("\n\n");
		
	
	
	
	
	
	
	
	
	
	system("pause");
}
