//faça um programa que receba o nome do aluno,duas notas. calcule e mostre a media e o nome do aluno
#include<stdio.h>
#include<stdlib.h>
main()
{
      //definicao de variaveis
      
      float n1,n2,media;
      char nome[30]; //vetor de string ou quantidade de caracteres
      
      //entrada de dados
      
      printf("\n digite o nome do aluno: ");
      scanf("%s",&nome);
      printf("\n digite a nota 1: ");
      scanf("%f",&n1);
      printf("\n digite a nota 2: ");
      scanf("%f",&n2);
      media=(n1+n2)/2;
      
      //exibicao de dados
      
      printf("o aluno %s ",nome);
      printf("tem a media %4.2f ",media);
      system("pause");
      }
      
      
      
      
       
