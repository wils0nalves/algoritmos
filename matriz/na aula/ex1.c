//faça um programa que carregue uma matriz 2x2,calcule e mostre uma matriz resultante que será a matriz digitada multiplicada pelo maior elemento da matriz

#include<stdio.h>
#include<stdlib.h>


main()

{
      int matriz[2][2],i,j,resultante;
      
      printf("digite o valor do elemento: ");
      
      for ( i=0; i <= 1; i++ )
          for ( j=0; j<=1; j++ )
    {
       printf ("\n\nElemento[%d][%d] = ", i, j);
       scanf ("%d", &matriz[ i ][ j ]);
    }
      
  
 resultante = matriz[0][0];

     for(i=0; i < 1; i++)
              for(j=0; j<1; j++)
{
     if (matriz[i][j] > resultante ){
     resultante = matriz[i][j]*matriz[i][j];
     printf("o resultado sera: %d ",resultante);
         }
     }
      
      system("pause");
      }

