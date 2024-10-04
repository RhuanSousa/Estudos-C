#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int dia, mes, ano;

    printf("Digite o valor do dia, mes e ano\n");
    scanf("%d%d%d", &dia, &mes, &ano);

    printf("Data digitada: %d/%d/%d\n", dia, mes, ano );

    system("pause");
    return 0;
}