#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {

    int i;

    for (i = 10; i >= 0; i--)
    {
        printf("%d\n", i);
        Sleep(1000);
    }
    
    printf("FIM!\n");

    system("pause");
    return 0;
}