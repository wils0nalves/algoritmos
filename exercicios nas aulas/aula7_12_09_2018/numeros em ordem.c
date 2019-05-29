#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      
      setlocale(LC_ALL,"Portuguese");
      int n1,n2,n3,n4;
      
      
      printf("\t\t\t***digite os 3 primeiros números em ordem crescente***\n\n");
      
      printf("digite o primeiro número: ");
                     scanf("%d",&n1);
                     system("cls");
      printf("\ndigite o segundo número: ");
                     scanf("%d",&n2);
                     system("cls");
      printf("\ndigite o terceiro número: ");
                     scanf("%d",&n3);
                     system("cls");
      printf("\ndigite o quarto número: ");
                     scanf("%d",&n4);
                     system("cls");
      
            	        if (n1>n4)
      {
                printf("\na sequencia de numeros em ordem decrescente será de %d , %d , %d , %d \n\n",n3,n2,n1,n4);
                printf("\n\n\n");
                }
                          if (n4>n1)
                          {
                          printf("\na sequencia dos numeros em ordem decrescente sera de %d , %d , %d , %d \n\n",n4,n3,n2,n1);
                          printf("\n\n\n");
                          }
                          
                          if (n1>n2&&n2>n3)
                          {
                          	system("cls");
                          	printf("erro! você não digitou o numero na ordem certa");
                          	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
						  }
                          
                          system("pause");    
                
      }
