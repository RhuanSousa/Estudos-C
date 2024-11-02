#include <stdio.h>

int main(void) {

    int a = 10;
    int b = 40;
    int *p = &a;
    int *p1 = &b;

    printf("\nEndereco de p: %p", p);
    printf("\nEndereco de p1: %p", p1);

    if (p > p1)
    {
        printf("\nO endereco de p e maior");
    }else {
        printf("\nO endereco de p1 e maior");
    }

    return 0;
}