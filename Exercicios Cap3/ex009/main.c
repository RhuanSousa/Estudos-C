#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const float pi = 3.141592;
    float G, R;

    printf("Digite o angulo em graus: ");
    scanf("%f", &G);

    R = G * (pi / 180);

    printf("O angulo de %.1f graus em radianos e: %f\n", G, R);

    system("pause");
    return 0;
}