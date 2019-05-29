#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      setlocale(LC_ALL,"Portuguese");
      
      float altura,peso,i,mediaidade;
      int idade,idade50 = 0,idade10 = 0,porc;
      
      for (i = 0; i <= 3; i++)
      {
       printf("\nDIGITE A SUA IDADE: ");
       scanf("%d",&idade);
       printf("\nDIGITE O SEU PESO: ");
       scanf("%f",&peso);
       printf("\nDIGITE A SUA ALTURA: ");
       scanf("%f",&altura);

       if (idade >= 50)
       {
       idade50++;
       printf("\n");
                 }
                 if (idade >=10 && idade <=20)
                 {
                           idade10++;
                           mediaidade = ((altura*altura)/idade10);
                           }
                           if (peso < 40)
                           
							porc = (peso/100);
		                                    
          }
      
      printf("\nSÃO %d PESSOAS MAIORES DE 50 ANOS! \n",idade50);
      printf("\n A MEDIA DA ALTURA DAS PESSOAS ENTRE 10 A 20 PESSOAS É DE: %4.1f \n",mediaidade);
      printf("\n A PORCENTAGEM DE PESSOAS COM PESO INFERIOR A 40 KIlOS SERÁ DE %d ",porc);
      
      
      printf("\n\n\n\n");
      
      
      system("pause");
      }
      
      
