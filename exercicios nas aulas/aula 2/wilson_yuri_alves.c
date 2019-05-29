 #include<stdio.h>
#include<stdlib.h>

main()

{
      
      float salbase,salfinal,imposto,gratificacao;
      
      
      printf("digite seu salario base: ");
      scanf("%f",&salbase);
      imposto=salbase*0.07;
      gratificacao=salbase*0.05;
      salfinal=salbase+gratificacao-imposto;
      printf("\n a gratificacao e: %4.2f ",gratificacao);
      printf("\n o imposto e: %4.2f ",imposto);
      printf("\n o salario final e: %4.2f ",salfinal);
      system("pause");
      }
      
      
      
