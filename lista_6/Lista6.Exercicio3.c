#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//Nao to sabendo retornar os vetores

int *aprovados(int n, int *mat, float *notas, int *tam);

int main(){
    int *tam = 0, *pmat;
    float *pnotas;
    int mat[MAX] = {0, 1, 2, 3, 4, 5};
    float notas[MAX] = {3, 3, 7, 10, 6.5, 5.9};
    pmat = mat;
    pnotas = notas;


    tam = aprovados(6, pmat, pnotas, tam);

    for (int i = 0; i < tam; ++i) {
        printf("Nota = [%.2f] \n", pnotas[i]);
    }
    return 0;
}

int *aprovados(int n, int *mat, float *notas, int *tam){
    int *vetor_matriculas;
    float *vetor_notas;
    int incremento;

    //incrementando o int tam para saber o tamanho do novo vetor
    for (int i = 0; i < n; ++i) {
        if (notas[i] >= 5.0){
            incremento++;
        }
    }

    //alocacao dinamica para os vetores novos
    vetor_matriculas = (int *) malloc(incremento * (sizeof (int)));
    if (vetor_matriculas == NULL){
        printf("Alocacao dinamica falhou...\n");
    }
    vetor_notas = (float *) malloc(incremento * (sizeof (float )));
    if (vetor_notas == NULL){
        printf("Alocacao dinamica falhou...\n");
    }


    //atribuicao dos valores nos novos vetores
    for (int i = 0; i < incremento; ) {
        for (int j = 0; j < n; ++j) {
            if (notas[j] >= 5.0){
                //printf("nota escolhida = [%.2f]\n", notas[j]);
                vetor_matriculas[i] = mat[j];
                vetor_notas[i] = notas[j];
                i++;
            }

        }

    }


    tam = incremento;
    return tam;
}