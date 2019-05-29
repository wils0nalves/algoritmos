#include<stdio.h>
#include<stdlib.h>

main()

{
      int n,i,tabuada;
      
      printf("digite o numero da tabuada: ");
      scanf("%d",&n);
      
      i = 0;
      
      while(i <= 10)
      {
              i++;
              tabuada = i * n;
              
              printf("\n %d x %d = %d",i,n,tabuada);
              }
              
      
      
      system("pause");
      }
