#include <stdio.h>

int funcao(int x, int y){
    if (x > y)
    {
        return x;
    } else {
        return y;
    }
    
}

int main(void) {
    //1) Escreva uma função que receba por parâmetro dois números e retorne o maior deles.
    int num1, num2, maior;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    maior = funcao(num1, num2);

    printf("\nMaior valor digitado: %d", maior);


    return 0;
}