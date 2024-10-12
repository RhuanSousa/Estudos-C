#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    int a, b, c;
    double delta, x1, x2;

    printf("-----CALCULADORA DE BHASKARA-----\n");
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    if (a == 0)
    {
        printf("Nao e equacao de 2 grau\n");
    } else {
        delta = (pow(b, 2) - 4 * a * c);
        x1 = (((-b) + sqrt(delta)) / (2 * a));
        x2 = (((-b) - sqrt(delta)) / (2 * a));

        if (delta < 0) {
            printf("Nao existe raiz\n");
        } else if (delta == 0) 
        {
            printf("Raiz unica\n");
        } else if (delta > 0)
        {
            printf("X1 = %.2lf\n", x1);
            printf("X2 = %.2lf\n", x2);
        }
        
    }

    system("pause");
    return 0;
}