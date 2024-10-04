#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {

    char letra_maius, letra_minus;

    printf("Digite um letra maiuscula: ");
    scanf("%c", &letra_maius);

    letra_minus = letra_maius + 32;

    printf("letra minuscula: %c\n", letra_minus);


    system("pause");
    return 0;
}