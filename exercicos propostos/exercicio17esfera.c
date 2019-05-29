#include<stdio.h>
#include<stdlib.h>

main()

{
	float raio,comprimento,area,volume;
	
	printf("\ndigite o raio da esfera: ");
		scanf("%f",&raio);
	
	comprimento=2*3.14*raio;
	
	area=3.14*(raio*raio);
	
	volume=0.75*3.14*(raio*raio*raio);
	
	printf("\no comprimento sera de %2.2f: \n",comprimento);
	
	printf("\na area sera de %2.2f: \n",area);
	
	printf("\no volume sera de %2.2f: \n",volume);

	printf("\n\n\n");
	
	system("pause");
}
