#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char caracter[2];

    printf("Digite um caractere: ");
    scanf("%s", caracter);

    printf("\"%s\"\n", caracter);

    system("pause");
    return 0;
}