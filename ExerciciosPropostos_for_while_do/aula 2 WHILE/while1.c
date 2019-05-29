#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{

setlocale(LC_ALL,"Portuguese");

int r,num,quad;

do
{

printf("digite uma sequencia terminada por zero\n");
scanf("%d",&num);
while(num != 0)
{
          quad=num*num;
          printf("o quadrado de %d = %d \n",num,quad);
          break;
          }
          
          
          printf("\n\n\n\n\n\n\n\n");
 

printf("\n\ndigite 1 para reiniciar e 0 para parar\n\n");
scanf("%d",&r);
system("cls");
}
while(r==1);          
          
          return 0;
}          
