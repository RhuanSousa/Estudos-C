#include <stdio.h>

int main(void) {
    
    int i, j;
    float mat[3][3] = {{1.0,2.0,5.0}, {4.0, 7.0, 3.0}, {8.0, 6.0, 9.0}};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("endereco de mat[%d][%d]: %p\n", i+1, j+1, &mat[i][j]);
        }
    }
    

    return 0;
}