 #include<stdio.h>
#include<stdlib.h>

main()

{
      
      float salbase,salfinal,imposto,gratificacao;
      
      
      printf("digite seu salario base: ");
      scanf("%f",&salbase);
      imposto=salbase*(7/100);
      gratifica��o=salbase*(5/100);
      salfinal=salbase+gratificacao-imposto;
      printf("a gratificacao e %4.2f ",gratificacao);
      printf("o imposto e %4.2 ",imposto);
      printf("o salario final � %4,2f",salfinal);
      system("pause");
      }
      
      
      
