/*
Implemente a função maiores, que recebe como parâmetro um vetor de números inteiros (vet) de
tamanho n e um valor x. A função deve retornar quantos números maiores do que x existem nesse
vetor. Essa função deve obedecer ao protótipo:
int maiores(int n, int * vet, int x);
*/

#include <stdio.h>

int maiores(int n, int * vet, int x);

int main(){
    int qtdMaior;
    int vetor[4] = {10, 10, 8, 10};
    qtdMaior = maiores(4, vetor, 9);
    printf("Existem %d numeros maiores que X\n",qtdMaior);


    return 0;
}

int maiores(int n, int * vet, int x){
    int i, total = 0;

    for(i = 0; i <= (n - 1); i++){
        if(vet[i] > x){
            total++;
        }

    }

    return total;

}
