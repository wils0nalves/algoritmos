#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float sal,salfinal;
	
	printf("\t\t\tAjustando seu salário caso tenha direito (caso você receba menos de R$ 500)\n\n\n");
	printf("\nDigite seu salário: ");
		scanf("%f",&sal);
	
	
			if(sal<=500)
	{
		salfinal=sal+(sal*0.30);
		printf("\n\n\t\t\t\t\tseu novo salário de %4.1f",salfinal);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}
			if(sal>500)
	{
	printf("\n\n\t\t\t\t\tvocê não tem direto a ter aumento!!!");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");	
	}
	
	system("pause");
}
