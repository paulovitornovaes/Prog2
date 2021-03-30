#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int *repeticao(int *vet, int tam, int *n);

int main() {
    int inteiro;
    int *vetor_final;

    //Entrada do tamanho do vetor
    printf("Digite um numero inteiro: \n");
    scanf("%d", &inteiro);

    //Aloca��o dinamica do vetor
    int *v = (int *) malloc(inteiro * sizeof(int));
    if (v == NULL) {
        printf("Aloca��o dinamica falhou...");
    }

    //percorrendo os indices do vetor e colocando apenas numeros de 0 a 10
    printf("Os numeros aceitos para alocacao vao de 0 a 10...\n");
    for (int i = 0; i < inteiro; ++i) {
        printf("Digite os valor para a posicao [%d] = \n", i);
        scanf("%d", &v[i]);
        if (0 > v[i] || v[i] > 10) {
            printf("Voce digitou um valor negativo ou maior que 10...\n");
            i--;
        }
    }

    vetor_final = repeticao(v, 9, &inteiro);

    //imprimindo os valores que se repetiram
    for(int i=0; i<inteiro; i++){
        if(i==inteiro-1){
            printf("%d", vetor_final[i]);
        }
        else{
            printf("%d, ", vetor_final[i]);
        }
    }


    return 0;

}

int  *repeticao(int *vet, int tam, int *n){
    int l = 0,key, repetidos[MAX];


    // validando apenas os que se repetem
    for (int i = 0; i < tam; i++) {
        for (int j = i +1; j < tam; j++) {
            key = 0;
            for (int k = 0; k < tam; ++k) {
                if(vet[j] == repetidos[k]){
                    key = 1;
                }
            }
            if (key != 1){
                if (vet[i] == vet[j]){
                    repetidos[l] = vet[i];
                    l++;
                }
            }
        }
    }
    
    *n = l;

    int *vetor_final = (int *) malloc(l * sizeof(int));
    if (vetor_final == NULL)
    {
        printf("erro de alocacao dinamica...\n");
    }
    

    for (int i = 0; i < l; i++)
    {
        vetor_final[i] = repetidos[i];
    }
    

    return vetor_final;

}