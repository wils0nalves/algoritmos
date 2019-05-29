#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int idade, i, contador = 0, grupo = 0, mulheres = 0, homens = 0, pessoas1 = 0, pessoas2 = 0, pessoas3 = 0;
    char sexo;
    float media_grupo, media_mulheres, media_homens;

    for(i=1; i<=7; i++)
    {
        contador++;

        printf("DIGITE O SEXO DA %d PESSOA ( M ) MASCULINO E ( F ) FEMININO: ", contador);
        scanf(" %c", &sexo);

        printf("DIGITE A IDADE DA %d PESSOA: ", contador);
        scanf("%d", &idade);
        printf("\n");

        sexo = toupper(sexo);

        if( sexo == 'F' || sexo == 'M' )
        {
            pessoas1++;
            grupo += idade;
        }

        if( sexo == 'F' )
        {
            pessoas2++;
            mulheres += idade;
        }

        if( sexo == 'M' )
        {
            pessoas3++;
            homens += idade;
        }
    }

    media_grupo = grupo/pessoas1;
    media_mulheres = mulheres/pessoas2;
    media_homens = homens/pessoas3;

    printf("\n\nA MÉDIA DE IDADE DO GRUPO É DE %.2f\n", media_grupo);
    printf("A MÉDIA DE IDADE DAS MULHERES É DE %.2f\n", media_mulheres);
    printf("A MÉDIA DE IDADE DOS HOMENS É DE %.2f\n\n", media_homens);

    system("pause");
}
