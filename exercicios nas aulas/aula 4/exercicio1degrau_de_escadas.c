//cada degrau de uma escada tem "x" de altura. faca um programa que receba essa altura e a altura que o usuario deseja alcancar subindo a escada.
//calcule e mostre quantos degraus o usuario devera subir para atingir seu objetivo,sem se preocupar com a altura do usuario.

#include<stdio.h>
#include<stdlib.h>

main()

{
      float escada,degrau,altura,final;
      
      
      
      printf("\ndigite a altura que voce deseja alcancar: ");
      scanf("%f",&altura);
      printf("\ndigite a altura do degrau da escada: ");
      scanf("%f",&degrau);
      
      final=altura/degrau;
      
      printf("\nvoce tera que subir %4.1f ",final);
      printf("andares");
      
      printf("\n\n\n");
      
      system("pause");
      
 
 }
