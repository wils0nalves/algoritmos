
#include<stdio.h>
#include<stdlib.h>

main()

{
      float salbase,salreceber,gratificacao,imposto;
      
      printf("\n\t===calculando seu salario com imposto de 10 por cento===\n\n");
      printf("\ndigite seu salario base: ");
                     scanf("%f",&salbase);
      
      gratificacao=50;
      imposto=salbase*0.10;
      
      salreceber=salbase+gratificacao-imposto;
            
      printf("\nvoce recebera %4.2f : ",salreceber);
      
      printf("\n\n\n");
      
      system("pause");

  }
