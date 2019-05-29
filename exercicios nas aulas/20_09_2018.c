#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
//faça um programa que receba o numero de horas trabalhada e o valor do salario minimo,calcule e mostre o salario a receber seguindo as regras abaixo:
//a hora trabalhada vale a metade so salário minimo
//o salário bruto equivale ao numero de horas trabalhada multiplicado pelo valor da hora trabalhada
//o imposto equivale a 3 por cento do salario bruto 
//o salário a receber equivale ao salario bruto menos o imposto
//
main()

{
	setlocale(LC_ALL,"Portuguese");
	
	float horatrab,salminimo,valhoratrab,salbruto,imposto;
	
	
	printf("\ndigite as horas trabalhadas: ");
		scanf("%f",&horatrab);
	printf("\nDigite o valor do salário mínimo atualmente: ");
		scanf("%f",&salminimo);
	printf("\nDigite o valor da hora trabalhada: ");
		scanf("%f",&valhoratrab);
	
		horatrab=horatrab/(salminimo/2);
		
		salbruto=horatrab*valhoratrab;
		
		imposto=salbruto-(salbruto*0.03);
		
		
		
		printf("\nseu salário final será equivalente a: %4.1f ",imposto);
		printf("\n\n\n\n\n");
		
		
	
	
	
	
	
	
	
	
	system("pause");
}
