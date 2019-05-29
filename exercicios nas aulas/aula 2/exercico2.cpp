//faca um programa que receba o salario de um funcionario e o percentual de aumento,calcule e mostre o valor do aumento e o novo salario

#include<stdio.h>
#include<stdlib.h>
main()

{
      
      float salbase,porc,aumento,novosal;
      
      printf("\n digite o salario base do funcionario: ");
      scanf("%f",&salbase);
        printf("\n digite o percentual de aumento: ");
      scanf("%f",&porc);
      porc=salbase*(porc/100);
      aumento=porc+salbase;
      novosal=porc+aumento;
      printf("\n seu valor de aumento e de: %4.2f",porc);
      printf("\n seu novo salario e de: %4.2f",aumento);
      
      system("pause");
      }
      
      
