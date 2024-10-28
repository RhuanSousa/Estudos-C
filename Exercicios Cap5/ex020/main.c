#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num, i, fatorial = 1, j;
    float E = 0.0;
    do
    {
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &num);
        if (num <= 0)
        {
            printf("\nNumero Invalido!!\n");
        }
    } while (num <= 0);

    for (i = 0; i <= num; i++)
    {   
        for (j = 1; j < i; j++)
        {
            fatorial *= j;
            E += 1 / fatorial;
        }
    }

    printf("E = %f", E);
    return 0;
}