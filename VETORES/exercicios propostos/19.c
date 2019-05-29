#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()


{
 setlocale(LC_ALL,"Portuguese");
   
      int vet1[10],vet2[10],vet3[10],i;
      
            printf("\n\n\t\tdigite abaixo a primeiro sequência de números");
            printf("\n");
      
      for (i = 0; i <= 4;i++)
      {
          printf("\ndigite o %d número: ",i+1);
          scanf("%d",&vet1[i]);
      }
      
      printf("\n\n\t\tagora digite a segunda sequência de números");
      
      for (i = 0; i <= 4;i++)
      {
          printf("\ndigite o %d número: ",i+1);
          scanf("%d",&vet2[i]);
      }
          
      for (i = 0; i <= 4;i++)
      {
       vet3[10] = vet1[i]*vet2[i];
       printf("\n %d x %d = %d",vet1[i],vet2[i],vet3[10]);
       }
      printf("\n\n\n\n\n\n\n\n");
      system("pause");
      }
