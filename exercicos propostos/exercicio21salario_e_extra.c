#include<stdio.h>
#include<stdlib.h>

main()

{
	float horastrab,salmin,horasextrastrab,valorhorasextras,extrafinal,valorhoratrab,salbruto,salfinal;
	
	printf("\n\t\t\t***calculando seu salarios com hora trabalhadas e extras***\n\n\n");
	
	printf("\nquantas horas foram trabalhadas? ");
		scanf("%f",&horastrab);
		
	printf("\nqual o valor da hora trabalhada? ");
		scanf("%f",&valorhoratrab);
		
	printf("\nquantas horas extras foram trabalhadas? ");
		scanf("%f",&horasextrastrab);
		
	printf("\nqual o valor da hora extra trabalhada? ");
		scanf("%f",&valorhorasextras);
		
	printf("\nqual o valor do salario minimo atualmente? ");
		scanf("%f",&salmin);
	
	printf("\n\n");
		
	horastrab=salmin/8;
	horasextrastrab=salmin/4;
	salbruto=horastrab*valorhoratrab;
	extrafinal=horasextrastrab*valorhorasextras;
	
	salfinal=salbruto+extrafinal;
	
	printf("\nseu salario bruto sera de %4.2f",salbruto);
	
	printf("\nseu extra sera de %4.2f",extrafinal);
	
	printf("\nsendo ao total %4.2f",salfinal);
	
	printf("\n\n\n\n\n\n\n\n\n");
	
	system("pause");
	
}
