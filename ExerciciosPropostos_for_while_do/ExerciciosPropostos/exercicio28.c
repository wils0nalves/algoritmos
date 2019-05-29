#include<stdio.h>
#include<stdlib.h>

main()

{
      float salario,mediasal,mediafilhos,maiorsal,porc;
      int filhos,repeticao,comecardenovo;
      
      do{
      
      for(repeticao = 1; repeticao <= 3; repeticao++){
                    
      printf("\ndigite o seu salario: ");
      scanf("%f",&salario);
      
      printf("\ndigite o numero de filhos: ");
      scanf("%d",&filhos);
      
      mediasal += salario;
      
      mediafilhos += filhos;
      
         
      }   
   
      mediasal=(mediasal/repeticao);
      
      mediafilhos=(mediafilhos/repeticao);
      
      
      
      printf("\na media do salario da populacao e de: %4.1f \n",mediasal);
      
      printf("\na media do numero de filhos sera de: %4.1f \n",mediafilhos);
      
      printf("\ndigite 1 para comecar de novo e 0 para parar o programa: ");
      scanf("%d,&comecardenovo");
      }
      while(comecardenovo == 1);
      
      system("pause");
      }
