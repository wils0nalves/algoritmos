#include <locale.h>
#include<stdio.h>
#include<stdlib.h>

main()

{
      setlocale(LC_ALL, "Portuguese");
      float espetaculo,precoconvite,final;
      
      
      printf("digite o preço do espetáculo: ");
                     scanf("%f",&espetaculo);
                     
      printf("\ndigite o preço do convite do espetaculo: ");
                     scanf("%f",&precoconvite);
      
      final=espetaculo/precoconvite;
      
      printf("\ndeve ser vendido %4.0f ",final);
      printf("convites\n");
      
      printf("\n\n\n\n\n\n\n");
      
      system("pause");
      
      
      
      }
