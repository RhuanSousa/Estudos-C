#include <stdio.h>
#include <windows.h>

int main(void)
{

    int num, i;

    system("cls");
    do
    {
        printf("\nDigite um numero maior do que 1: ");
        scanf("%d", &num);

        if (num <= 1)
        {
            printf("Numero invalido!");
        }
    } while (num <= 1);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("numero nao e primo");
            break;
        }
    }
    if (i == num && num % i == 0)
    {
        printf("O numero e primo");
    }

    return 0;
}
