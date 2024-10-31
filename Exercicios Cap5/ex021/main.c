#include <stdio.h>

int main(void) {
    int i, num, maior = 0, menor = 0, m=1, qtd_num;

    printf("\nDigite a quantidade de numeros que deseja ler: ");
    scanf("%d", &qtd_num);

    if (qtd_num <= 0)
    {
        printf("\nNumero digitado invalido!");
        return 0;
    }
    

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    for (i = 1; i <  qtd_num; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior)
        {
            maior = num;
        }else if (num == maior)
        {
             m++;
        }

        if (num < menor)
        {
            menor = num;
        }
        
        
    }

    printf("\nmenor: %d", menor);
    printf("\nmaior: %d", maior);
    printf("\nQuantidades que o maior foi lido: %d", m);

    return 0;
}