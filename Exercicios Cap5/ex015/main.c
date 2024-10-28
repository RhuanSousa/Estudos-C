#include <stdio.h>

int main(void)
{
    int num, maior = 0, menor = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        maior = num;
        menor = num;

        while (num >= 0)
        {

            if (num > maior)
            {
                maior = num;
            }
            else if (num < menor)
            {
                menor = num;
            }

            printf("Digite um numero: ");
            scanf("%d", &num);
        }
    }

    printf("\nO maior valor lido foi: %d", maior);
    printf("\nO menor valor lido foi: %d", menor);

    return 0;
}