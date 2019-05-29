//

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{

setlocale(LC_ALL,"Portuguese");

int i,ano_atual;
float salario,novo_sal,perc;

printf("digite o ano atual: ");
scanf("%d",&ano_atual);

salario = 1000;

perc = 0.015/100;

novo_sal = sal+(perc*sal);

for (i = 1997; i <= ano_atual; i++)
{
    perc = 2*perc;
    
    novo_sal = novo_sal+(perc*novo_sal);
}

printf("o novo salário é: %4.1f ",novo_sal);

system("pause");
}
