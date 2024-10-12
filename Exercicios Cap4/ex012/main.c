#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num;

    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Dia da semana: Domingo\n");
        break;
    case 2:
        printf("Dia da semana: Segunda-Feira\n");
        break;
    case 3:
        printf("Dia da semana: Terca-Feira\n");
        break;
    case 4:
        printf("Dia da semana: Quarta-Feira\n");
        break;
    case 5:
        printf("Dia da semana: Quinta-Feira\n");
        break;
    case 6:
        printf("Dia da semana: Sexta-Feira\n");
        break;
    case 7:
        printf("Dia da semana: Sabado\n");
        break;
    default:
        printf("Numero nao esta entre 1 e 7\n");
        break;
    }

    system("pause");
    return 0;
}