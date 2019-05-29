#include<stdio.h>
#include<stdlib.h>
#include<time.h> //hora

main()

{
      int i,r,numerosorteado;
      do
      {
          system("cls");
          system("color F0");
      srand(time(NULL)); //calcula a hora atual como uma semente para geração de randômico
      
      for (i = 1; i <= 5; i++)
      {
          numerosorteado = rand() %60;
      
      printf("numero %d : %d \n",i,numerosorteado);
      }
      printf("\n\n\n\n");
      
      
                         printf("digite 1 para reiniciar o sorteio e 0 para parar: ");
                         scanf("%d",&r);
     }
      while(r==1);
      
      system("pause");
      }
      
