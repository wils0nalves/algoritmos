#include<stdio.h>
#include<stdlib.h>

main()

{
	
	int vet[6];
	int i,qtdpar = 0,qtdimpar = 0,par,impar;
	
	for (i = 0; i <= 5; i++)
	{
		printf("\n digite o %d numero: ",i+1);
		scanf("%d",&vet[i]);
    
	if (vet[i] % 2 == 0)
	
		qtdpar++;	

	if (vet[i] % 2 != 0)
	
		qtdimpar++;

}

printf("\nsao %d numeros pares! \n",qtdpar);

printf("\nsao %d numeros impares! \n",qtdimpar);

	for (i = 0; i <= 5; i++)
	{
		if (vet[i] % 2 == 0)
		
		printf("\n os numeros pares sao %d ",vet[i]);
			
		if (vet[i] % 2 != 0)
		
		printf("\n os numeros impares sao %d ",vet[i]);		
	}
	
		
	system("pause");
}
