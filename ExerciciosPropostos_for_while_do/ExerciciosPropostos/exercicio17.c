#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	int grupo3 = 0,idade,mediadogrupo,mediadohomem,mediadamulher,i = 1,mediagrupo = 0,mediamulher = 0,mediahomem = 0,grupo1 = 0,grupo2 = 0;
	char sexo;
	
	
	for (i >= 1; i <= 3; i++)
	{
		printf("\nDIGITE A %d IDADE: ",i);
		scanf("%d",&idade);
		printf("\nDIGITE O %d G�NERO: ",i);
		scanf(" %c",&sexo);
		
		sexo = toupper(sexo);
		
		if (sexo == 'F' || sexo == 'M')
		{
			grupo1++;
			mediagrupo += idade;
		}
		if(sexo == 'M')
		{
			grupo2++;
			mediahomem += idade;
		}
		if(sexo == 'F')
		{
			grupo3++;
			mediamulher += idade;
		}
	}
	
	mediadogrupo = mediagrupo/grupo1;
	mediadohomem = mediahomem/grupo2;
	mediadamulher = mediamulher/grupo3;
	
	printf("\nA IDADE M�DIA DO GRUPO �: %d ",mediadogrupo);
	printf("\nA IDADE M�DIA DO HOMEM �: %d ",mediadohomem);
	printf("\nA IDADE M�DIA DA MULHER �: %d ",mediadamulher);	
	
	printf("\n\n\n");
	
	system("pause");
}
