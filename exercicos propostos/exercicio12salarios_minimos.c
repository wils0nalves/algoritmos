#include<stdio.h>
#include<stdlib.h>

main()

{
	
	float salariomin,salfuncionario,salarios;
	
	printf("\nqual o valor do salario do funcionario? ");
		scanf("%f",&salfuncionario);
	
				salariomin=1500;
	
				salarios=(salfuncionario/salariomin);
	
	printf("\no funcionario recebe %4.0f salarios minimos. ",salarios);
	
	printf("\n\n\n\n");
	
	system("pause");
	
}
