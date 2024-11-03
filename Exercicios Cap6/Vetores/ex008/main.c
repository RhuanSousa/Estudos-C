#include <stdio.h>

int main(void) {
    float vetor[10];
    int i, negativo = 0;
    float soma = 0.0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            negativo++;
        } else {
            soma += vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d", negativo);
    printf("\nSoma dos valores positivos: %.2f", soma);
    
    




    return 0;
}