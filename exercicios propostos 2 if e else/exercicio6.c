#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	int escolha;
	float digito1,digito2,digito3,n1,n2,final;
	
	printf("\ndigite o que deseja fazer: ");
	printf("\n1.media entre os dois n�meros:");
	printf("\n2.diferen�a do maior pelo menor:");
	printf("\n3.produto entre os n�meros digitados:");
	printf("\n4.divis�o do primeio pelo segundo: ");
	scanf("%d",&escolha);
	print("\n\n\n");
	
		if(escolha == 1)
	{
		printf("digite o primeiro n�mero: ",n1);
			scanf("%f",&n1);
		printf("digite o segundo n�mero: ",n2);
			scanf("%f",&n2);
	digito1=(n1+n2)/2;
	}
		if(escolha == 2)
		{
		printf("digite o primeiro n�mero: ",n1);
			scanf("%f",&n1);
		printf("digite o segundo n�mero: ",n2);
			scanf("%f",&n2);
		digito2=n1-n2;	
		
		if (n2<n1)
		{
		digito2=n2-n1;
		printf("a diferen�a entre o maior pelo o menor ser� de %4.1f",digito2);
	}
		else
		
		if(escolha == 3)	
		{
			printf("digite o primeiro n�mero: ");
				scanf("%f",&n1);
			printf("digite o segundo n�mero: ");
				scanf("%f",n2);
			digito3=n1*n2;
			printf("o produto entre os n�meros digitados ser� de: %4.1f",digito3);
			
		}
	
		else

		printf("digito inv�lido");
		
	
	
system("pause");

}
