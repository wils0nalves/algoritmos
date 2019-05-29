#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float sal,salfinal;
	
	printf("\n\n\t\t\t\t***CALCULANDO SEU SALÁRIO COM DIREITO DE AUMENTO***\n\n\n");
	printf("\n\nDigite seu salário: ");
		scanf("%f",&sal);
					system("cls");
	
		if (sal<=300)
		{
			salfinal=sal+(sal*0.50);
			printf("\n\nseu novo salário será de: %4.1f ",salfinal);
			printf("\n\n\n\n\n\n\n");
		}
		if(sal>300&&sal<=500)
		{
			salfinal=sal+(sal*0.40);
			printf("\n\nSeu novo salário será de: %4.1f ",salfinal);
			printf("\n\n\n\n\n\n\n");
		}
		if(sal>500&&sal<=700)
		{
			salfinal=sal+(sal*0.30);
			printf("\n\nSeu novo salário será de: %4.1f ",salfinal);
			printf("\n\n\n\n\n\n\n");
		}
		if(sal>700&&sal<=800)
		{
			salfinal=sal+(sal*0.20);
			printf("\n\nSeu novo salário será de: %4.1f ",salfinal);
			printf("\n\n\n\n\n\n");
		}
		if(sal>800&&sal<=1000)
		{
			salfinal=sal+(sal*0.10);
			printf("\n\nSeu novo salário será de: %4.1f ",salfinal);
			printf("\n\n\n\n\n\n");
		}
		if(sal>1000)
		{
			salfinal=sal+(sal*0.05);
			printf("\n\nSeu novo salário será de: %4.1f ",salfinal);
			printf("\n\n\n\n\n");
		}
	
	system("pause");
	
}
