#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int mes;

    printf("Digite o numero do mes: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("Mes digitado: Janeiro\n");
        break;
    case 2:
        printf("Mes digitado: Fevereiro\n");
        break;
    case 3:
        printf("Mes digitado: Marco\n");
        break;
    case 4:
        printf("Mes digitado: Abril\n");
        break;
    case 5:
        printf("Mes digitado: Maio\n");
        break;
    case 6:
        printf("Mes digitado: Junho\n");
        break;
    case 7:
        printf("Mes digitado: Julho\n");
        break;
    case 8:
        printf("Mes digitado: Agosto\n");
        break;
    case 9:
        printf("Mes digitado: Setembro\n");
        break;
    case 10:
        printf("Mes digitado: Outubro\n");
        break;
    case 11:
        printf("Mes digitado: Novembro\n");
        break;
    case 12:
        printf("Mes digitado: Dezembro\n");
        break; 
    default:
        printf("Numero digitado invalido!\n");
        break;
    }

    system("pause");
    return 0;
}