#include <stdio.h>
#include <stdlib.h>

//finalizado

int main(){
    int *vetorX; //ponteiro para o vetor
    int *vetorY;
    int i, qtd_elementos;
    int iCima, iBaixo;

    printf("Digite a quantidade de elementos do vetor: \n");
    scanf("%d", &qtd_elementos);

    vetorX = (int *)(malloc(qtd_elementos * sizeof (int )));
    vetorY = (int *)(malloc(qtd_elementos * sizeof (int )));

    if(vetorX == NULL){
        printf("Nao foi possivel a alocacao dinamica...\n");
        exit(1);
    }

    if(vetorY == NULL){
        printf("Nao foi possivel a alocacao dinamica...\n");
        exit(1);
    }


    printf("\n");

    for(i = 0; i <= qtd_elementos - 1; i++){
        printf("Digite o numero para o indice [%d]:", i);

        scanf("%d", &vetorX[i]);
    }

    printf("\n");

    printf("\n");
    // O vetor tem 10 elementos, comeca no 0 e vai ate o 9
    // For termina quando incremento iCima eh menor que 10
    // E incremento iBaixo maior ou igual a 0 ( por que ele vai descer ate o valor de 0
    for(iCima = 0, iBaixo = qtd_elementos - 1 ; iCima <= qtd_elementos - 1 && iBaixo >= 0; iCima++, iBaixo--){
        vetorY[iCima] = vetorX[iBaixo];
    }

    // printando os valores revertidos
    for(iCima = 0; iCima <= qtd_elementos - 1; iCima++){
        printf("%d valor = %d\n", iCima, vetorY[iCima]);
    }

}