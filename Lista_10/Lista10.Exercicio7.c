/*
Um arquivo do tipo texto, chamado ‘‘numeros.txt’’ contém uma quantidade
desconhecida de números reais. Escreva um programa que leia estes números, os coloque
em ordem crescente e depois os grave em um arquivo binário chamado ‘‘numeros.bin’’.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp, *sai;
    int n = 0;
    float *vetnum, numero, soma = 0, temp;
    char c;

    fp = fopen("numeros.txt", "r");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    sai = fopen("numeros.bin", "wb");

    while ((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
        {
            n++;
        }
    }

    printf("Quantidade de linhas: %d\n", n);

    //-------------------------------
    fclose(fp);

    fp = fopen("numeros.txt", "r");
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
        for (int j = i + 1; j < n; j++)
        {
            if (vetnum[i] > vetnum[j])
            {
                temp = vetnum[i];
                vetnum[i] = vetnum[j];
                vetnum[j] = temp;
            }
        }
    }

    /*for (int i = 0; i < n; i++) {
        printf("\n%g\n", vetnum[i]);
    }*/

    fwrite(vetnum, sizeof(vetnum), n, sai);

    fclose(fp);

    fclose(sai);

    free(vetnum);

    return 0;
}