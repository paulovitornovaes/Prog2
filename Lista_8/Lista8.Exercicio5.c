/* 
Faça um programa que, dados duas matrizes, chame funções para retornar:
a) a soma destas duas matrizes
b) a soma das diagonais de cada matriz (atualize os parâmetros passados por referência)
c) a multiplicação das duas matrizes
*/

#include <stdio.h>
#include <stdlib.h>

int soma_matrizes(int **pmatrizum, int **pmatrizdois, int *linha, int *coluna, int *linhadois, int *colunadois);

int soma_diagonais(int **pmatrizum, int **pmatrizdois, int *linha, int *coluna, int *linhadois, int *colunadois);

int mult_matriz(int **pmatrizum, int **pmatrizdois, int *linha, int *coluna, int *linhadois, int *colunadois);

int freematrix(int **matriz, int *linha);

int main(){

    //declarações de variaveis
    int linha, linhadois, coluna, colunadois, produto, k, i, j;
    int *plinha = &linha, *plinhadois = &linhadois;
    int *pcoluna = &coluna, *pcolunadois = &colunadois;

    //recebendo os valores necessarios
    printf("Digite a quantidade de linhas da matriz 1 = ");
    scanf("%d", &linha);
    printf("Digite a quantidade de colunas da matriz 1 = ");
    scanf("%d", &coluna);

    printf("Digite a quantidade de linhas da matriz 2 = ");
    scanf("%d", &linhadois);
    printf("Digite a quantidade de colunas da matriz 2 = ");
    scanf("%d", &colunadois);

    //alocação dinamica das pp matrizes
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

    //alocacoes de cada ponteiro da matriz
    for (int i = 0; i < linha; i++)
    {
        matrizum[i] = (int*) malloc(coluna * sizeof(int *));
        if (matrizum[i] == NULL){
            printf("Nao consegui alocação dinamica\n");
        }
    }

    for (int i = 0; i < linhadois; i++)
    {
        matrizdois[i] = (int*) malloc(coluna * sizeof(int *));
        if (matrizdois[i] == NULL){
            printf("Nao consegui alocação dinamica\n");
        }
    }

    //recebendo os valores de cada valor da matriz
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Matriz 1 - Linha [%d] Coluna [%d] -> ", i, j);
            scanf("%d", &matrizum[i][j]);
        }
    }

    for (int i = 0; i < linhadois; i++)
    {
        for (int j = 0; j < colunadois; j++)
        {
            printf("Matriz 2 - Linha [%d] Coluna [%d] -> ", i, j);
            scanf("%d", &matrizdois[i][j]);
        }
    }
    
    //chamada de cada funcao

    printf("\n");
    soma_matrizes(matrizum, matrizdois, plinha, pcoluna, plinhadois, pcolunadois);
    printf("\n");
    soma_diagonais(matrizum, matrizdois, plinha, pcoluna, plinhadois, pcolunadois);
    printf("\n");
    mult_matriz(matrizum, matrizdois, plinha, pcoluna, plinhadois, pcolunadois);


    //chamada das funcoes de free para liberar a memoria
    freematrix(matrizum, plinha);
    freematrix(matrizdois, plinha);


    return 0;
}

int soma_matrizes(int **pmatrizum, int **pmatrizdois, int *linha, int *coluna, int *linhadois, int *colunadois){

    int  i, j;

    //funcao que vai correr de linha e coluna somando todos os valores
    if(*linha == *linhadois && *coluna == *colunadois){
        printf("\nSoma das matrizes:\n");
        for (int i = 0; i < *linha; i++) {
            for (int j = 0; j < *coluna; j++) {
                printf("%d ", pmatrizum[i][j] + pmatrizdois[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Nao e possivel realizar soma!!!\n");
    }


    return 0;
}


int soma_diagonais(int **pmatrizum, int **pmatrizdois, int *linha, int *coluna, int *linhadois, int *colunadois){

    int i, j, soma = 0;

    //algoritmo que pega apenas a diagonal para soma, apenas se
    //for a diagonal vai receber "atualizacao" da soma
    if(*linha ==*coluna){
        printf("Soma das diagonais:\n");
        printf("Soma diagonal Matriz 1: ");
        for (int i = 0; i < *linha; i++) {
            for (int j = 0; j < *coluna; j++) {
                if (i == j) {
                    soma = soma + pmatrizum[i][j];
                }
            }
        }
        printf("%d\n", soma);
        soma = 0;
    } else {
        printf("Nao e possivel realizar soma da diagonal da matriz 1!!!\n");
    }

    //mesma coisa mas na matriz 2
    if(*linhadois ==*colunadois){
        printf("Soma diagonal Matriz 2: ");
        for (int i = 0; i < *linha; i++) {
            for (int j = 0; j < *coluna; j++) {
                if (i == j) {
                    soma = soma + pmatrizum[i][j];
                }
            }
        }
        printf("%d\n", soma);
    } else {
        printf("Nao e possivel realizar soma da diagonal da matriz 2!!!\n");
    }


    return 0;
}

int mult_matriz(int **pmatrizum, int **pmatrizdois, int *linha, int *coluna, int *linhadois, int *colunadois){
    int produto = 0;

    //percorre toda matriz para multiplicar cada valor das matrizes
    if(*coluna == *linhadois){
        printf("Multiplicacao das matrizes:\n");
        for (int i = 0; i < *linha; i++) {
            for (int j = 0; j < *colunadois; j++) {
                produto = 0;
                for (int k = 0; k < *coluna; k++) {
                    produto = produto + pmatrizum[i][k] * pmatrizdois[k][j];
                }
                printf("%d ", produto);
            }
            printf("\n");
        }
        return 0;
    } else {
        printf("Nao e possivel multiplicacao!!!");
    }
    return 0;

}

int freematrix(int **matriz, int *linha){
    //funcao free para ficar com o codigo mais organizado
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

