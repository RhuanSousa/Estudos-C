#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num, i, c = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; c < num; i+= 2)
    {
        printf("%d\n", i);
        c++;
    }

    system("pause");
    return 0;
}