#include<stdio.h>
#include<stdlib.h>

main()
{
float n1,n2,media,diferenca,diferenca2,produto,div;

printf("\t\t****calculando a media,diferenca,o produto e a divisao entre os numeros digitados****");

printf("\n\n\n\ndigite o primeiro numero: ");
	scanf("%f",&n1);
printf("\ndigite o segundo numero: ");
	scanf("%f",&n2);
 
 printf("\n\n\n");

 media=(n1+n2)/2;
 
 printf("\n\na media entre os dois numeros sera %4.1f ",media);
 
	 if (n1>n2)
 {
 		diferenca=n1-n2;
 		printf("\n\na diferenca do maior pelo menor sera de %4.1f ",diferenca);
 }
	if (n2>n1)
	{
		diferenca2=n2-n1;
		printf("\n\na diferenca do maior pelo menor sera de %4.1f",diferenca2);
	}
	
	produto=n1*n2;
	printf("\n\no produto desses dois numeros sera de %4.1f",produto);
	
	div=n1/n2;
	printf("\n\no resultado da divisao do primeiro numero pelo segundo sera %4.1f",div);
	printf("\n\n\n\n\n\n\n\n");
	
	system("pause");
	
}
