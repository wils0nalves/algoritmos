#include<stdio.h>
#include<stdlib.h>

main()

{
	float reais,dol,marcoalemao,libraesterlina,finaldol,finalmarco,finallibra;
	
	printf("\n\t\t\t\t==conversor de moedas(dolares,libras e marco esterlino)==\n\n\n");
	printf("\ndigite o valor em reais voce tem para sua viajem: ");
		scanf("%f",&reais);
	
	printf("\no real na cotacao atual equivale a tais precos abaixo:\n");
	printf("\n\t\t\t\t\t\t\tdolar 1.80");
	printf("\n\t\t\t\t\t\t\tmarco alemao 2.00");
	printf("\n\t\t\t\t\t\t\tlibra esterlina 1.57");
	
	printf("\n");
	
	finaldol=reais/1.80;
	finalmarco=reais/2;
	finallibra=reais/1.57;
	
	printf("\nconvertendo voce tera: \n\n");
	printf("\t\t\t%4.1f",finaldol);
	printf(" em dolares.");
	
	printf("\n\t\t\t%4.1f",finalmarco);
	printf(" em marco alemao.");
	
	printf("\n\t\t\t %4.1f",finallibra);
	printf(" em libras esterlinas.");
	
	printf("\n\n\n\n\n\n\n\n\n");
	
	system("pause");
	
	
}
