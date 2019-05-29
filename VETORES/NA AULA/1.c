#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#define MAX 100 //para o vetor receber ate 100 digitos

main()

{
	
	setlocale(LC_ALL,"Portuguese");
	
	int n,i,v[MAX];
	
	printf("Digite o comprimento da sequência: ");
	scanf("%d",&n);
	
	printf("Digite uma sequência com %d números inteiros: ",n);
	for (i = 0; i < n; i++)
		scanf("%d",&v[i]);
	for(i = n-1; i >= 0; i--)
		printf("%d ",v[i]);
	printf("\n\n");
		
	
	
	
	
	
	
	
	
	
	system("pause");
}
