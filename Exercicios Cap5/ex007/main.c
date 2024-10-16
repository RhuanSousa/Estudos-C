#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i, valor, soma=0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        soma += valor;
    }

    printf("Soma dos valores digitado: %d\n", soma);
    
    system("pause");
    return 0;
}