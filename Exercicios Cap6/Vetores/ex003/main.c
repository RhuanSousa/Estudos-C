#include <stdio.h>

int main(void) {
    int vetor[5];
    int i;
    float soma = 0.0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("\nValores digitados: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\nSoma dos valores: %.2f", soma);

    printf("\nMedia valores digitados: %.2f", soma/5);


    return 0;
}