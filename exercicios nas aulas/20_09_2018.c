#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
//fa�a um programa que receba o numero de horas trabalhada e o valor do salario minimo,calcule e mostre o salario a receber seguindo as regras abaixo:
//a hora trabalhada vale a metade so sal�rio minimo
//o sal�rio bruto equivale ao numero de horas trabalhada multiplicado pelo valor da hora trabalhada
//o imposto equivale a 3 por cento do salario bruto 
//o sal�rio a receber equivale ao salario bruto menos o imposto
//
main()

{
	setlocale(LC_ALL,"Portuguese");
	
	float horatrab,salminimo,valhoratrab,salbruto,imposto;
	
	
	printf("\ndigite as horas trabalhadas: ");
		scanf("%f",&horatrab);
	printf("\nDigite o valor do sal�rio m�nimo atualmente: ");
		scanf("%f",&salminimo);
	printf("\nDigite o valor da hora trabalhada: ");
		scanf("%f",&valhoratrab);
	
		horatrab=horatrab/(salminimo/2);
		
		salbruto=horatrab*valhoratrab;
		
		imposto=salbruto-(salbruto*0.03);
		
		
		
		printf("\nseu sal�rio final ser� equivalente a: %4.1f ",imposto);
		printf("\n\n\n\n\n");
		
		
	
	
	
	
	
	
	
	
	system("pause");
}
