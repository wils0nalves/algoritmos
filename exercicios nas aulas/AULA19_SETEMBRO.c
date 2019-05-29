#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      setlocale(LC_ALL,"Portuguese");
      char sexo;
      
      printf("\n\nqual o seu sexo? \n");
      printf("\n1 - (M)MASCULINO");
      printf("\n2 - (F)FEMININO ");
       scanf(" %c",&sexo);
      
      if(sexo=='m' || sexo=='M')
      {
      printf("\nSEXO MASCULINO",sexo);
      printf("\n\n");
                   }else
      if(sexo=='f' || sexo=='F')
      {
      printf("\nSEXO FEMIINO",sexo);
      printf("\n\n");
      }else
      printf("\n\nO SEXO E INVALIDO: ");
      
      
      
      
      
      
      
      system("pause");
      }
