#include<stdio.h>
#include<stdlib.h>

main()

{
	float angulo1,angulo2,resultado;
	
	printf("\t\t\t=======descobrindo o terceiro valor do triangulo=======\n\n");
	
	printf("\ndigite o valor do primeiro angulo: ");
		scanf("%f",&angulo1);
	printf("\ndigite o valor do segundo angulo: ");
		scanf("%f",&angulo2);
		
	resultado=180-(angulo1+angulo2);
	
	printf("\na medida do terceiro angulo e de%4.0f: ",resultado);
	
	printf("\n\n\n");
	
	system("pause");	
	
}
