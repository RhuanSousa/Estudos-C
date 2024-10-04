#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ano;

    printf("Digite seu ano de nascimento: ");
    scanf("%i", &ano);

    printf("Sua idade e: %i\n", 2024 - ano);

    system("pause");
    return 0;
}