#include<stdlib.h>
#include<stdio.h>
#include<conio.h> //para adicioar o comando getch


int main(void)

{
int vetor = [5];
int x, i;
	printf("digite 5 numeros: \n");
	for (i = 0; i < 5; i++) //este laco faz o scan de cada vetor
	{
		scanf("%d", &vetor[i] );
	}

i = 1;

x = vetor[0];
	while (i < 5) //este laco compara cada elemento do vetor
	{
		if (vetor[i] > x)
		{
			x = vetor[i];
		}
	}
	printf("\n o maior numero que voce digitou foi %d \n",x);

gech();

return 0;
		
system("pause");	
}

