//1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct dados_t dados_t;

struct dados_t
{
    char nome[50];
    int idade;
    char endereco[100];
};

void funcao_cadastro(dados_t * cad) {

    printf("\nNome: ");
    scanf("%50[^\n]s", cad->nome);
    fflush(stdin);

    printf("Idade: ");
    scanf("%d", &cad->idade);
    fflush(stdin);

    printf("Endereco: ");
    scanf("%100[^\n]s", cad->endereco);
    fflush(stdin);

    system("cls");
}

void funcao_retorno(dados_t * rtn) {

    printf("\nNome: %s", rtn->nome);
    printf("\nIdade: %d", rtn->idade);
    printf("\nEndereco: %s", rtn->endereco);

}

int main(void) {

    dados_t dados;

    printf("\nInsira seus Dados\n");

    funcao_cadastro(&dados);

    printf("\nDados inseridos: \n");
    puts("-----------------------");

    funcao_retorno(&dados);
    

    return 0;
}