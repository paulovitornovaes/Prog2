#include <stdio.h>
#include <stdlib.h>

float *acima_da_media(int n, float *vet, int *tam);
void mostra_vetor(int n, float*vet);

int main()
{
    float exemplo[] = {5.5, 3.2, 2.5, 9.4, 7.5, 4.1, 5.4, 8.0, 6.9};
    int tam = 9;
    mostra_vetor(tam, exemplo);
    float * nexemplo = acima_da_media(tam, exemplo, &tam);
    mostra_vetor(tam, nexemplo);

    free(nexemplo);

    return 0;
}

float *acima_da_media(int n, float *vet, int *tam)
{
    float media = 0;
    int count = 0;
    float * vetresposta;
    for (int i = 0; i < n; i++)
    {
        media += vet[i];
    }
    media /= n;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] > media)
        {
            count++;
        }        
    }    
    vetresposta = (float*) malloc(count * sizeof(float));
    if (vetresposta == NULL)
    {
        return NULL;
    }
    

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] > media)
        {
            vetresposta[count] = vet[i];
            count++;
        }        
    }
    *tam = count;

    return vetresposta; 
}

void mostra_vetor(int n, float*vet)
{
    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        if (i != n-1)
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