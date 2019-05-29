//faça um programa que imprima todos os numeros de 100 até 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){

int i,r;

do{

for( i=100; i>=1; i--)
{

printf("%d \n",i);

}


printf("\ndigite 1 para continuar 0 para parar: ");
scanf("%d",&r);

printf("\n\n\n\n");

system("cls");
system("color D0");
}
while(r == 1);


system("pause");
}
