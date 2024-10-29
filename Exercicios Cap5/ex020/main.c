#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num, i, fatorial = 1, j;
    float E = 0;

    do
    {
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &num);
        if (num <= 0)
        {
            printf("\nNumero Invalido!!\n");
        }
    } while (num <= 0);

    for (j = 1; j <= num; j++)
    {   
        fatorial = 1;
        for (i = 1; i <= j; i++)
        {   
            fatorial *= i;
        }
        E += 1.0/fatorial;
    }

    printf("Valor de E: %.4f", E);
    
    return 0;
}