/*
Implemente um programa que leia do usuário vários nomes completos de pessoas,
até que o usuário digite a palavra “fim”. Esses nomes devem ser armazenados em um
vetor. Imprima no final a média e a variância do tamanho dos nomes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char **vet;
    int tam;
} VetorString;

#define ULTIMA_LINHA "fim"

char *leNome(void)
{
    char *nome = NULL;

    for (int size = 0;; size++)
    {

        char c;
        scanf("%c", &c);

        nome = realloc(nome, (size + 1) * sizeof(char));

        if (c == '\n')
        {
            nome[size] = '\0';
            return nome;
        }

        nome[size] = c;
    }
}
VetorString leTodos(void)
{
    VetorString todos = {
        .vet = NULL,
        .tam = 0,
    };

    while (true)
    {
        char *nome = leNome();

        if (strcmp(nome, ULTIMA_LINHA) == 0)
        {
            return todos;
        }

        todos.vet = realloc(todos.vet, (todos.tam + 1) * sizeof(char *));
        todos.vet[todos.tam] = nome;
        todos.tam++;
    }
}

void limpaMatriz(VetorString nomes)
{
    for (int i = 0; i < nomes.tam; i++)
    {
        free(nomes.vet[i]);
    }
    free(nomes.vet);
}

void main(void)
{
    VetorString nomes = leTodos();

    int soma = 0;
    for (int i = 0; i < nomes.tam; i++)
    {
        soma += strlen(nomes.vet[i]);
    }
    float media = soma / (float)nomes.tam;

    printf("A media do tamanho dos nomes e %g\n", media);

    float variancia = 0;
    for (int i = 0; i < nomes.tam; i++)
    {
        int dispersao = strlen(nomes.vet[i]) - media;
        variancia += dispersao * dispersao;
    }
    printf("A variancia do tamanho dos nomes e %g\n", variancia);

    limpaMatriz(nomes);
}