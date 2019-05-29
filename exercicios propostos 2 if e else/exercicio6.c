#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	int escolha;
	float digito1,digito2,digito3,n1,n2,final;
	
	printf("\ndigite o que deseja fazer: ");
	printf("\n1.media entre os dois números:");
	printf("\n2.diferença do maior pelo menor:");
	printf("\n3.produto entre os números digitados:");
	printf("\n4.divisão do primeio pelo segundo: ");
	scanf("%d",&escolha);
	print("\n\n\n");
	
		if(escolha == 1)
	{
		printf("digite o primeiro número: ",n1);
			scanf("%f",&n1);
		printf("digite o segundo número: ",n2);
			scanf("%f",&n2);
	digito1=(n1+n2)/2;
	}
		if(escolha == 2)
		{
		printf("digite o primeiro número: ",n1);
			scanf("%f",&n1);
		printf("digite o segundo número: ",n2);
			scanf("%f",&n2);
		digito2=n1-n2;	
		
		if (n2<n1)
		{
		digito2=n2-n1;
		printf("a diferença entre o maior pelo o menor será de %4.1f",digito2);
	}
		else
		
		if(escolha == 3)	
		{
			printf("digite o primeiro número: ");
				scanf("%f",&n1);
			printf("digite o segundo número: ");
				scanf("%f",n2);
			digito3=n1*n2;
			printf("o produto entre os números digitados será de: %4.1f",digito3);
			
		}
	
		else

		printf("digito inválido");
		
	
	
system("pause");

}
