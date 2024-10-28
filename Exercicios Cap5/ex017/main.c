#include <stdio.h>

int main(void) {

    int num, i, j, m = 0, acumulador = 1;

    printf("Digite o numero de linhas que deseja no seu Triangulo de Floyd: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d", acumulador);
            acumulador++;
        }
        m++;
        printf("\n");
    }
    

    return 0;
}