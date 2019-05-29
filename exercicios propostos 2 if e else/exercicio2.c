#include<stdio.h>
#include<stdlib.h>

main()

{

float nota1,nota2,media;

printf("digite a primeira nota: ");
	scanf("%f",&nota1);
printf("\ndigite a segunda nota: ");
	scanf("%f",&nota2);
	
		printf("\n\n");
		
	media=(nota1+nota2)/2;
	
		if (media<4)
{
			printf("reprovado!");
			printf("\nsua nota foi %4.1f \n",media);
			printf("\n\n\n\n");
}
		if (media>=4&&media<7)
		{
			printf("recuperacao!\n");
			printf("sua nota foi %4.1f \n",media);
			printf("\n\n\n\n");
}
		if (media>=7)
{		
			printf("Aprovado!\n");
			printf("sua nota foi %4.1f \n",media);
			printf("\n\n\n\n");
		}
		
		
system("pause");

	
}
