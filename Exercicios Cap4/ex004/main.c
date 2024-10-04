#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float sal, prest;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &sal);

    printf("Digite o valor da prestacao: ");
    scanf("%f", &prest);

    if (prest > 0.2 * sal)
    {
        printf("Emprestimo nao concedido\n");
    } else
    {
        printf("Emprestimo concedido\n");
    }

    system("pause");
    return 0;
}