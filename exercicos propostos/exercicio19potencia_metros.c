#include<stdio.h>
#include<stdlib.h>

main()

{
 	  float metros,altura,wats,potencia,areafinal;
 	  
 	  printf("digite quantos metros tem sua casa? ");
	  	scanf("%f",&metros);
	  
	  printf("\ndigite quantos metros de altura tem sua casa? ");
	  	scanf("%f",&altura);
	  
	  
	  areafinal=metros*altura;
	  
	  potencia=areafinal*18;
	  
	  printf("\nsua casa tem %4.1f",areafinal);
	  printf(" em metros quadrados. ");
	  
	  printf("\nsera usado %4.1f",potencia);
	  printf(" de potencia. ");
	  
	  printf("\n\n\n");
	  
	  system("pause");
	  
	  }
	  
	  
	  
