#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      setlocale(LC_ALL,"Portuguese");
      
      int n,i,final = 0,r;
      
      do{
	  
      printf("\t\t\tDigite um numero 10 vezes seguidas para que seja mostrado apenas os que estão entre 90 e 30 \n\n\n");
      
      for (i = 1; i <= 10; i++)
      {
      	printf("\ndigite um número %d : ",i);
      	scanf("%d",&n);
      	  
	  if (n >= 30 && n <= 90)
      	
      		final++;
		  
	  }
	  
      
      printf("\nFORAM DIGITADOS %d NÚMEROS ENTRE 30 E 90!!",final);
      
      printf("\n\n");
      
      printf("digite 1 para começar de novo e 0 para parar o programa: ");
      scanf("%d",&r);
      
      system("cls");
      system("color F0");
  }
  while(r == 1);
   system("pause");   
  }
