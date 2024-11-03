#include <stdio.h>

int main(void) {
    int x[10];
    int maior = 0, menor = 0, i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            maior = x[i];
            menor = x[i];
        }

        if (x[i] > maior)
        {
            maior = x[i];
        }

        if (x[i] < menor)
        {
            menor = x[i];
        }
        
        
    }
    
    printf("O maior valor digitado foi %d e o menor foi %d", maior, menor);
    

    return 0;
}