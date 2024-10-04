#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i;
    char c;
    float f;

    printf("Digite um caractere, um inteiro e um numero real: ");
    scanf("%c %i %f", &c, &i, &f);

    printf("Separado por espacos: %c %i %.2f\n", c, i, f);

    printf("Separado por tabulacao: %c\t%i\t%.2f\n", c, i, f);

    printf("Um em cada linha: \v%c\v%i\v%.2f\n", c, i, f);

    system("pause");
    return 0;
}