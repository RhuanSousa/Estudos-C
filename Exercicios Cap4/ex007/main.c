#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    float valor, imposto;
    char estado[2];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("\n-------------------------------");
    printf("\n TABELA DE IMPOSTO POR ESTADO ");
    printf("\n-------------------------------");
    printf("\nMG - 7%% DE IMPOSTO");
    printf("\nSP - 12%% DE IMPOSTO");
    printf("\nRJ - 15%% DE IMPOSTO");
    printf("\nMS - 8%% DE IMPOSTO");
    printf("\n------------------------------");
    printf("\nDigite seu estado: ");
    scanf("%s", estado);

    if ((strcmp(estado, "MG") == 0))
    {
        imposto = (valor * 0.07) + valor;
    } else if ((strcmp(estado, "SP") == 0))
    {
        imposto = (valor * 0.12) + valor;
    } else if ((strcmp(estado, "RJ") == 0)) {

        imposto = (valor * 0.15) + valor;
    } else if ((strcmp(estado, "MS") == 0))
    {
        
        imposto = (valor * 0.08) + valor;
    } else {
        printf("\nERRO!! ESTADO NAO REGISTRADO\n");
        return 1;
    }
    
    printf("Valor do produto com taxa: %.2f\n", imposto);

    system("pause");
    return 0;
}
