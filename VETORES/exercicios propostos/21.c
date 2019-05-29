include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()


{
 setlocale(LC_ALL,"Portuguese");
  
  int i,vet1[11],vet2[11];
  
  for (i = 1;i <= 10;i++)
  {
      printf("digite o %d número: ",i);
      scanf("%d",&vet1[i]);
  } 
  
  system("cls");
   
   printf("\n\nos os numeros digitados no primeiro vetor são: \n");
   
   for (i = 1;i <= 10;i++)       printf("\n %d",vet1[i]);
   
   printf("\n\nos números nulo do primeiro foram somados com 1");
   
   for (i = 1;i <= 10;i++)
    {
        if (vet1[i] == 0)
        {
        vet2[11] = vet1[i] + 1;
        printf("\n %d",vet2[11]);
        }
        }

printf("\n\n\n\n\n\n\n\n\n");
   
   
 system("pause");  
}
