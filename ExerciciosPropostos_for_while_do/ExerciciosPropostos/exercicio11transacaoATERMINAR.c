#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	float valor,valorfinal;
	int contador;
	char codigo,v = 1,V = 2,f = 3,F = 4;
	
	for (contador=1; contador <=5; contador++)
	{
		printf("\ndigite V para � vista ou P para � prazo para fazer-mos sua transa��o: ");
		scanf("%s",&codigo);
		
		printf("\npor favor digite o valor da transa��o: ");
		scanf("%f",&valor);
	
		if (codigo = v)
	{
		valorfinal=valor*contador;
		printf("\nsua trasa��o � � vista e o valor ser� de: %4.1f ",valorfinal);
		printf("\n\n");
	}
		if (codigo = V)
	{
		valorfinal=valor*contador;
		printf("\nsua trasa��o � � vista e o valor ser� de: %4.1f ",valorfinal);
		printf("\n\n");	
	}
		if (codigo = f)
	{
		valorfinal=valor*contador;
		printf("\nsua trasa��o � � prazo e o valor ser� de: %4.1f ",valorfinal);
		printf("\n\n");
	}
		if (codigo = F)
	{
		valorfinal=valor*contador;
		printf("\nsua trasa��o � � prazo e o valor ser� de: %4.1f ",valorfinal);
		printf("\n\n");
	}
}
	
system("pause");	
}
