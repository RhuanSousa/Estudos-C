#include <stdio.h>

void funcao(int *vetor, int valor) {
    int *ptr = vetor;
    int i;

    for (i = 0; i < 4; i++)
    {
        *ptr = valor;
        ptr++;
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", vetor[i]);
    }
    
}

int main(void) {
    int v[4];
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    funcao(v, num);

    return 0;
}