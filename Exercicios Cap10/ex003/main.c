#include <stdio.h>

int main(void) {

    float vet[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    float *p = vet;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\n%.2f", p[i]);
    }
    
    return 0;
}