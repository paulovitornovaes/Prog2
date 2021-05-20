/*
Implemente a função max_vet, que recebe como parâmetro um vetor de números de ponto
flutuante (vet) de tamanho n e retorna o maior número armazenado nesse vetor. Essa função deve
obedecer o protótipo: float max_vet (int n, float * vet);
Faça também a função main.
*/
#include <stdio.h>


float max_vet (int n, float * vet);

int main(){
    float MaiorVetor;
    float vetor[10] = {1, 2, 66 ,4 ,5};
    MaiorVetor = max_vet(10, vetor);
    printf("O maior elemento do vetor escolhido foi %.1f", MaiorVetor);

    return 0;
}

float max_vet (int n, float * vet){
    int i, maior = 0;
    for (i = 0; i <= n; i++){
        if (vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}