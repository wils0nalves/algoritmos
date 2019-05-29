#include<stdio.h>
#include<stdlib.h>

main()

{
	
	float basemaior,basemenor,altura,areatrapezio;
	
	printf("\ndigite o valor de sua base maior: ");
		scanf("%f",&basemaior);
	printf("\ndigite o valor de sua base menor: ");
		scanf("%f",&basemenor);
	printf("\ndigite o valor da altura: ");
		scanf("%f",&altura);
	
	areatrapezio=((basemaior+basemenor)*altura)/2;
		
	printf("\na area do seu trapezio aquivale a: %4.1f",areatrapezio);
	printf("\n\n\n\n");
	
	system("pause");
	
	
}
