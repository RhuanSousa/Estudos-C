#include <stdio.h>

int main(void) {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0, i;

    soma = A[0] + A[1] + A[5];

    printf("\nSoma: %d", soma);

    A[4] = 100;

    printf("\nValores: ");
    for (i = 0; i < 6; i++)
    {
        printf("\n%d", A[i]);
    }
    

    return 0;
}