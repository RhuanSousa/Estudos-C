#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("SUCESSOR: %d\n", num+1);
    printf("ANTECESSOR: %d\n", num-1);

    system("pause");
    return 0;
}