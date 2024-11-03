#include <stdio.h>
#include <windows.h>

// NAO CONSEGUI FAZER ESSA BAGAÇA FODASE
// DEPOIS EU PENSO NISSO

void verificar(char *string1, char *string2) {
    char *p1, *p2;

    p1 = string1;
    p2 = string2;

    while (*p1 != '\0')
    {
        if (*p1 == *p2)
        {
            printf("A string \"%s\" ocorre dentro de \"%s\".\n", p2, string1);
            return;
        }
        p1++;
    }

    printf("A string \"%s\" nao ocorre dentro de \"%s\".\n", string2, string1);
}

int main(void) {
    system("cls");
    char s1[] = {"abcde"};
    char s2[] = {"cf"};

    verificar(s1, s2);

    system("pause");
    return 0;
}