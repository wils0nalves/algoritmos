//fa�a um programa que mostre o menu de op��es a seguir,receba a opcao do usu�rio e os dados necessarios para exercutar cada opera��o

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      setlocale(LC_ALL,"Portuguese");
      int opcao;
      float n1,n2,soma,produto,subtracao;
      
      printf("\n\t\t\t*******Menu interativo**********\n");
      printf("\n\nDigite o primeiro n�mero: ");
                       scanf("%f",&n1);
      printf("\nDigite o segundo n�mero: ");
                       scanf("%f",&n2);
                       
                       system("cls");
                       
      printf("\nDigite a op��o desejada: ");              
      printf("\n1 - soma dos dois n�meros ");
      printf("\n2 - o produto ");
      printf("\n3 - a subtra��o maior pelo menor ");
                  scanf("%d",&opcao);

                  if (opcao==1)
                  {
                       soma=n1+n2;
                       printf("\na soma dos dois n�meros ser� igual a: %4.1f ",soma);
                       printf("\n\n\n\n\n\n\n");        
                               }       
                  
                   if (opcao==2)
                   {
                                produto=n1*n2;
                                printf("\no produto ser� equivalente a: %4.1f ",produto);
                                printf("\n\n\n\n");
                                }
                   if(opcao==3)
                   {
                               if (n1>n2)
                               {
                               subtracao=n1-n2;
                               printf("\no subtracao ser� igual a: %4.1f ",subtracao);
                               printf("\n\n\n\n\n");  
                               }
                               else
                               
                               if(n2>n1)
                               {
                               subtracao=n2-n1;
                               printf("\no subtracao ser� igual a: %4.1f ",subtracao);
                               printf("\n\n\n\n\n"); 
                               }
                               }
                               
                               
                       
      
      
      system("pause");
      }
