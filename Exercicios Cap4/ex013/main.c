#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n1, n2, escolha;
    float resultado = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("\n-------MENU-------");
    printf("\n1 = SOMA");
    printf("\n2 = SUBTRCAO");
    printf("\n3 = MULTIPLICACAO");
    printf("\n4 = DIVISAO");
    printf("\n------------------");
    printf("\nEscolha: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        resultado = n1 + n2;
        printf("\nO resultado da soma entre os numeros: %.2f\n", resultado);
        break;
    case 2:
        resultado = n1 - n2;
        printf("\nO resultado da subtracao entre os numeros: %.2f\n", resultado);
        break;
    case 3:
        resultado = n1 * n2;
        printf("\nO resultado da multiplicacao entre os numeros: %.2f\n", resultado);
        break;
    case 4:
        resultado = n1 / n2;
        printf("\nO resultado da divisao entre os numeros: %.2f\n", resultado);
        break;
    default:
        printf("\nNumero digitado invalido!");
        break;
    }

    system("pause");
    return 0;
}