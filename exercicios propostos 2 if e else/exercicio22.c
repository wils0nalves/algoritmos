#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	float peso;
	
	printf("\n\t\t\t=====================GRUPO DE RISCO COMPARADO COM A IDADE=====================");
	printf("\n\nPor favor,digite a sua idade: ");
		scanf("%d",&idade);
	printf("\nAgora digite o seu peso: ");
		scanf("%f",&peso);
		
		system("cls");
		
			if(idade<20&&peso<=60)
		{
				printf("\n\t\tvocê está no grupo de risco 9 ");
				printf("\n\n\n\n\n");
		
			if(idade<20 && peso>60 || peso <=90)
			{
				printf("\n\t\tvocê está no grupo de risco 8 ");
				printf("\n\n\n\n\n");
			}
			else
		
			if(idade<20&&peso>90)
			{
				printf("\n\t\tvocê está no grupo de risco 7 ");
				printf("\n\n\n\n\n");
			}
		}

//-------------------------------------------------------------------------------------------------------------------
		
				if(idade>=20 || idade<=50 && peso<60)
			{
					printf("\n\t\tvocê está no grupo de risco 6 ");
					printf("\n\n\n\n\n");
		
				if(idade>=20 || idade<=50 && peso>=60 || peso<=90)
				{
				printf("\n\t\tvocê está no grupo de risco 5 ");
				printf("\n\n\n\n\n");
				}
				else
		
				if(idade>=20 || idade<=50 && peso>90)
				{	
				printf("\n\t\tvocê está no grupo de risco 4 ");
				printf("\n\n\n\n\n");
				}
			}
		
//--------------------------------------------------------------------------------
	
						if(idade>50 && peso<60)
					{
							printf("\n\t\tvocê está no grupo de risco 3 ");
							printf("\n\n\n\n\n");
		
						if(idade>50 && peso>=60 || peso<=90)
						{
							printf("\n\t\tvocê está no grupo de risco 2 ");
							printf("\n\n\n\n\n");
						}
						else
		
						if(idade>50 && peso>90)
						{	
								printf("\n\t\tvocê está no grupo de risco 1 ");
								printf("\n\n\n\n\n");
						}
					}
	
	
	system("pause");
}
