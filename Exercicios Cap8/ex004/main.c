//4) Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordenadas_t
{
    float x;
    float y;
} coordenadas_t;

typedef struct retangulo_t
{
    coordenadas_t ponto1;
    coordenadas_t ponto2;
} retangulo_t;

void ler_coordenadas(retangulo_t *ler){

    printf("\nDigite os pontos (X,Y) do canto superior esquerdo");

    printf("\n(X): ");
    scanf("%f", &ler->ponto1.x);

    printf("(Y): ");
    scanf("%f", &ler->ponto1.y);

    puts("\n--------------------------------------------------");

    printf("\nDigite os pontos (X,Y) do canto inferior direito");

    printf("\n(X): ");
    scanf("%f", &ler->ponto2.x);

    printf("(Y): ");
    scanf("%f", &ler->ponto2.y);
}

void calculos_retangulo(retangulo_t *calc, float *area, float *diagonal, float *perimetro){

    float altura, largura;

    largura = calc->ponto2.x - calc->ponto1.x;
    altura = calc->ponto1.y - calc->ponto2.y;

    *area = largura * altura;
    *diagonal = sqrt (pow(largura,2) + pow(altura,2));
    *perimetro = 2 * (altura + largura);
}

int main(void) {

    retangulo_t ponto;
    float area, diagonal, perimetro;

    ler_coordenadas(&ponto);
    calculos_retangulo(&ponto, &area, &diagonal, &perimetro);

    printf("\nArea: %.2f", area);
    printf("\nDiagonal: %.2f", diagonal);
    printf("\nPerimetro: %.2f", perimetro);

    return 0;
}