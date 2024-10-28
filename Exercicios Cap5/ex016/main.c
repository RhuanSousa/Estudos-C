#include <stdio.h>

int main(void) {
    int num, i, num_harmonico = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++)
    {
        num_harmonico += 1/i;
    }

    num_harmonico = num_harmonico + 1;

    printf("O enesimo termo do numero harmonico é: %d", num_harmonico);
    

    return 0;
}