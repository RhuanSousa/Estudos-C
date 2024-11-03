#include <stdio.h>

int main(void) {
    int vetor[8]; 
    int i, x, y, soma=0;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite duas posicoes que deseja consultar de [0 a 7]\n");
    scanf("%d%d", &x, &y);
    if ((x > 7 || y > 7) || (x < 0 || y < 0))
    {
        printf("Numero invalido!!");
        return 0;
    }

    soma = vetor[x] + vetor[y];
    
    printf("Soma dos valores das posicoes consultadas: %d", soma);

    return 0;
}