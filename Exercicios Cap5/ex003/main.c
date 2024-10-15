#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i+= 2)
    {
        
        printf("%d\n", i + 1);
            
    }

    

    system("pause");
    return 0;
}