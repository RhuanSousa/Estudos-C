#include <stdio.h>

int main(void)
{
    int x, y;
    int *p1, *p2;

    printf("Digite um valor: ");
    scanf("%d", &x);

    p1 = &x;

    printf("Digite outro valor: ");
    scanf("%d", &y);

    p2 = &y;

    if (p1 > p2)
    {
        printf("\nO endereco de memoria de %d e maior do que %d", *p1, *p2);
    }
    else
    {
        printf("\nO endereco de memoria de %d e maior do que %d", *p1, *p2);
    }

    return 0;
}