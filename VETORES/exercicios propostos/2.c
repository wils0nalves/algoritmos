#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)

{
    setlocale(LC_ALL,"Portuguese");
    
    int vet[8];
    int multiplo2,multiplo3,multiplo23,i;
    
    for (i = 0; i <= 6; i++)
    {
        printf("\nDIGITE O %d N�MERO: ",i+1);
        scanf("%d",&vet[i]);
     }
     for (i = 0; i <= 6; i++)
     {
    	if(vet[i] % 2 == 0)
     
     printf("\nOS M�LTIPLOS DE 2 S�O: %d ",vet[i]); 
	 
	 }
    
    for (i = 0; i <= 6; i++)
     {
    	if(vet[i] % 3 == 0)
    	
    printf("\nOS M�LTIPLOS DE 3 S�O: %d ",vet[i]); 
	
	}
	
	for (i = 0; i <= 6; i++)
	{
		if (vet[i] % 2 == 0)
		if (vet[i] % 3 == 0)
		
	printf("\n OS M�LTIPLOS DE 2 E 3 S�O %d ",vet[i]);
		
	}
	
	printf("\n\n\nSKRRRRTTTTT!!!!");
	
	
	printf("\n\n\n\n");
	
 system("pause");   
}
