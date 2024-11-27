//5) Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro do retângulo.

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
    coordenadas_t pontoX;
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

    puts("\n--------------------------------------------------");

    printf("\nDigite os pontos (X,Y) de um ponto qualquer");

    printf("\n(X): ");
    scanf("%f", &ler->pontoX.x);

    printf("(Y): ");
    scanf("%f", &ler->pontoX.y);
}

void calculos_retangulo(retangulo_t *calc, float *area, float *diagonal, float *perimetro){

    float altura, largura;

    largura = calc->ponto2.x - calc->ponto1.x;
    altura = calc->ponto1.y - calc->ponto2.y;

    *area = largura * altura;
    *diagonal = sqrt (pow(largura,2) + pow(altura,2));
    *perimetro = 2 * (altura + largura);
}

void verifica_retagulo(retangulo_t *verf){

    if (((verf->pontoX.x >= verf->ponto1.x) && (verf->pontoX.x <= verf->ponto2.x)) && ((verf->pontoX.y <= verf->ponto1.y) && (verf->pontoX.y >= verf->ponto2.y)))
    {
        printf("\nO ponto (%.0f,%.0f) Esta dentro do retangulo", verf->pontoX.x, verf->pontoX.y);
    } else {
        printf("\nO ponto (%.0f,%.0f) Nao esta dentro do retangulo", verf->pontoX.x, verf->pontoX.y);
    }
}

int main(void) {

    retangulo_t ponto;
    float area, diagonal, perimetro;

    ler_coordenadas(&ponto);
    calculos_retangulo(&ponto, &area, &diagonal, &perimetro);

    printf("\nArea: %.2f", area);
    printf("\nDiagonal: %.2f", diagonal);
    printf("\nPerimetro: %.2f", perimetro);
    verifica_retagulo(&ponto);

    return 0;
}
