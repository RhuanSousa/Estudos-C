#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("\nEste numero ao quadrado e: %.2f\n", pow(num, 2));
        printf("A raiz quadrada deste numero e: %.2f\n", sqrt(num));
    } else
    {
       printf("Este numero não é valido"); 
    }
    
    system("pause");
    return 0;
}
