#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	int calculo1,calculo2,calculo3,calculo4,calculo5,calculo6,calculo7,calculo8,calculo9,calculo10,contador;
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo1=(1*contador);
		printf("1 X %d : %d\n",contador,calculo1);
	}
	
	printf("\n");
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo2=(2*contador);
		printf("2 X %d : %d\n",contador,calculo2);
	}
	
	printf("\n");
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo3=(3*contador);
		printf("3 X %d : %d\n",contador,calculo3);
	}
	
	printf("\n");
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo4=(4*contador);
		printf("4 X %d : %d\n",contador,calculo4);
	}

	printf("\n");
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo5=(5*contador);
		printf("5 X %d : %d\n",contador,calculo5);
	}
	
	printf("\n");
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo6=(6*contador);
		printf("6 X %d : %d\n",contador,calculo6);
	}
	
	printf("\n");
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo7=(7*contador);
		printf("7 X %d : %d\n",contador,calculo7);
	}

	printf("\n");
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo8=(8*contador);
		printf("8 X %d : %d\n",contador,calculo8);
	}

	printf("\n");
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo9=(9*contador);
		printf("9 X %d : %d\n",contador,calculo9);
	}

	printf("\n");
	
	for (contador = 0; contador <=10;contador++)
	{
		calculo10=(10*contador);
		printf("10 X %d : %d\n",contador,calculo10);
	}

	printf("\n\n\n");
	
	
	
system("pause");	
}

