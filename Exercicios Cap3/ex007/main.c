#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float reais, cota, dolar;

    printf("Valor em REIAS: ");
    scanf("%f", &reais);

    printf("Cotacao do dolar: ");
    scanf("%f", &cota);

    dolar = reais / cota;

    printf("Reais convertido em Dolar: %.2f\n", dolar);

    system("pause");
    return 0;
}