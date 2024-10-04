#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
    const float pi = 3.141592;
    float area, raio;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = pi * pow(raio, 2);

    printf("Area do circulo: %.2f\n", area);

    system("pause");
    return 0;
}