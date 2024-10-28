#include <stdio.h>

int main(void) {
    float harmonico = 1.0, i, num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    for (i = 2.0; i <= num; i++)
    {
        harmonico += 1.0/i;
    }

    printf("\nO enesimo termo do numero harmonico e: %f", harmonico);

    return 0;
}