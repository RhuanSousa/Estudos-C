#include <stdio.h>

void verificar(char *string1, char *string2) {

    int i = 0;

    for (i = 0; i < 5; i++)
    {
        if (string1[i] == string2[i])
        {
            printf("%c", string1[i]);
        } 
    }
    
}

int main(void) {
    char s1[] = {"abcde"};
    char s2[] = {"fgcij"};

    verificar(s1, s2);

    return 0;
}