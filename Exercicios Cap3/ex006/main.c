#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float km, metros;

    printf("======================================\n");
    printf("SISTEMA DE CONVERSAO DE KM PARA METROS\n");
    printf("======================================\n");
    printf("Digite sua velocidade em Km/h: ");
    scanf("%f", &km);

    metros = km/3.6 ;

    printf("A conversao em metros e: %.2f m/s\n", metros);

    system("pause");
    return 0;
}