#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int v1, v2;

    printf("Digite 2 valores inteiros: ");
    scanf("%i %i", &v1, &v2);

    printf("Deslocamento para direita:  %i\n", v1 >> v2);
    printf("Deslocamento para esquerda: %i\n", v1 << v2);

    system("pause");
    return 0;
}