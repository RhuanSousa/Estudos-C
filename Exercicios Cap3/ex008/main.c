#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float c, f;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    f = c * (9/5) + 32.0;

    printf("%.0f graus Celsius em Fahrenheit: %.0f\n", c, f);

    system("pause");
    return 0;
}