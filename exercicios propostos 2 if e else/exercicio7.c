#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float sal,salfinal;
	
	printf("\t\t\tAjustando seu sal�rio caso tenha direito (caso voc� receba menos de R$ 500)\n\n\n");
	printf("\nDigite seu sal�rio: ");
		scanf("%f",&sal);
	
	
			if(sal<=500)
	{
		salfinal=sal+(sal*0.30);
		printf("\n\n\t\t\t\t\tseu novo sal�rio de %4.1f",salfinal);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}
			if(sal>500)
	{
	printf("\n\n\t\t\t\t\tvoc� n�o tem direto a ter aumento!!!");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");	
	}
	
	system("pause");
}
