#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      setlocale(LC_ALL,"Portuguese");
      
      int idade,i,pessoas90 = 0,mediaidade,contador = 0;
      float peso;
      
      for (i = 0; i <= 3; i++)
      {
      	printf("\ndigite a idade %d :  ",i);
      	scanf("%d",&idade);
      	printf("digite seu peso %d : ",i);
      	scanf("%f",&peso);
      
		if (peso >= 90)
		{
			pessoas90++;
	}
	
		if (idade >= 0)
		{
		contador++;
		mediaidade=((idade*idade)/contador);
	  }
	  }
	  
      printf("\na quantidade de pessoas com peso acima de 90 kilos é de: %d ",pessoas90);
      printf("\na media da idade dessas pessoas é de: %d ",mediaidade);
      
      
      printf("\n\n\n\n");
      
   system("pause");   
  }
