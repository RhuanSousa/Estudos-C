// 8) Elabore uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Exemplos: 1, 4, 9.
#include <stdio.h>
#include <math.h>

void funcao(int n) {
    int raiz = sqrt(n);

    if (raiz * raiz == (int)n)
    {
        printf("O numero %d e perfeito", n);
    } else {
        printf("O numero %d e imperfeito", n);
    }

}

int main(void) {
    int num;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num);
    
    funcao(num);

    return 0;
}