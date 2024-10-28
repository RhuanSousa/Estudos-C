#include <stdio.h>

int main(void) {

    float s = 0, numerador = 1, denominador = 1;

    while (numerador <= 99 && denominador <= 55)
    {
        s += numerador/denominador;

        numerador +=2;
        denominador++;
    }

    printf("Valor de S: %.2f", s);
    
    return 0;
}