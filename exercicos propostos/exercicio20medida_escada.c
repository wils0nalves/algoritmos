#include<stdio.h>
#include<stdlib.h>
#include <math.h>

main()

{
	float angulo,altura,escada,radiano;
	
	printf("\ndigite o angulo: ");
		scanf("%f",&angulo);

	printf("digite a altura: ");
		scanf("%f",&altura);
		
	radiano=(angulo*3.14)/180;
	escada=altura/sin(radiano);
	
	printf("\na medida da escada sera: %4.1f",escada);
	
	printf("\n\n\n");
	
	system("pause");
	
	
}
