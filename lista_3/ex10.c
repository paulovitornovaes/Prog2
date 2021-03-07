#include <stdio.h>
//FINALIZADO

// prototipo da media
float media(int n,float *v);

int main(){
    //criei o vetor de notas
    float vetor[3] = {10, 10, 10};
    //criei variavel para receber o valor da media
    float mediaNotas = media(3, vetor);
    // printando o valor da media
    printf("\nMedia = %.1f \n", mediaNotas);
    return 0;
}

// funcao media, precisa do inteiro n que vai ser o divisor e o ponteiro para o vetor das notas
float media(int n,float *v){
    int i;
    float soma = 0;

    //somatorio das notas
    for(i = 0; i < n; i++){
        soma = soma + v[i];
    }

    //dividir para receber a media
    soma = soma / n;

    // retorna a media na variavel soma
    return soma;


}