#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void *a, const void *b)
{
    if (*(char *)a > *(char *)b)
    {
        return 1;
    }
    if (*(char *)a < *(char *)b)
    {
        return -1;
    }
    return 0;
}

void bolha(int n, char *v);
void rapida(int n, char *v);

int main()
{
    char vetorbolha[] = "Frase a ser ordenada";
    char vetorquick[] = "Frase a ser ordenada";
    char vetorqsort[] = "Frase a ser ordenada";

    printf("Antes da ordenacao:\n");
    printf("%s\n\n", vetorquick);
    

    bolha(strlen(vetorbolha), vetorbolha);
    printf("bolha():\n");
    printf("%s\n", vetorbolha);
    rapida(strlen(vetorquick), vetorquick);
    printf("rapida():\n");
    printf("%s\n", vetorquick);
    qsort(vetorqsort, strlen(vetorqsort), sizeof(char), cmpfunc);
    printf("qsort():\n");
    printf("%s\n", vetorqsort);
}

void bolha(int n, char *v)
{
    int i, fim;
    for (fim = n - 1; fim > 0; fim--)
    {
        int troca = 0;
        for (i = 0; i < fim; i++)
            if (v[i] > v[i + 1])
            {
                int temp = v[i]; /* troca */
                v[i] = v[i + 1];
                v[i + 1] = temp;
                troca = 1;
            }
        if (troca == 0)
            return; /* não houve troca */
    }
}

void rapida(int n, char *v)
{
    if (n > 1)
    {
        int x = v[0];
        int a = 1;
        int b = n - 1;
        do
        {
            while (a < n && v[a] <= x)
                a++; /* teste a<n */
            while (v[b] > x)
                b--; /* nao testa */
            if (a < b)
            { /* faz troca */
                int temp = v[a];
                v[a] = v[b];
                v[b] = temp;
                a++;
                b--;
            }
        } while (a <= b);
        /* troca pivô */
        v[0] = v[b];
        v[b] = x;
        /* ordena sub-vetores restantes */
        rapida(b, v);
        rapida(n - a, &v[a]);
    }
}