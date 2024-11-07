#include <stdio.h>

int main(void)
{
    // Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.

    int vetor[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("Digite o %d valor: ", i + 1);
            scanf("%d", &vetor[i]);

            for (j = 0; j < 10; j++)
            {
                if (vetor[i] == vetor[j])
                {
                    printf("Número já digitado! Digite um valor diferente.\n");
                    break;
                }
            }
        } while (vetor[i] == vetor[j]);
    }
    return 0;
}