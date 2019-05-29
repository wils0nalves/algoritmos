#include<stdlib.h>
#include<stdio.h>
//faca um programa que receba dois numero inteiros.mostre o maior numero entre eles
main()

{
      
      int numero1,numero2,final1,final2;
      
      printf("digite o primeiro numero: ");
      scanf("%d",&numero1);
      
      printf("\ndigite o segundo numero: ");
      scanf("%d",&numero2);
      
      if (numero1>numero2)
      
      {
                          printf("\no maior numero sera: %d\n",numero1);
                          printf("\n\n\n");
                          }
      
      if (numero2>numero1)

      {
                          printf("\no maior numero sera: %d\n",numero2);
                          printf("\n\n\n");
                          }
                         
      if (numero2==numero1) {
      printf("\n\n\n\n\n\t\t\tNao pode digitar numeros iguais!!!\n\n\n\n\n\n\n");
      }
      
      system("pause");
                  
      }
