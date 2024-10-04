#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float v1, v2;

    printf("Digite dois valores: \n");
    scanf("%f%f", &v1, &v2);

    printf("valores digitados em ordem inversa: %.2f, %.2f\n", v2, v1);

    system("pause");
    return 0;
}