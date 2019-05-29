#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{

setlocale(LC_ALL,"Portuguese");

int r,i,maior = 0,menor = 0,idade;

do{

for( i=1; i<=10; i++)
{
	printf("DIGITE SUA IDADE: ");
	scanf("%d",&idade);
	printf("\n");

if (idade >= 18)

	maior++;

if (idade < 18)

menor++;

}

printf("%d PESSOAS SÃO MAIORES DE IDADE. \n",maior);
printf("%d PESSOAS SÃO MENORES DE IDADE. \n",menor);

printf("\n\n\n\n\n");
printf("Digite 1 para reiniciar e 0 para parar \n");
scanf("%d",&r);

system("cls");

}
while (r == 1);


return 0;
}
