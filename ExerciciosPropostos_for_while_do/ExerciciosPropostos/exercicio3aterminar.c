#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{

setlocale(LC_ALL,"Portuguese");

int primo,i;

	for (i = 92; i <= 1478;i++)
	
	primo=(i % 1 == 0 || i % i == 0);
	
	printf(" os primos entre 92 e 1478 são: %d \n",primo);
	printf("\n\n\n\n\n\n");



return 0;
}
