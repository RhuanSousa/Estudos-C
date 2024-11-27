//2) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordenadas_t coordenadas_t;

struct coordenadas_t
{
    float x;
    float y;
};

void funcao_coordenadas(coordenadas_t *pos){

    printf("Digite um valor para a posicao (X): ");
    scanf("%f", &pos->x);

    printf("Digite outro valor para a posicao (Y): ");
    scanf("%f", &pos->y);
}

float funcao_distancia(coordenadas_t *pos){
    float distancia = 0.0;

    distancia = sqrt(pow(pos->x,2) + pow(pos->y,2));

    return distancia;
}

int main(void){
    
    coordenadas_t ponto;
    float resp;

    funcao_coordenadas(&ponto);

    resp = funcao_distancia(&ponto);

    printf("A distancia do ponto ate a origem e: %.2f\n", resp);
    
    return 0;
}