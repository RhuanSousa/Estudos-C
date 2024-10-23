#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /* 14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */
    
    int num, f1 = 0, f2 = 1, ftot = 0, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("%d %d", f1, f2);
    for (i = 2; i <= num; i++)
    {   
        ftot = f1 + f2;
        printf(" %d", ftot); 
        f1 = f2;
        f2 = ftot;
    }  
    printf("\nO enesimo termo da sequencia de Fibonacci e: %d\n", ftot);

    system("pause");
    return 0;
}