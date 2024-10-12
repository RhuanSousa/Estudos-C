#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int v;

    printf("Digite um valor: ");
    scanf("%d", &v);

    if ((v % 3 == 0) && (v % 5 == 0)) 
    {
        printf("O valor digitado e simultaneamente divisivel por 3 e 5\n");
    } else if ((v % 3 == 0) || (v % 5 == 0))
    {
        printf("O valor digitado e divisivel por 3 ou 5\n");
    } else {
        printf("O valor digitado nao e divisivel nem por 3 nem por 5\n");
    }

    system("pause");
    return 0;
}
