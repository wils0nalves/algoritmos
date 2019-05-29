#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float sexo,altura,peso;
	
	printf("\n\t\t\t\t\t**********PESO E ALTURA IDEAL***********\n");
	printf("\nDigite sua altura: ");
		scanf("%f",&altura);
	printf("\nQual o seu sexo? ");
	printf("\n\n1 - MASCULINO");
	printf("\n2 - FEMININO ");
		scanf("%f",&sexo);
			system("cls");
			
		if(sexo==1)
		{
			peso=(72.7*altura)-58;
			printf("\n\n\n\t\t\to seu peso ideal será de: %4.2f ",peso);
			printf("\n\n\n\n\n\n\n");
		}
		else
		
		if(sexo==2)
		{
			peso=(61.1*altura)-44.7;
			printf("\n\n\n\n\t\t\to seu peso ideal será de: %4.2f ",peso);
			printf("\n\n\n\n\n\n\n");
		}


system("pause");	
}

