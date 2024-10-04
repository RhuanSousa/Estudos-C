#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double valor;

    printf("Digite um valor do tipo double: ");
    scanf("%lf", &valor);

    printf("Valor digitado em notacao cientifica: %e\n", valor);
    
    system("pause");
    return 0;
}