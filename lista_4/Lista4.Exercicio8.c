/* 
Inicialize um vetor de inteiros aleatoriamente e percorra o vetor usando dois ponteiros : um
começando do início do vetor e outro do final até se encontrarem no meio. Obs : O vetor deve
conter um número par de elementos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ponteiro1(int *ponteiro1, int k);
void ponteiro2(int *ponteiro2, int k);

int main(){
    int k = 0, *matriz = NULL;

    printf("Tamanho do vetor (escolha um numero par): ");
    scanf("%i", &k);

    if(k % 2 != 0){
        printf("numero par nao selecionado, saindo do programa...");
        exit(1);
    }

    matriz = (int *)malloc(k * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < k; i++)
    {
        matriz[i] = rand() % k + 1;
    }

    printf("\n");
    printf("------------------\n");
    printf("INT MAIN INICIALIZANDO...\n");
    for (int i = 0; i < k; ++i) {
        printf("[%d] = (%d)\n", i, matriz[i]);
    }
    printf("------------------\n");
    printf("\n");

    ponteiro1(matriz, k);
    ponteiro2(matriz, k);
}

void ponteiro1(int *ponteiro1, int k){
    printf("PONTEIRO 1 INICIALIZACAO...\n");
    for (int i = 0; i < k/2; ++i) {
        printf("[%d] = (%d)\n", i, ponteiro1[i]);
    }
    printf("\n");
}

void ponteiro2(int *ponteiro2, int k){
    printf("PONTEIRO 2 INICIALIZACAO...\n");
    for (int i = k -1; i >= k/2; --i) {
        printf("[%d] = (%d)\n", i, ponteiro2[i]);
    }
}