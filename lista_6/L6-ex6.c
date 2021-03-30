#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam;
    int * vet;
    int contador = 0;

    printf("Digite a quantidade de numeros que serao digitados: ");
    scanf("%d", &tam);
    
    vet = (int*) malloc(tam*sizeof(int));

    if (vet == NULL)
    {
        printf("Erro: nao foi possivel instanciar o vetor dinamicamente\n");
        return NULL;
    }
    
    printf("Preechendo o vetor...\nObs: o vetor so aceita valores entre 0 e 9\n");
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor contido na posicao %d do vetor vet: ", i);        
        scanf("%d", vet+i);
        if (vet[i] < 0 || vet[i]> 9)
        {
            printf("valor invalido... digite novamente...\n");
            i--;
        }        
    }
    int primeiro_numero_verificado = 1;
    for (int i = 0; i < tam; i++)
    {                
        int valor_verificado = 0;
        for (int j = 0; j < i; j++)
        {
            if (vet[j] == vet[i])
            {
                valor_verificado = 1;
            }            
        }        
        
        if (!valor_verificado)
        {            
            contador = 0;
            for (int j = 0; j < tam; j++)
            {
                if (vet[i] == vet[j])
                {
                    contador++;
                }
            }
            if (contador > 1)
            {
                if (primeiro_numero_verificado)
                {
                    printf("%d", vet[i]);
                    primeiro_numero_verificado = 0;
                }
                else
                {
                    printf(", %d", vet[i]);
                }
            }            
        }
    }

    free(vet);

    return 0;
}