#include <stdio.h>

int main(void) {
    int A[10];
    int B[10];
    int C[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d valor para o vetor de A: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d valor para o vetor de B: ", i+1);
        scanf("%d", &B[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        C[i] = A[i] - B[i];
    }

    printf("\nValores do vetor A - B: ");

    for (i = 0; i < 10; i++)
    {
        printf("\n%d - %d = %d", A[i], B[i], C[i]);
    }
    
    


    return 0;
}