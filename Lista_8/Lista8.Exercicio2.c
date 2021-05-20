/*
Escreva um programa em linguagem C que faça a leitura e calcule a soma de duas
matrizes.
Ex:
1 2  3  4      2 1 1 1      3 3 4 5
5 6  7  8   +  2 1 3 2  =   7 7 10 10
9 10 11 12     1 4 1 2      10 14 12 14
*/

#include <stdio.h>
#include <stdlib.h>

int verifica_soma(int **pmatriz, int *linha, int *coluna);

int freematrix(int **matriz, int *linha);

int main()
{

    int linha, coluna;
    int *plinha = &linha;
    int *pcoluna = &coluna;

    printf("Digite a quantidade de linhas = ");
    scanf("%d", &linha);
    printf("Digite a quantidade de colunas = ");
    scanf("%d", &coluna);

    int **matriz;
    matriz = (int *)malloc(linha * sizeof(int));
    if (matriz == NULL)
    {
        printf("Nao consegui alocação dinamica\n");
    }

    for (int i = 0; i < linha; i++)
    {
        matriz[i] = (int *)malloc(coluna * sizeof(int *));
        if (matriz[i] == NULL)
        {
            printf("Nao consegui alocação dinamica\n");
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Linha [%d] Coluna [%d] -> ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    verifica_soma(matriz, plinha, pcoluna);
    freematrix(matriz, plinha);

    return 0;
}

int verifica_soma(int **pmatriz, int *linha, int *coluna)
{

    int *vetor_soma;
    vetor_soma = malloc(*linha * sizeof(int *));

    for (int i = 0; i < *linha; i++)
    {
        int soma = 0;
        for (int j = 0; j < *coluna; j++)
        {
            soma += pmatriz[i][j];
        }
        vetor_soma[i] = soma;
    }

    for (int i = 0; i < *linha; i++)
    {

        if (i == *linha - 1)
        {
            break;
        }

        if (vetor_soma[i] != vetor_soma[i + 1])
        {
            printf("As somas nao coincidem!");
            return 1;
        }
    }

    printf("As somas coincidem!");
    free(vetor_soma);
    return 0;
}

int freematrix(int **matriz, int *linha)
{
    if (matriz != NULL)
    {
        int i;
        for (int i = 0; i < *linha; i++)
        {
            if (matriz[i] != NULL)
            {
                free(matriz[i]);
            }
        }
    }
    free(matriz);
    return NULL;
}