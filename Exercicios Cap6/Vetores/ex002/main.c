#include <stdio.h>

int main(void) {

    int vetor[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores digitado em ordem inversa: ");

    for (i = 5; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}