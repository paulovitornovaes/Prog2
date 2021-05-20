/*
Escreva uma função em C que receba como parâmetros um vetor (vet) de n números
reais e um ponteiro para inteiro (tam) e retorne o ponteiro para um novo vetor, alocado
dinamicamente, contendo somente os elementos do vetor original que são maiores que
a média de todos os valores. Por exemplo, o vetor {5.5, 3.2, 2.5, 9.4, 7.5, 4.1, 5.4, 8.0,
6.9}, daria origem ao vetor {9.4, 7.5, 8.0, 6.9}, de tamanho 4. No ponteiro para inteiro
deverá ser armazenado o tamanho do novo vetor. Se não for possível alocar o novo
vetor, a função deve retornar NULL.
float *acima_da_media(int n, float *vet, int *tam);
1) Calcular a média de vet
2) verificar quantos elementos de vet são maiores do que a média
3) alocar dinamicamente um vetresposta conforme o tamanho verificado no item 2
4) preencher o vetresposta com os elementos do item 2
5) atualizar a variável ponteiro tam com o tamanho do novo vetor
 */


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