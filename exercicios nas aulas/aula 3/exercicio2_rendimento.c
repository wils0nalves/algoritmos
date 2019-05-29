#include<stdio.h>
#include<stdlib.h>


main()

{
      float deposito,taxajuros,rendimento,totalrendimento,final;
      
      printf("\n\t\t===calculando juros de um deposito===\n\n");
      
      printf("\ndigite o valor do deposito: ");
                     scanf("%f",&deposito);
      printf("\ndigite o valor dos juros: ");
                     scanf("%f",&taxajuros);

      rendimento=(deposito*taxajuros)/100;
      printf("\nseu rendimento sera de ao mes %4.1f\n",rendimento);
      printf("\n");
      
      final=rendimento+deposito;
      
      printf("ao todo sera: %4.1f\n",final);
      printf("\n\n\n\n\n");
      
      
      system("pause");
      
      
}
