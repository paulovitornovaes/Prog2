#include <stdio.h>
//Finalizado

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
