#include<stdio.h>
#include<stdlib.h>
main()
{
	float n1,n2,resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("digite o segundo numero: ");
	scanf("%f",&n2);
	resultado=n1-n2;
	printf("a subtracao desses numero sao: %4.2f\n",resultado);
	system("pause");
}


