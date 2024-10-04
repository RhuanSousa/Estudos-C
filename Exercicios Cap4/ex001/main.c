#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("%d e maior do que %d\n", n1, n2);
    }
    else
    {
        printf("%d e menor do que %d\n", n1, n2);
    }

    system("pause");
    return 0;
}