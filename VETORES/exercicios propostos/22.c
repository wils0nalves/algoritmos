#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()


{
 setlocale(LC_ALL,"Portuguese");
  
 int i,vet[11],vet2[11];
 
     for (i = 1;i <= 10;i++)
     {
         printf("digite o %d número: ",i);
         scanf("%d",&vet[i]);
     }
     
     for (i = 1;i <= 10;i++)
     {                      
         if(vet[i] >= 1) 
         {
         printf("\n %d",vet[i]);
         }
     }
  
  
  
  printf("\n\n\n\n\n");
  
 system("pause"); 
}
