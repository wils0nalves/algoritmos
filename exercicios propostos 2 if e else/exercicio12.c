#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{

setlocale(LC_ALL,"Portuguese");
float sal,porc,novosal,salariofinal;

printf("digite o sal�rio do fucion�rio: ");
	scanf("%f",&sal);

		if (sal<=350)
{
	novosal=(sal-(sal*0.07))+100; 
	
	printf("\no seu sal�rio com a graticaca��o ser� de: %4.1f ",novosal);
	printf("\n\n\n");
}
		if(sal>350 && sal<=600)
	{
	novosal=(sal-(sal*0.07))+75;
	printf("\nseu sal�rio com a gratifica��o ser� de: %4.1f ",novosal);
	printf("\n\n\n");
}
		if(sal>600 && sal<900)
	{
	novosal=(sal-(sal*0.07))+60;
	printf("\nseu salario com a gratifica��o ser� de: %4.1f ",novosal);
	printf("\n\n\n");
}
		if(sal>=900)
	{
	novosal=(sal-(sal*0.07))+35;
	printf("\nseu sal�rio com a gratifica��o ser� de: %4.1f ",novosal);
	printf("\n\n\n");
	}
	

system("pause");

}
