#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cont = 0, soma = 0, pares = 0;

    while (cont < 50)
    {
        cont++;
        pares +=2;
        soma += pares;
    }

    printf("%d\n", soma);
    

    system("pause");
    return 0;
}