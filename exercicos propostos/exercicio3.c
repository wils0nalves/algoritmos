#include <stdio.h>
#include <stdlib.h>

main()

{
	float n1,n2,resultado;
	
	printf("digite o primeiro n�mero: ");
    scanf("%f",&n1);
	printf("digite o segundo n�mero: ");	
	scanf("%f",&n2);
	
	resultado=n1/n2;
	printf("o resultado �: %4.2f",resultado);
	
	system("pause");
	
}
