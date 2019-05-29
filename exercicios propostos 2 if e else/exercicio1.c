#include<stdio.h>
#include<stdlib.h>

main()

{

float nota1,nota2,nota3,nota4,media;

printf("\t\t::::::::::::Lembre-se para sua aprovacao a nota deve ser maior ou igual a sete::::::::::::\n\n\n\n\n\n");

printf("digite sua primeira nota: ");
	scanf("%f",&nota1);
printf("\ndigite sua segunda nota: ");
	scanf("%f",&nota2);
printf("\ndigite sua terceira nota: ");
	scanf("%f",&nota3);
printf("\ndigite sua quarta nota: ");
	scanf("%f",&nota4);
	
printf("\n\n");

media=(nota1+nota2+nota3+nota4)/4;

		if (media<7)
{
	printf("sua nota foi %4.1f ",media);
	printf("recuperacao!");
	printf("\n\n\n\n\n\n");
 } 
 		if (media>=7)
 		{
 			printf("sua nota foi %4.1f ",media);
 			printf("aprovado!");
 			printf("\n\n\n\n\n\n\n");
		 }

system("pause");


}

