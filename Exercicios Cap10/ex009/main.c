#include <stdio.h>

void funcao(int *v) {
    int *ptr = v;
    int i = 0;

    while (i < 5)
    {
        printf("numero da posicao %d do vetor: %d\n", i, *ptr);
        i++;
        ptr++;
    }
    

}

int main(void) {
    int vetor[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    funcao(vetor);

    return 0;
}