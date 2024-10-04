#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("Codigo da letra: %d\n", letra);

    system("pause");
    return 0;
}