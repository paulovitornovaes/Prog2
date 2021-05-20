/*
Modifique o programa anterior da seguinte forma:
a) Passo igual ao da questão 1.
b) Ao invés de calcular e imprimir na main as repetições, crie uma
função 'repeticao' para fazer esse trabalho. A função deve seguir o
protótipo
void repeticao(int *vet, int tam);
Onde 'vet' e 'tam' foram lidos no passo a).

- Exemplo de execução: idêntico ao anterior.
- Obs.: A impressão é feita dentro da função 'repeticao'.

 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void repeticao(int *vet, int tam);


int main() {
    int inteiro;

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


    repeticao(v, 9);

    return 0;

}

void repeticao(int *vet, int tam){
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


    //imprimindo os valores que se repetiram
    for(int i=0; i<l; i++){
        if(i==l-1){
            printf("%d", repetidos[i]);
        }
        else{
            printf("%d, ", repetidos[i]);
        }
    }

}