//3) Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.\n
#include <stdio.h>

float funcao(float F) {
    float C;

    C = (F - 32.0) * (5.0/9.0);
    return C;
}

int main(void) {
    float temp;
    float convertido;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &temp);

    convertido = funcao(temp);

    printf("\nA temperatura %.1f em Fahrenheit convertida para Celsius e: %.1f", temp, convertido);

    return 0;
}