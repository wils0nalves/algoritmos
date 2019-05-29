#include<stdio.h>
#include<stdlib.h>

main()

{
      int r,n,i,tabuada;
      
      system("color D7");
      
      do
      {
      printf("\n\ndigite o numero da tabuada: ");
      scanf("%d",&n);
      
      i = 0;
      
      for(i = 0; i <= 10; i++)
      {
              tabuada = i * n;
              
              printf("\n %d x %d = %d",i,n,tabuada);
              
              }
               printf("\n\n\ndigite 1 para reiniciar o sorteio e 0 para parar: ");
               scanf("%d",&r);
               
               system("cls");
               
      }
      while(r==1);
      
      system("pause");
      }
