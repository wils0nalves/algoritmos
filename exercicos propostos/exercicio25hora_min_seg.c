#include<stdio.h>
#include<stdlib.h>

main()

{
	int hora,min,seg,final;
	
	printf("\n\t\t\t\t===conversor de horas em segundos e minutos===\n\n");
	printf("\ndigite a hora que voce que seja convertida: ");
		scanf("%i",&hora);

printf("\n\n\n");
		
	min=hora*60;
	seg=min*60;
	
	printf("\na hora digitada convertida em minutos sera de: %i \n",min);
	
	printf("\ne em segundos sera: %i \n",seg);
	
	printf("\n\n\n\n");

	system("pause");
	
	
}
