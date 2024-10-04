#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    const float pi = 3.141592;
    float altura, raio, volume;

    printf("Altura do cilindro: ");
    scanf("%f", &altura);

    printf("Raio do cilindro: ");
    scanf("%f", &raio);

    volume = pi * pow(raio, 2) * altura;

    printf("Volume do cilindro: %.2f\n", volume);

    system("pause");
    return 0;
}