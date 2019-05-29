#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
      setlocale(LC_ALL,"Portuguese");
    
    int i,idade,mediaidade,cont = 0,r;
    
    do{
    
    for (i = 1; i <= 10; i++)
    {
    	printf("\ndigite a sua idade %d : ",i);
    	scanf("%d",&idade);
		
		 mediaidade= ((idade*idade)/i);	
	}
    
    printf("\nA MEDIA DESSAS 10 IDADES SERÁ: %d ",mediaidade);
    
    printf("\n\n\n\n");
    
    printf("digite 1 para começar o programa de novo de 0 para parar: ");
    scanf("%d",&r);
    
    system("cls");
}
while(r == 1);
    
 system("pause");   
}
