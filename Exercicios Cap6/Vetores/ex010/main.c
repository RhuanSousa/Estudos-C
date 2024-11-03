#include <stdio.h>

int main(void) {
    int vetor[100];
    int i;

    for (i = 0; i < 100; i++)
    {
        if (i % 7 != 0)
        {
            vetor[i] = i;
        }
    }

    for (i = 0; i < 100; i++)
    {
        printf("\n%d", vetor[i]);
    }
    
    

    return 0;
}