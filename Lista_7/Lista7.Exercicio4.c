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