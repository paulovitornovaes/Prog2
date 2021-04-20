#include <stdio.h>
#include <stdlib.h>

int verifica_matrizes(int **pmatrizum, int **pmatrizdois, int *linha, int *coluna);

int freematrix(int **matriz, int *linha);

int main(){

    int linha, coluna;
    int *plinha = &linha;
    int *pcoluna = &coluna;


    printf("Digite a quantidade de linhas = ");
    scanf("%d", &linha);
    printf("Digite a quantidade de colunas = ");
    scanf("%d", &coluna);


    int **matrizum;
    matrizum = (int**) malloc(linha * sizeof(int *));
    if (matrizum == NULL){
        printf("Nao consegui alocação dinamica\n");
    }

    int **matrizdois;
    matrizdois = (int**) malloc(linha * sizeof(int *));
    if (matrizdois == NULL){
        printf("Nao consegui alocação dinamica\n");
    }

    for (int i = 0; i < coluna; i++)
    {
        matrizum[i] = (int*) malloc(coluna * sizeof(int *));
        if (matrizum[i] == NULL){
            printf("Nao consegui alocação dinamica\n");
        }
    }

    for (int i = 0; i < coluna; i++)
    {
        matrizdois[i] = (int*) malloc(coluna * sizeof(int *));
        if (matrizdois[i] == NULL){
            printf("Nao consegui alocação dinamica\n");
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Matriz 1 - Linha [%d] Coluna [%d] -> ", i, j);
            scanf("%d", &matrizum[i][j]);
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Matriz 2 - Linha [%d] Coluna [%d] -> ", i, j);
            scanf("%d", &matrizdois[i][j]);
        }
    }

    verifica_matrizes(matrizum, matrizdois, plinha, pcoluna);

    freematrix(matrizum, plinha);
    freematrix(matrizdois, plinha);


    return 0;
}
int verifica_matrizes(int **pmatrizum, int **pmatrizdois, int *linha, int *coluna){

    for (int i = 0; i < *linha; i++) {
        for (int j = 0; j < *coluna; j++) {
            if (pmatrizum[i][j] != pmatrizdois[j][i]){
                printf("Nao sao simetricas!!!");
                return 0;
            }
        }
    }

    printf("Sao simetricas!!!");
    return 0;
}


int freematrix(int **matriz, int *linha){
    if(matriz != NULL) {
        int i;
        for (int i = 0; i < *linha; i++) {
            if(matriz[i] != NULL) {
                free(matriz[i]);
            }
        }
    }
    free(matriz);
    return NULL;
}