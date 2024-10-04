#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num, complemento;

    printf("Digite um numero: ");
    scanf("%i", &num);

    printf("Complemento bit a bit: %i\n", complemento = ~num);

    system("pause");
    return 0;
}