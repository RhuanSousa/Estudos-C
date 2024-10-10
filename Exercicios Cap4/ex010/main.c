#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, y, z, escolha;
    double media_geometrica, media_ponderada, media_harmonica, media_aritmetica;


    printf("Digite 3 valores: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Escolha o tipo de media a ser calculada:\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        media_geometrica = x*y*z;
        printf("Media Geometrica: %.2lf\n", media_geometrica);
        break;
    case 2:
        media_ponderada = (x + (2 * y) + (3 * z))/6.0;
        printf("Media Ponderada: %.2lf\n", media_ponderada);
        break;
    case 3:
        media_harmonica = 1/((1.0/x) + (1.0/y) + (1.0/z));
        printf("Media Harmonica: %.2lf\n", media_harmonica);
        break;
    case 4:
        media_aritmetica = (x + y + z) / 3;
        printf("Media Aritmetica:%.2lf\n", media_aritmetica);
        break;
    
    default:
        printf("Numero inserido invalido");
        break;
    }

    system("pause");
    return 0;
}
