// 6) Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa: IMC = peso / (altura²)

#include <stdio.h>
#include <math.h>

float funcao(float p, float h) {
    float imc;

    imc = p / pow(h, 2);

    return imc;
}

int main(void) {
    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = funcao(peso, altura);

    printf("O seu Indice de Massa Corporal e igual a: %.2f", imc);
    return 0;
}