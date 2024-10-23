#include <stdio.h>
#include <stdlib.h>

#define max_num (1000)

int main(void) {

    int i, soma = 0;

    for (i = 0; i < max_num; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            soma += i;
        }
    }

    printf("Soma dos numeros abaixo de 1000: %d\n", soma);
    system("pause");
    return 0;
}