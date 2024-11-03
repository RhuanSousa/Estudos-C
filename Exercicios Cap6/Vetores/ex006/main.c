#include <stdio.h>

int main(void) {
    int vetor[10];
    int i, vezes=0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vezes++;
        }
    }
    
    printf("\nForam encontrados %d valores pares dentro do vetor", vezes);
    
    

    return 0;
}