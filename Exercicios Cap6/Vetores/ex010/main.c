#include <stdio.h>

int main(void) {

    int vetor[100];
    int i = 0, incrementa = 1;

    for (i = 0; i < 100;)
    {
        if (incrementa % 7 != 0)
        {
            vetor[i] = incrementa;
            i++;
        }
        incrementa++;
    }

    for (i = 0; i < 100; i++)
    {
        printf("\n%d", vetor[i]);
    }
    
    

    return 0;
}