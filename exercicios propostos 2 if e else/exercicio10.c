#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float preco,porcdistribuidor,porcimpostos,precofinal;
	
	printf("Digite o valor de f�brica do carro: ");
		scanf("%f",&preco);
			system("cls");
		
		if(preco<=12000)
		{
			precofinal=preco+(preco*0.05);
			printf("o pre�o do seu carro � isento de impostos mas tem porcentagem do distribuidor que somando ao total d�: %4.1f ",precofinal);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		if(preco>12000&&preco<=25000)
		{
			precofinal=preco+(preco*0.25);
			printf("o pre�o do seu carro com os impostos e porcentagem do distribuidor somado ser� de: %4.1f ",precofinal);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		if(preco>25000)
		{
			precofinal=preco+(preco*0.35);
			printf("o pre�o do seu carro com os impostos e porcentagem do distribuidor somado ser� de: %4.1f ",precofinal);
			printf("\n\n\n\n\n\n\n\n\n\n\n");
		}
	
	
	
	system("pause");
}
