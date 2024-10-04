#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    double cateto_A, cateto_B, Hipotenusa;

    printf("Valor do Cateto oposto: ");
    scanf("%lf", &cateto_A);

    printf("Valor do Cateto Adjacente: ");
    scanf("%lf", &cateto_B);

    Hipotenusa = sqrt(pow(cateto_A, 2) + pow(cateto_B, 2));

    printf("Valor da Hipotenusa: %.2lf\n", Hipotenusa);

    system("pause");
    return 0;
}