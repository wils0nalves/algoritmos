#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      
      setlocale(LC_ALL,"Portuguese");
      int n1,n2,n3,n4;
      
      
      printf("\t\t\t***digite os 3 primeiros n�meros em ordem crescente***\n\n");
      
      printf("digite o primeiro n�mero: ");
                     scanf("%d",&n1);
                     system("cls");
      printf("\ndigite o segundo n�mero: ");
                     scanf("%d",&n2);
                     system("cls");
      printf("\ndigite o terceiro n�mero: ");
                     scanf("%d",&n3);
                     system("cls");
      printf("\ndigite o quarto n�mero: ");
                     scanf("%d",&n4);
                     system("cls");
      
            	        if (n1>n4)
      {
                printf("\na sequencia de numeros em ordem decrescente ser� de %d , %d , %d , %d \n\n",n3,n2,n1,n4);
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
                          	printf("erro! voc� n�o digitou o numero na ordem certa");
                          	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
						  }
                          
                          system("pause");    
                
      }
