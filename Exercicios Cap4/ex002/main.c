#include <stdlib.h>
#include <stdio.h>

int main(void) {

    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numer: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("%d e maior do que %d\n", n1, n2);
    }
    else
    {
        if (n1 < n2)
        {
            printf("%d e menor do que %d\n", n1, n2);
        }
        else
        {
            printf("%d e igual a %d\n", n1, n2);
        }
        
    }

    system("pause");
    return 0;
}