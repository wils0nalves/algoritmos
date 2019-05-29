#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,n3,n4;
	
	printf("\t\t\t****organizando números em ordem crescente e decrescente****");
	printf("\n\n\ndigite o primeiro número para que ele seja mostrados em ordem crescente e decrescente: ");
		scanf("%d",&n1);
				system("cls");
	printf("\ndigite o segundo número: ");
		scanf("%d",&n2);
				system("cls");
	printf("\ndigite o terceiro número: ");
		scanf("%d",&n3);
				system("cls");
	printf("\ndigite o quarto número: ");
		scanf("%d",&n4);
				system("cls");
				
			if (n1<n2<n3<n4)
	{
		printf("os números digitados em ordem crescente ficarão: %d , %d , %d , %d ",n1,n2,n3,n4);
		printf("\ne em ordem decrescente : %d , %d , %d , %d",n4,n3,n2,n1);
		printf("\n\n\n");
		
	}
			
			if(n4<n3<n2<n1)
	{
		printf("os números digitados em ordem crescente ficarão: %d , %d , %d , %d ",n4,n3,n2,n1);
		printf("\ne em ordem decrescente: %d , %d , %d , %d ",n1,n2,n3,n4);
		printf("\n\n\n");
	}
		
	system("pause");
	
}
