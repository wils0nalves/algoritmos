#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	float sal,valaumento,novosal;
	
	printf("Digite seu sal�rio: ");
		scanf("%f",&sal);
	
		system("cls");
	
		if(sal<=300)
	{
			novosal=sal+(sal*0.15);
			valaumento=novosal-sal;
			printf("\nseu novo sal�rio ser� de: %4.1f ",novosal);
			printf("\ne seu aumento � de: %4.1f ",valaumento);
			printf("\n\n\n\n");
	}
		if(sal>300&&sal<=600)
	{
			novosal=sal+(sal*0.10);
			valaumento=novosal-sal;
			printf("\nseu novo sal�rio ser� de: %4.1f ",novosal);
			printf("\ne seu aumento � de: %4.1f ",valaumento);
			printf("\n\n\n\n");
	}
		if(sal>600&&sal<=900)
	{
			novosal=sal+(sal*0.05);
			valaumento=novosal-sal;
			printf("\nseu novo sal�rio ser� de: %4.1f ",novosal);
			printf("\ne seu aumento � de: %4.1f",valaumento);
			printf("\n\n\n\n");
	}
	if(sal>900)
	
	printf("desculpe mas voc� n�o tem direito a aumento!\n\n\n\n\n\n\n");
	
system("pause");	
}
