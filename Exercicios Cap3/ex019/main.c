#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int v1, v2;

    printf("Digite um valor: ");
    scanf("%i", &v1);

    printf("Digite outro valor: ");
    scanf("%i", &v2);

    printf("Resultado operacao OU EXCLUSIVO: %i\n", v1 ^ v2);
    printf("Resultado operacao OU BIT A BIT: %i\n", v1 | v2);
    printf("Resultado operacao OU EXCLUSIVO: %i\n", v1 & v2);

    system("pause");
    return 0;
}