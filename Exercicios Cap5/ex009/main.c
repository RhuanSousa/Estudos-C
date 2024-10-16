#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i, valor, maior = 0, menor = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (i == 0)
        {
            maior = valor;
            menor = valor;
        }
        if (valor > maior)
        {
            maior = valor;
        }
        if (valor < menor)
        {
            menor = valor;
        }        
    }


    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    system("pause");
    return 0;
}