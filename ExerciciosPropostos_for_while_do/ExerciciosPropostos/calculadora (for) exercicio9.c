#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	int calculo,contador,calculofinal,r;
	
	do{
	
	
	printf("\t\t\t------------CALCULADORA COM LA�O DE REPETI��O FOR------------\n\n");
	
	printf("digite o n�mero que deseja calcular: ");
	scanf("%d",&calculo);
	
	printf("\no resultado ser�: \n");
	
	for (contador = 0; contador <=10; contador++)
	{
		calculofinal=(calculo*contador);
		printf("%d x %d : %d \n ",calculo,contador,calculofinal);
	}
	
	printf("\n\n\n");
	printf("digite 1 para fazer um novo c�lculo ou 0 para fechar o programa:");
	scanf("%d",&r);
	
	system("cls");
	system("color F0");
	
	printf("\n\n\n\n");
}
while(r==1);
	
system("pause");	
}
