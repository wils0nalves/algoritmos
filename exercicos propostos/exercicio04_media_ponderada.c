#include<stdio.h>
#include<stdlib.h>

main()

{
	float nota1,nota2,peso1,peso2,somapeso,media;
	
	printf("\ndigite a primeira nota: ");
		scanf("%f",&nota1);
	printf("\ndigite a segunda nota: ");
		scanf("%f",&nota2);
	peso1=2;
	peso2=3;
	somapeso=peso1+peso2;
	media=(nota1*peso1)+(nota2*peso2)/somapeso;
	
	printf("\na media final e: %4.1f",media);
	
	printf("\n\n\n");
	system("pause");
	
}
