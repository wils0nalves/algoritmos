#include<stdio.h>
#include<stdlib.h>

main()

{
      char nome[5][20];
      int fitas[5],gratis[5],i;
      
      for (i = 1;i <= 4; i++)
      {
          printf("digite o seu nome: ");
          scanf("%s",&nome[i]);
          printf("quantas fitas voce alugou em 1999? ");
          scanf("%d",&fitas[i]);          
          printf("\n");
      }
      
      for (i = 1;i <= 4; i++)
      {
          if(fitas[i] >= 10)
          {
                      gratis[i] = fitas[i]/10;
                      printf("\n%s voce tem direito a %d",nome[i],gratis[i]);
                      }
                      else
                      if(fitas[i] < 10)
                      printf("\n%s voce não tem direito a locacao gratis! ",nome[i],gratis[i]);
                      
      }
      
      
      printf("\n\n\n\n");
      system("pause");
      }
      
