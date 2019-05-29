#include<stdio.h>
#include<stdlib.h>

main()

{
	
	char nome[20][11];
	int codigo[11],i;
	float preco[11],precofinal[11];
	
	
    	for (i = 1; i <= 3;i++)
	{
		printf("\ndigite o nome do %d produto: ",i);
		scanf("%s", &nome[i]);
	}
    
    	for (i = 1; i <= 3;i++)
	{
		printf("\ndigite o codigo do %d produto: ",i);
		scanf("%d",&codigo[i]);
	}
	
	for (i = 1; i <= 3;i++)
	{
		printf("\ndigite o preco do %d produto: ",i);
		scanf("%f",&preco[i]);
	}
	
	for(i = 1; i <=3; i++)
	{
	    if (codigo[i] % 2 == 0 || preco[i] >= 1000)
		{
			precofinal[i] = preco[i]+(preco[i]*0.2);
	    }
    }

   system("cls");

    for (i = 1; i <= 3;i++)
    {
		printf("\no nome do produto e: %s",nome[i]);
		printf("\no codigo do produto e: %d",codigo[i]);
		printf("\no preco do produto e: %4.1f ",preco[i]);
        printf("\no preco final deste produto e de: %4.1f ",precofinal[i]);
		printf("\n\n");		
    }	
	
	system("pause");
}
