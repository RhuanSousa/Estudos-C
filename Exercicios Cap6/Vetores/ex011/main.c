#include <stdio.h>
#include <math.h>

int main(void) {

    float numeros[20];
    float resultado[20];
    int i;

    for (i = 0; i < 20; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%f", &numeros[i]);
    }
    
    for (i = 0; i < 20; i++)
    {
        resultado[i] = pow(numeros[i], 2);
    }

    for (i = 0; i < 20; i++)
    {
        printf("\n%.2f elevado ao quadrado %.2f", numeros[i], resultado[i]);
    }
    
    

    return 0;
}