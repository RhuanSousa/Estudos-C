#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    int num, uni, dez, cen;

    printf("Digite um numero de 3 digitos: ");
    scanf("%i", &num);

    uni = num % 10;
    dez = (num/10) % 10;
    cen = (num/100) % 10;

    printf("O inverso de %i e: %i%i%i.\n", num, uni,dez,cen);
    system("pause");
    return 0;
}