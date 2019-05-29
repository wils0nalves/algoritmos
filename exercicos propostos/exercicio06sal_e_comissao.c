#include<stdio.h>
#include<stdlib.h>

main()

{
	
	float salfixo,venda,comis,comisfinal,salfinal;
	
	printf("\ndigite seu salario fixo: ");
		scanf("%f",&salfixo);
	
	printf("\nqual o valor de sua venda?: ");
		scanf("%f",&venda);
	
	comis=venda*0.04;
	
	salfinal=salfixo+comis;
	
	printf("\nsua comissao sera de: %4.2f",comis);
	printf("\n o total do seu salario mais a comisao e de: %4.2f", salfinal);
	
	printf("\n\n\n");
	
	system("pause");
	
	
		
	
	
	
}
