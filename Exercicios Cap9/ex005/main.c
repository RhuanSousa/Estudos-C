// 5) Escreva uma função para o cálculo do volume de uma esfera: v = 4 / 3π * r³

#include <stdio.h>
#include <math.h>
#define PI 3.141592

float funcao(float r){
    float v;

    v = (4.0 / 3.0) * PI * pow(r, 3);

    return v;
}

int main(void) {
    float volume, raio;

    printf("Insira o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = funcao(raio);

    printf("Volume da esfera: %.2f", volume);
    return 0;
}