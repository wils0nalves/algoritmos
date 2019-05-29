#include<stdlib.h>
#include<stdio.h>

main()

{
	float diagonalmaior,diagonalmenor,areafinal;
	
	printf("\ndigite o valor de sua diagonal maior: ");
		scanf("%f",&diagonalmaior);
	printf("\ndigite o valor de sua diagonal menor: ");
		scanf("%f",&diagonalmenor);
	
	areafinal=(diagonalmaior*diagonalmenor)/2;
	
	printf("\na area do seu losango aquivale a: %4.2f",areafinal);
	
	printf("\n\n\n\n\n");
	
	
}
