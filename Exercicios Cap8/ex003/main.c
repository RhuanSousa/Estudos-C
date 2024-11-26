//3) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordenadas_t {
    float x[2];
    float y[2];
}coordenadas_t;

void ler_coordenadas(coordenadas_t *pos){

    int i;

    for (i = 0; i < 2; i++)
    {
        printf("\nDigite as posicoes do ponto (%d)\n", i+1);

        printf("\nDigite um valor para a posicao (X): ");
        scanf("%f", &pos->x[i]);

        printf("Digite outro valor para a posicao (Y): ");
        scanf("%f", &pos->y[i]);
    }
}

float calc_coordenadas(coordenadas_t *pos){

    float dist = 0.0;

    dist = sqrt(pow((pos->x[1] - pos->x[0]), 2) + pow((pos->y[1] - pos->y[0]), 2));

    return dist;
}

int main(void) {

    coordenadas_t ponto;
    float resp;

    ler_coordenadas(&ponto);

    resp = calc_coordenadas(&ponto);

    printf("A distancia entre os pontos e: %.2f\n", resp);

    return 0;
}