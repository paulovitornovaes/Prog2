#include <stdio.h>
//Finalizado

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