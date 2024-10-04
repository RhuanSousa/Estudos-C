#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int v1, v2;

    printf("Digite dois valores: \n");
    scanf("%i%i", &v1, &v2);

    printf("valores digitados em ordem inversa: %i, %i\n", v2, v1);

    system("pause");
    return 0;
}