//faça um programa que mostre o menu de opções a seguir,receba a opcao do usuário e os dados necessarios para exercutar cada operação

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      setlocale(LC_ALL,"Portuguese");
      int opcao;
      float n1,n2,soma,produto,subtracao;
      
      printf("\n\t\t\t*******Menu interativo**********\n");
      printf("\n\nDigite o primeiro número: ");
                       scanf("%f",&n1);
      printf("\nDigite o segundo número: ");
                       scanf("%f",&n2);
                       
                       system("cls");
                       
      printf("\nDigite a opção desejada: ");              
      printf("\n1 - soma dos dois números ");
      printf("\n2 - o produto ");
      printf("\n3 - a subtração maior pelo menor ");
                  scanf("%d",&opcao);

                  if (opcao==1)
                  {
                       soma=n1+n2;
                       printf("\na soma dos dois números será igual a: %4.1f ",soma);
                       printf("\n\n\n\n\n\n\n");        
                               }       
                  
                   if (opcao==2)
                   {
                                produto=n1*n2;
                                printf("\no produto será equivalente a: %4.1f ",produto);
                                printf("\n\n\n\n");
                                }
                   if(opcao==3)
                   {
                               if (n1>n2)
                               {
                               subtracao=n1-n2;
                               printf("\no subtracao será igual a: %4.1f ",subtracao);
                               printf("\n\n\n\n\n");  
                               }
                               else
                               
                               if(n2>n1)
                               {
                               subtracao=n2-n1;
                               printf("\no subtracao será igual a: %4.1f ",subtracao);
                               printf("\n\n\n\n\n"); 
                               }
                               }
                               
                               
                       
      
      
      system("pause");
      }
