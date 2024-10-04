#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float resultado, num;

    printf("Digite um valor do tipo REAL: ");
    scanf("%f", &num);

    resultado = num / 5;

    printf("A quinta parte desse numero e: %.1f\n", resultado);

    system("pause");
    return 0;
}