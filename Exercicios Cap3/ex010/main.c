#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float primeiro, segundo, terceiro;

    printf("PREMIO DO CONCURSO: 780.000,00\n");

    primeiro = 780000 * (46.0 / 100);
    segundo = 780000 * (32.0 / 100);
    terceiro = 780000 - (primeiro + segundo);

    printf("PRIMEIRO LUGAR: %.2f\n", primeiro);
    printf("SEGUNDO LUGAR: %.2f\n", segundo);
    printf("TERCEIRO LUGAR: %.2f\n", terceiro);

    system("pause");
    return 0;
}