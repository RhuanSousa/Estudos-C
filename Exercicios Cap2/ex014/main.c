#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char a[2] ,b[2] ,c[2];

    printf("Digite tres caracteres: ");
    scanf("%s%s%s", a, b, c);

    printf("\n");
    printf("%s\n%s\n%s\n", a, b, c);

    system("pause");
    return 0;
}