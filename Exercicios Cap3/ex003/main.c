#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int v1, v2, v3;

    printf("Digite tres valores: ");
    scanf("%i %i %i", &v1, &v2, &v3);

    printf("Soma entre eles: %i\n", v1+v2+v3);

    system("pause");
    return 0;
}