#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Número usando %%f: %d\n", num);

    return 0;
}