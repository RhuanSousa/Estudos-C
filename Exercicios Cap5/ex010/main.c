#include <stdio.h>
#include <stdlib.h>

#define max_num (10)

int main(void) {
    
    int soma = 0, num, i = 0;

    

    while (i < max_num)
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

        if (num > 0)
        {
            soma += num;
            i++;
        } else {
            printf("Numero invalido!\n");
        }
    }
    
    printf("Media dos numeros positivos digitados: %d", soma / max_num);

    return 0;
}