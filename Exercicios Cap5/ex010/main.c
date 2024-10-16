#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char s[19];

    printf("Digite algo (leitura pelo gets): \n");
    gets(s);
    fflush(stdin);

    puts("Resultado: ");
    puts(s);
    puts("");

    printf("Digite algo (leitura pelo fgets): \n");
    fgets(s, 19, stdin);
    fflush(stdin);

    puts("Resultado: ");
    puts(s);

    system("pause");
    return 0;
}