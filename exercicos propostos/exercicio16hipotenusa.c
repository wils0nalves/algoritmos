#include<stdlib.h>
#include<stdio.h>

main()

{
	int catetoop,catetoadj,hipotenusa;
	
	printf("\ndigite o valor do cateto oposto: ");
		scanf("%d",&catetoop);
	printf("\ndigite o valor do cateto adjacente: ");
		scanf("%d",&catetoadj);
	
	hipotenusa=(catetoop*2)+(catetoadj*2);
	
	printf("\na hipotenusa do seu triangulo sera de %d:",hipotenusa);
	
	printf("\n\n\n");
	
	
}
