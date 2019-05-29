#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()


{
 setlocale(LC_ALL,"Portuguese");      
   
      int vet[5]; 
	  int positivo,i;
      
      for (i = 0; i <= 4;i++)
      {
          printf("\ndigite o %d número: ",i+1);
          scanf("%d",&vet[i]);
      }
      
      printf("\nos números positivos digitados são: ");
      
      for (i = 0; i <= 4;i++)
      {
                if(vet[i] % 2 ==0)
      			
                printf("%d ",vet[i]);
        }
        
        printf("\nos números negativos digitados são: ");
        
        for (i = 0; i <= 4;i++)
        {
        	if(vet[i] % 2 != 0)
        	
        	printf("%d ",vet[i]);
		}
        
        printf("\n\n\n\n\n\n");
          
      
      
      
      system("pause");
      }
