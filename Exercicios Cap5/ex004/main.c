#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i=0, mult;

    while (i < 5)
    {
        mult += 3;
        printf("%d\n", mult);
        i++;
    }
    
    system("pause");
    return 0;
}