/*
Escreva um programa para declarar um vetor de caracteres de tamanho 26 e imprimir o
seu conteúdo. O vetor deve ser inicializado com as letras minúsculas do alfabeto. A
inicialização do vetor e a sua impressão devem ser feitas por funções.
 */

#include <stdio.h>>
#include <stdlib.h>

void inicializa_vetor();
void imprime_vetor(char *p_vetor);

int main(){
    char *p_vetor;
    p_vetor = (char *) malloc(26 * sizeof(char));

    inicializa_vetor(p_vetor);
    imprime_vetor(p_vetor);

}

void inicializa_vetor(char *p_vetor){
    int contador = 0;
    char *vetor = (char *) malloc(26 * sizeof(char));
    if (vetor == NULL)
    {
        printf("deu erro de alocacao dinamica\n");
        return 1;
    }

    for (int i = 97; i <= 122; i++)
    {
        vetor[contador] = i;
        contador++;
    }

    for (int i = 0; i < 25; i++)
    {
        p_vetor[i] = vetor[i];
    }

}

void imprime_vetor(char *p_vetor){

    printf("Imprimindo o alfabeto em minusculo...\n");
    for (int i = 0; i < 25; i++)
    {
        printf("%c ", p_vetor[i]);
    }
    
}