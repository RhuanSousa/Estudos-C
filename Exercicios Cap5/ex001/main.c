#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num, i;

    printf("Digite um valor: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Numero digitado invalido!\n");
    } else {
        for (i = 0; i <= num; i++)
        {
            printf("%d\n", i);
        }
        
    }
    

    system("pause");
    return 0;
}