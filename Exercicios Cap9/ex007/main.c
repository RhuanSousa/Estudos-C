// 7) Elabore uma função que receba três números inteiros como parâmetro, representando horas, minutos e segundos. A função deve retornar esse horário convertido em segundos.

#include <stdio.h>

int funcao(int h, int m, int s) {
    int conv;

    conv =  (h * 3600) + (m * 60) + s;

    return conv;
}

int main(void) {
    int horas,minutos,segundos, conv;

    printf("\nConversor de HORAS para SEGUNDOS");
    printf("\n================================\n");

    printf("\nDigite o horario que dejesa converter da seguinte forma 00:00:00 [00 horas : 00 minutos : 00 segundos] :\n");
    scanf("%d%d%d", &horas, &minutos, &segundos);

    conv = funcao(horas, minutos, segundos);

    printf("Horario digitado convertido em segundos: %d", conv);

    return 0;
}