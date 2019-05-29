#include<stdio.h>
#include<stdlib.h>

main()

{
	
	float peso,engordar,emagrecer;
	
	printf("\nqual o seu peso atual? ");
		scanf("%f",&peso);
	
	engordar= peso+(peso*0.15);
	emagrecer= peso-(peso*0.20);
	
	printf("\ncaso engorde seu peso sera de: %4.1f",engordar);
	printf("\ncaso emagreca seu peso sera de: %4.1f",emagrecer);
	
	printf("\n\n\n\n");
	
	system("pause");
	
}
