#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char sexo;
    int altura;
    double peso_ideal;

    printf("Digite seu sexo: [M/F]\n");
    scanf("%c", &sexo);

    printf("Digite sua altura: ");
    scanf("%d", &altura);

    if ((sexo == 'M') || (sexo == 'm'))
    {
        peso_ideal = ((72.7 * altura) - 58);

        printf("Seu peso ideal deve ser igual a: %.2lf\n", peso_ideal);
    } else if ((sexo == 'F') || (sexo == 'f'))
        {
            peso_ideal = (62.1 * altura) - 44.7;

            printf("Seu peso ideal deve ser igual a: %.2lf\n", peso_ideal);
        }
    
    system("pause");
    return 0;
}
