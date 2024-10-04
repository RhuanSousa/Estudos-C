#include <stdio.h>
#include <stdlib.h>

int main() {
    float num;

    printf("Digite um numero do tipo float: ");
    scanf("%f", &num);

    printf("Número usando %%d: %d\n", num);

    return 0;
}