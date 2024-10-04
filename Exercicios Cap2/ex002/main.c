#include <stdio.h>
#include <stdlib.h>

int num;

int main(){
    printf("Digite um numero: ");
    scanf("%i", &num);

    printf("Numero digitado: %i\n", num);
    system("pause");
    return 0;
}