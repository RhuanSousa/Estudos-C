#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (valor%2 == 0)
    {
        printf("O valor digitado e par\n");
    } else
    {
       printf("O valor digitado e impar\n"); 
    }
    

    system("pause");
    return 0;
}