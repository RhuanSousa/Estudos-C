#include <stdio.h>

int main(void)
{
    // Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.
    int vetor[10];
    int i, j, verifica;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i+1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("Valor %d encontrado nas posicoes %d e %d\n", vetor[i], i, j);
                verifica = 1;
                break;
            }
        }
    }

    if (verifica == 0)
    {
        printf("Valores iguais nao foram encontrados!");
    }
    return 0;
}