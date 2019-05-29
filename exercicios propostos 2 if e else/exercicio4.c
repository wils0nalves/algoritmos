#include<stdio.h>
#include<stdlib.h>

main()

{
	
	float n1,n2,n3;
	
	printf("\t\t\t\t********mostrando o maior numero digitado********\n\n\n");
	
	printf("digite o primeiro numero: ");
		scanf("%f",&n1);
	printf("\ndigite o segundo numero: ");
		scanf("%f",&n2);
	printf("\ndigite o terceiro numero: ");
		scanf("%f",&n3);
		
	printf("\n\n");
	
		if (n1>n2&&n1>n3)
			{
			printf("\t\t\t\t\t\to maior numero sera %4.0f",n1);
			printf("\n\n\n\n\n\n\n\n\n");
}
		if (n2>n1&&n2>n3)
		{
			printf("\t\t\t\t\t\to maior numero sera %4.0f",n2);
			printf("\n\n\n\n\n\n\n\n\n");
		}
		if (n3>n2&&n3>n1)
		{
			printf("\t\t\t\t\t\to maior numero sera %4.0f",n3);
			printf("\n\n\n\n\n\n\n\n\n");
		}
		
system("pause");
}

