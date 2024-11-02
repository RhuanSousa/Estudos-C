#include <stdio.h>
#include <string.h>

int main(void) {

    int vetor[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 6; i++)
    {
        printf("\n%d", vetor[i]);
    }
    return 0;
}