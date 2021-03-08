#include <conio.h>
#include <stdio.h>

void main(){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5}; //criou um vetor com 5 valores float
    float *f; //criou um ponteiro
    int i; //criou um tipo inteiro
    f = vet; // f vai receber o vetor inteiro
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){ // criou um loop, comeca no i valendo 0, ate o i valer 4, incrementando o valor de i
        printf("\ni = %d",i); // aqui diz qual o valor do incremento de 1, comeca em 0 e vai ate o 4
        printf(" vet[%d] = %.1f",i, vet[i]); // com o incremento diz em qual posicao do vetor esta e novamente com o incremento diz o valor dessa posicao no vetor
        printf(" *(f + %d) = %.1f",i, *(f+i)); //imprimiu o valor do incremento e o valor do ponteiro f + incremento
        printf(" &vet[%d] = %X",i, &vet[i]); // esta dizendo o endereco alocado na memoria de cada vetor usando o incremento i
        printf(" (f + %d) = %X",i, f+i);// acredito que a ideia era fazer soma usando o incremento aqui e na linha 13, mas nao acontece como vimos no print
    }
}