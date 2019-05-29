#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      setlocale(LC_ALL,"Portuguese");
      float preco,aumento,imposto;
      int categoria;
      char situacao[2];
      
      printf("\nDigite o preço: ");
                       scanf("%f",&preco);
      printf("\nDigite a categoria: ");
                       scanf("%d",&categoria);
      printf("\ndigite a situação R ou N");
                     scanf(" %c",&situacao);
      
                     if(preco<=25 && categoria==1)
                     {
                     aumento=preco+(preco*0.05);
                     printf("o novo preço com aumento de 5 por cento será de: %4.1f ",aumento);
                     printf("\n\n\n");
                     }            
                     if(preco<=25 && categoria==2)
                     {
                     aumento=preco+(preco*0.08);
                     printf("o novo preço com aumento de 8 por cento será de: %4.1f ",aumento);
                     printf("\n\n\n");
                     }  
                     if(preco<=25 && categoria==3)
                     {
                     aumento=preco+(preco*0.10);
                     printf("o novo preço com aumento de 10 por cento será de: %4.1f ",aumento);
                     printf("\n\n\n");
                     }  
                     if(preco>25 && categoria==1)
                     {
                     aumento=preco+(preco*0.12);
                     printf("o novo preço com aumento de 12 por cento será de: %4.1f ",aumento);
                     printf("\n\n\n");
                     }  
                     if(preco>25 && categoria==2)
                     {
                     aumento=preco+(preco*0.15);
                     printf("o novo preço com aumento de 15 por cento será de: %4.1f ",aumento);
                     printf("\n\n\n");
                     }  
                     if(preco>25 && categoria==3)
                     {
                     aumento=preco+(preco*0.18);
                     printf("o novo preço com aumento de 18 por cento será de: %4.1f ",aumento);
                     printf("\n\n\n");
                     }  
      
      
      if(categoria==2&&situacao=='R')
      {
                                 imposto=aumento+(aumento*0.05);
                                 printf()               
      }
      
      
      system("pause");
      }
