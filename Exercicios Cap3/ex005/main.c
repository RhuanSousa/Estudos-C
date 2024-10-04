#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int idade;

    printf("Este ano voce fez ou faz quantos anos? ");
    scanf("%i", &idade);

    printf("O ano em que voce nasceu foi: %i\n", 2024 - idade);

    system("pause");
    return 0;
}