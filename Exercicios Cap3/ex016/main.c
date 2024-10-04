#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num;

    printf("digite um numero: ");
    scanf("%i", &num);

    printf("Multiplicacao: %i\n", num << 1);
    printf("Divisao: %i\n", num >> 1);

    system("pause");
    return 0;
}