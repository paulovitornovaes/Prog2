/*
Escreva um programa em C para ler um vetor R (de 5 elementos) e um vetor S (de 10
elementos). Gere um vetor X que possua os elementos comuns a R e a S. Considere que pode
existir repetição de elementos no mesmo vetor. Nesta situação somente uma ocorrência do
elemento comum aos dois deve ser copiada para o vetor X. Após o término da cópia, escrever o
vetor X.

*/

#include <stdio.h>


void input_vetor(int *vet, int n);
void imprime_vetor(int *vet, int n);
int teste(int num, int n, int *vet);

int main(){
    int j = 0;
    int r[5]; //= {22, 2, 3, 4, 5};
    int s[10]; //= {1, 2 ,3 ,4 ,5 ,6, 7, 8, 9};
    int x[5];

    input_vetor(r, 5);
    input_vetor(s, 10);

    for (int i = 0; i < 5; i++){
        if (teste(r[i], 10, s) && !teste(r[i], j, x)){
            x[j] = r[i];
            j++;
        }
    }

    printf("vetor r: ");
    imprime_vetor(r, 5);
    printf("\n");

    printf("vetor s: ");
    imprime_vetor(s, 10);
    printf("\n");

    printf("vetor x: ");
    imprime_vetor(x, j);
    printf("\n");


    return 0;
}


void input_vetor(int *vet, int n){
    //int n sao quantos valores vao entrar / int *vet eh o ponteiro para o vetor
    printf(" ");
    for (int i = 0; i < n; ++i) {
        printf("Digite um valor para a posicao [%d] = \n", i);

        scanf("%d", &vet[i]);

    }
}

void imprime_vetor(int *vet, int n){
    for (int i = 0; i < n; ++i) {
        printf("[%d]", vet[i]);
        printf(" ");

    }
}

int teste(int num, int n, int *vet){
    for (int i = 0; i < n; ++i) {
        if (num == vet[i]){
            return 1;
        }
    }
    return 0;
}