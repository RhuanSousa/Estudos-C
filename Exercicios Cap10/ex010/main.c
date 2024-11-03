#include <stdio.h>

int main(void) {
    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Seu dobro e: %d\n", *b * 2);

    printf("Seu triplo e: %d\n", **c * 3);

    printf("Seu quadruplo e: %d\n", ***d * 4);

    return 0;
}