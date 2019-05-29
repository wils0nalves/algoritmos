//faca um programa que receba duas notas,calcule e mostre a media e a mensagem que esta na tabela a seguir

#include<stdio.h>
#include<stdlib.h>

main()

{
      
      float nota1,nota2,mediafinal,media1,media2,media3,final;
      
      printf("digite a primeira nota: ");
                     scanf("%f",&nota1);
      printf("\ndigite a segunda nota: ");
                     scanf("%f",&nota2);
      
      mediafinal=(nota1+nota2)/2;
      
                                 if(mediafinal>0 && mediafinal<4)
                                 {
                                                          
                                                       printf("\n\t\t\t\trecuperacao!!!");
                                                       printf("\n\n\n\n\n\n\n\n");
                                                       }
                                                       if(mediafinal>4&&mediafinal<7)
                                                                             {
                                                                             printf("\n\t\t\t\trecuperacao!!!");
                                                                             printf("\n\n\n\n\n\n\n\n");
                                                                                              }
                                                                                              if (mediafinal>7&&mediafinal<10)
                                                                                                 {
                                                                                                                      printf("\n\t\t\t\taprovado!!!"); 
                                                                                                                      printf("\n\n\n\n\n\n\n");
                                                                                                                      }
                                                                                                                      
system("pause");
                                                       
      
      }
