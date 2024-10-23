#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num, i = 1, soma = 0;
    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("numero invalido!!\n");
        }
        
    } while (num <= 0);

    printf("A soma dos numeros divisores de %d e: ", num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0) {
            soma += i;
            if (i == 1) {
                printf("%d", i);
            } else {
                printf(" + %d", i);
            }
        }
    }
    
    printf(" = %d\n", soma);
    return 0;
}