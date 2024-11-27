//6) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct nota_t
{
    float n1;
    float n2;
    float n3;
} nota_t;

typedef struct aluno_t
{
    int matricula;
    char nome[50];
    nota_t nota;

} aluno_t;

void cad_aluno(aluno_t *alunos){
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nMatricula: #%d\n", i+1);

        printf("Nome: ");
        scanf("%50[^\n]s", &alunos[i].nome);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota.n1);
        fflush(stdin);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota.n2);
        fflush(stdin);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota.n3);
        fflush(stdin);

        system("cls");
    }
}

float calc_media(aluno_t *alunos){
    
    int i;
    float media = 0.0;
    float maior = 0.0;
    int indice_maior = 0;

    for (i = 0; i < 5; i++)
    {
        media = (alunos[i].nota.n1 + alunos[i].nota.n2 + alunos[i].nota.n3) / 3;

        if (media > maior)
        {
            maior = media;
            indice_maior = i;
        }
    }

    printf("\nAluno com a maior media: \n");
    printf("\nNome: %s", alunos[indice_maior].nome);
    printf("\nNota 1: %.2f", alunos[indice_maior].nota.n1);
    printf("\nNota 2: %.2f", alunos[indice_maior].nota.n2);
    printf("\nNota 3: %.2f", alunos[indice_maior].nota.n3);
    printf("\nMedia: %.2f", maior);

}

int main(void) {

    aluno_t aluno[5];

    cad_aluno(aluno);
    calc_media(aluno);

    return 0;
}