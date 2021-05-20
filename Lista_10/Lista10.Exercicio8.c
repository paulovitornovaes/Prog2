/*

Escreva um programa que grave os dados de alunos conforme a estrutura abaixo em
um arquivo do tipo binário de acesso aleatório.
typedef struct _ALUNO {
char nome [81];
float nota1 , nota2;
} ALUNO;
a. Faça uma função para mostrar os alunos que tem média maior do que 6,0.
b. Faça um menu de opções para incluir, alterar, consultar e excluir um aluno.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _ALUNO
{
    char nome[81];
    float nota1, nota2;
} ALUNO;

void imprimeMenu();
int tamanhoArq(char *nomeArq);
void mostrarMedia(char *nomeArq);
void incluirAluno(char *nomeArq);
void alterarAluno(char *nomeArq);
void consultarAlunos(char *nomeArq);
void excluirAluno(char *nomeArq);

int main()
{
    int opcao = 5;
    char nomeArq[30];
    printf("Digite o nome do arquivo: ");
    scanf(" %29[^\n]", &nomeArq);
    while (opcao != 0)
    {
        imprimeMenu();
        printf("Escolha um opcao: \n");
        scanf(" %d", &opcao);
        switch (opcao)
        {
        case 0:
            break;
        case 1:
            mostrarMedia(nomeArq);
            break;
        case 2:
            incluirAluno(nomeArq);
            break;
        case 3:
            alterarAluno(nomeArq);
            break;
        case 4:
            consultarAlunos(nomeArq);
            break;
        case 5:
            excluirAluno(nomeArq);
            break;
        default:
            printf("Por favor digite uma das opcoes do menu :)\n");
            break;
        }
    }
}

void imprimeMenu()
{
    printf("--------------------Menu--------------------\n"
           "[0] Sair do programa\n"
           "[1] Mostrar alunos em cima da media\n"
           "[2] Incluir Aluno\n"
           "[3] Alterar Aluno\n"
           "[4] Consultar Alunos\n"
           "[5] Excluir Aluno\n"
           "--------------------------------------------\n");
}

int qtdAlunos(char *nomeArq)
{
    int tamanho;
    FILE *fp = fopen(nomeArq, "rb");
    fseek(fp, 0, SEEK_END);
    tamanho = ftell(fp);
    fclose(fp);
    return tamanho / sizeof(ALUNO);
}

void mostrarMedia(char *nomeArq)
{
    ALUNO *aluno = (ALUNO *)malloc(sizeof(ALUNO));
    int numeroAlunos;
    float media;
    FILE *fp = fopen(nomeArq, "rb");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    numeroAlunos = qtdAlunos(nomeArq);
    printf("Alunos com media maior que 6,0:\n");
    for (int i = 0; i < numeroAlunos; i++)
    {
        fread(aluno, sizeof(ALUNO), 1, fp);
        media = (aluno->nota1 + aluno->nota2) / 2.0f;
        if (media > 6.0f)
        {
            printf("-%s\n", aluno->nome);
        }
    }
    fclose(fp);
    free(aluno);
}

void incluirAluno(char *nomeArq)
{
    ALUNO *aluno = (ALUNO *)malloc(sizeof(ALUNO));
    printf("Digite o nome do(a) aluno(a): ");
    scanf(" %80[^\n]", aluno->nome);
    printf("Digite a primeira nota do(a) aluno(a): ");
    scanf("%f", &aluno->nota1);
    printf("Digite a segunda nota do(a) aluno(a): ");
    scanf("%f", &aluno->nota2);
    FILE *fp = fopen(nomeArq, "ab");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fwrite(aluno, sizeof(ALUNO), 1, fp);
    fclose(fp);
    free(aluno);
}

void alterarAluno(char *nomeArq)
{
    int numeroAlunos;
    char nome[81];
    int naoEncontrado = 1;
    numeroAlunos = qtdAlunos(nomeArq);
    ALUNO *alunos = (ALUNO *)malloc(numeroAlunos * sizeof(ALUNO));
    FILE *fp = fopen(nomeArq, "rb");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fread(alunos, sizeof(ALUNO), numeroAlunos, fp);
    printf("Digite o nome do aluno que sera alterado: ");
    scanf(" %80[^\n]", nome);
    for (int i = 0; i < numeroAlunos; i++)
    {
        if (strcmp(alunos[i].nome, nome) == 0)
        {
            printf("Digite o nome do(a) aluno(a): ");
            scanf(" %80[^\n]", alunos[i].nome);
            printf("Digite a primeira nota do(a) aluno(a): ");
            scanf("%f", &alunos[i].nota1);
            printf("Digite a segunda nota do(a) aluno(a): ");
            scanf("%f", &alunos[i].nota2);
            naoEncontrado = 0;
        }
    }
    if (naoEncontrado)
    {
        printf("Nenhum aluno com esse nome foi encontrado...\n");
    }
    fclose(fp);
    FILE *fw = fopen(nomeArq, "wb");
    fwrite(alunos, sizeof(ALUNO), numeroAlunos, fp);
    fclose(fw);
    free(alunos);
}

void consultarAlunos(char *nomeArq)
{
    ALUNO *aluno = (ALUNO *)malloc(sizeof(ALUNO));
    int numeroAlunos;
    FILE *fp = fopen(nomeArq, "rb");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    numeroAlunos = qtdAlunos(nomeArq);
    for (int i = 0; i < numeroAlunos; i++)
    {
        fread(aluno, sizeof(ALUNO), 1, fp);
        printf("--------------------------------------------\n");
        printf("Nome do aluno: %s\n", aluno->nome);
        printf("Nota1 do aluno: %f\n", aluno->nota1);
        printf("Nota2 do aluno: %f\n", aluno->nota2);
        printf("--------------------------------------------\n");
    }
    fclose(fp);
    free(aluno);
}

void excluirAluno(char *nomeArq)
{
    int numeroAlunos;
    char nome[81];
    int naoEncontrado = 1;
    int indicemorto;
    numeroAlunos = qtdAlunos(nomeArq);
    ALUNO *alunos = (ALUNO *)malloc(numeroAlunos * sizeof(ALUNO));
    FILE *fp = fopen(nomeArq, "rb");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fread(alunos, sizeof(ALUNO), numeroAlunos, fp);
    printf("Digite o nome do aluno que sera removido: ");
    scanf(" %80[^\n]", nome);
    for (int i = 0; i < numeroAlunos; i++)
    {
        if (strcmp(alunos[i].nome, nome) == 0)
        {
            indicemorto = i;
            naoEncontrado = 0;
        }
    }
    fclose(fp);
    for (int i = 0; i < numeroAlunos; i++)
    {
        if (i > indicemorto)
        {
            alunos[i - 1] = alunos[i];
        }
    }
    if (naoEncontrado)
    {
        printf("Nenhum aluno com esse nome foi encontrado...\n");
    }
    else
    {
        FILE *fw = fopen(nomeArq, "wb");
        fwrite(alunos, sizeof(ALUNO), numeroAlunos - 1, fp);
        fclose(fw);
        free(alunos);
    }
}
