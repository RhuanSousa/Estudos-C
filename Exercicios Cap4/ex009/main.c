#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    char nome[30];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if ((idade >= 5) && (idade <= 7))
    {
        printf("\nCategoria: Infantil A");
    } else if ((idade >= 8) && (idade <=10))
    {
        printf("\nCategoria: Infantil B");
    } else if ((idade >= 11) && (idade <= 13))
    {
        printf("\nCategoria: Juvenil A");
    } else if ((idade >= 14) && (idade <= 17))
    {
        printf("\nCategoria: Juvenil B");
    } else if (idade >= 18)
    {
        printf("\nCategoria: Senior");
    } else {
        printf("Idade invalida!");
        return 1;
    }
    
    
    printf("\n");
    system("pause");
    return 0;
}
