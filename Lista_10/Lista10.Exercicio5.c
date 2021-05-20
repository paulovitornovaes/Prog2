/*
Escreva um programa que leia de um arquivo, cujo nome será fornecido pelo usuário,
um conjunto de números reais e armazene em um vetor. O programa ao final calcula a
media dos números lidos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int n = 0;
    float *vetnum, numero, soma = 0;
    char c;
    char nomearquivo[121];

    printf("Digite o nome do arquivo: ");
    scanf("%120s", nomearquivo);

    fp = fopen(nomearquivo, "r");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
        {
            n++;
        }
    }

    //-------------------------------
    fclose(fp);

    fp = fopen(nomearquivo, "r");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }
    //-------------------------------

    vetnum = (float *)malloc(n * sizeof(float));
    if (vetnum == NULL)
    {
        printf("Nao consegui alocação dinamica\n");
    }

    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%f", &numero);
        vetnum[i] = numero;
    }

    for (int i = 0; i < n; i++)
    {
        soma = soma + vetnum[i];
    }

    printf("\nA media eh %g\n", soma / n);

    fclose(fp);

    free(vetnum);

    return 0;
}