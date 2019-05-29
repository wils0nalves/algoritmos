//faca um programa que calcule e mostre a area de um triangulo
#include<stdlib.h>
#include<stdio.h>

main()

{
      float base,altura,final;
      
      printf("\n\n\t\t\t\t===calculando a area de um triangulo===\n\n\n\n");
      
      printf("digite a base do seu triangulo: ");
      scanf("%f",&base);
      printf("digite a altura do seu triangulo: ");
      scanf("%f",&altura);
      
      final=(base*altura)/altura;
      
      printf("a area do seu triangulo sera de %4.1f: ",final);
      
      printf("\n\n\n");
      
      system("pause");
      
      
      
      }
