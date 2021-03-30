#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int inteiro, l = 0,key, repetidos[MAX];

    //Entrada do tamanho do vetor
    printf("Digite um numero inteiro: \n");
    scanf("%d", &inteiro);

    //Aloca��o dinamica do vetor
    int *v = (int *) malloc(inteiro * sizeof(int));
    if (v == NULL) {
        printf("Aloca��o dinamica falhou...");
    }

    //percorrendo os indices do vetor e dando input apenas numeros de 0 a 10
    printf("Os numeros aceitos para alocacao vao de 0 a 10...\n");
    for (int i = 0; i < inteiro; ++i) {
        printf("Digite os valor para a posicao [%d] = \n", i);
        scanf("%d", &v[i]);
        if (0 > v[i] || v[i] > 10) {
            printf("Voce digitou um valor negativo ou maior que 10...\n");
            i--;
        }
    }

    // validando apenas os que repetem
    for (int i = 0; i < inteiro; i++) {
        for (int j = i + 1; j < inteiro; j++) { //j é 1 após o i
            key = 0; //key usando uma lógica verdadeiro falso...
            for (int k = 0; k < inteiro; ++k) { //laço para analisar vetor[j] se é igual aos repetidos[k]
                if(v[j] == repetidos[k]){
                    key = 1; //key muda de valor
                }
            }
            if (key != 1){
                if (v[i] == v[j]){
                    repetidos[l] = v[i];
                    l++;
                }
            }
        }
    }


    //imprimindo os valores que se repetiram
    for(int i=0; i<l; i++){
        if(i==l-1){
            printf("%d", repetidos[i]);
        }
        else{
            printf("%d, ", repetidos[i]);
        }
    }


    return 0;

}

