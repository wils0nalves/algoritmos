#include<stdio.h>
#include<stdlib.h>

main()

{
	float lados,diagonais;
	printf("\n\t\t\t===descubra quantas diagonais tem seu poligono===\n\n\n");
	printf("\nquantos lados tem seu poligono? ");
		scanf("%f",&lados);
	
	diagonais=lados*(lados-3)/2;
	
	printf("\nseu poligono tem%4.0f ",diagonais);
	printf("lados. ");
	
	printf("\n\n\n\n\n\n\n\n\n");
	
	system("pause");
}
