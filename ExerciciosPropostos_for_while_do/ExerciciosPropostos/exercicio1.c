#include<stdio.h>
#include<stdlib.h>


main()

{
      int i,n,r;
		
		system("color F0");
		      
      do
      {
      
      for (i = 1000; i <= 2000; i++)
      {
      
            if((i % 11) == 5)
            {
            
            printf("numero %d ",i);
            printf("\n"); 
            }
      
      }
      
 printf("\n\ndigite 1 para reiniciar e 0 para parar\n\n");     
 scanf("%d",&r);
 
}
      while(r == 1);
      system("cls");
      system("pause");
      }
