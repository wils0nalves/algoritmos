#include<stdio.h>
#include<stdlib.h>

main()

{
	float produto,porc,precofinal;
	
	printf("\nqual o preco do produto? ");
		scanf("%f",&produto);
		
	porc=produto-(produto*0.10);
	
	printf("\no preco do produto com seu desconto de 10 sera de: %4.2f ",porc);
	printf("\n\n\n\n");
	
		system("pause");
	
	
	
}
