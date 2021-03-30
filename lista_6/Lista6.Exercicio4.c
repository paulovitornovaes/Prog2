#include <stdio.h>
#include <stdlib.h>

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam);
void mostra_ivetor(int n, int *vet);
void mostra_fvetor(int n, float *vet);

int main()
{
    int inscricoes[] = {10, 7, 8, 6, 4, 2, 9, 1, 3, 5};
    int *vpremiados;
    float teste1[] = {1.3, 10.0, 3, 4.9, 5.0, 6.5, 8.0, 8, 1, 5};
    float teste2[] = {1.3, 7.0, 3, 4.9, 5.0, 6.5, 8.0, 8, 9, 5};
    int tam = 10;
    printf("inscricoes: ");
    mostra_ivetor(tam, inscricoes);
    printf("teste1: ");
    mostra_fvetor(tam, teste1);
    printf("teste2: ");
    mostra_fvetor(tam, teste2);
    vpremiados = premiados(tam, inscricoes, teste1, 1, teste2, 2, &tam);
    printf("inscricoes dos premiados: ");
    mostra_ivetor(tam, vpremiados);

    free(vpremiados);

    return 0;
}

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam)
{
    float maior_media = 0.0;
    float media;
    int * ppremiados;
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        media = (t1[i] * p1 + t2[i] * p2) / (p1 + p2);
        if (media > maior_media)
        {
            maior_media = media;
        }
    }
    for (int i = 0; i < n; i++)
    {
        media = (t1[i] * p1 + t2[i] * p2) / (p1 + p2);
        if (media == maior_media)
        {
            contador++;
        }        
    }
    *tam = contador;
    ppremiados = (int*) malloc(contador*sizeof(int));

    if (ppremiados == NULL)
    {
        return NULL;
    }    

    contador = 0;
    for (int i = 0; i < n; i++)
    {
        media = (t1[i] * p1 + t2[i] * p2) / (p1 + p2);
        if (media == maior_media)
        {
            ppremiados[contador] = inscr[i];
            contador++;
        }
    }
    
    return ppremiados;
}

void mostra_fvetor(int n, float *vet)
{
    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            printf("%.1f, ", vet[i]);
        }
        else
        {
            printf("%.1f ", vet[i]);
        }
    }
    printf("}\n");
}

void mostra_ivetor(int n, int *vet)
{
    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            printf("%d, ", vet[i]);
        }
        else
        {
            printf("%d ", vet[i]);
        }
    }
    printf("}\n");
}