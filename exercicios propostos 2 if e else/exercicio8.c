#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float sal,salfinal35,salfinal15;
	
	printf("\t\t\t\t\t\tReajustando seu salário!!\n\n\n");
	printf("Digite seu salário: ");
		scanf("%f",&sal);
	
			if(sal<=300)
{
	salfinal35=sal+(sal*0.35);
	printf("\n\n\t\t\tseu novo salário ajustado com 35 por cento de aumento será de: %4.1f ",salfinal35);
	printf("\n\n\n\n\n\n\n\n\n\n\n");
}
			if(sal>300)
{
	salfinal15=sal+(sal*0.15);
	printf("\n\n\t\t\tseu novo salário ajustado com 15 por cento de aumento será de: %4.1f ",salfinal15);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
	
	system("pause");
}
