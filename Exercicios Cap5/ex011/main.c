#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num, i = 1;
    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("numero invalido!!\n");
        }
        
    } while (num <= 0);

    printf("Numeros divisores de %d: ", num);

    for (i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            printf("%d ", i);
        }
    }
    
    
    printf("\n");
    return 0;
}