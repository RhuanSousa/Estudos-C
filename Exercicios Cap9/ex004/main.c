//4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = π * raio² * altura

#include <stdio.h>
#include <math.h>
#define PI 3.141592

float funcao(float h, float r){
    float v;

    v = PI * (pow(r, 2)) * h;
    return v;
}

int main(void) {
    float altura, raio, volume;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volume = funcao(altura, raio);

    printf("O volume desse cilindro e: %.2f", volume);
    return 0;
}