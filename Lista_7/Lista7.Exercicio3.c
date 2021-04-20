/*
Escrever um programa que declare, inicialize e imprima um vetor de 10 inteiros. O
vetor deve conter os 10 primeiros múltiplos de 5. A inicialização do vetor e a sua
impressão devem ser feitas por funções. Generalize para um vetor de n elementos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int *inicializa_vetor(int *n, int *ptam);

void imprime_vetor(int *ponteiro_vetor, int *ptam);

int main(){
    int *vetor;
    int tam = 0;
    
    int *ptam = &tam;

    vetor = inicializa_vetor(vetor, ptam);
    imprime_vetor(vetor, ptam);
    
    
    
    return 0;
}

    

int *inicializa_vetor(int *n, int *ptam){
    //usuario coloca a quantidade de posicoes do vetor
    printf("Quantos numeros para o vetor? \n");
    scanf("%d", ptam);
    
    //inicialização do vetor com alocação dinamica
    n = (int *) malloc(*ptam * sizeof(int));


    //criei uma int key para usar como True / False
    int key = 0;
    int j = 1; //int j é como um contador para descobrir os multiplos de 5
    //inputando os valores multiplos de 5
    for (int i = 0; i < *ptam;)
    {
        while (key == 0)
        {
            if (j % 5 == 0) //se j for multiplo de 5 ele é adicionado no vetor
            {
                n[i] = j;
                i++;//pula para a proxima posicao do vetor
            }
            j++;//incrementa o j para ir percorrendo os numeros inteiros 
            
            if (i == *ptam)//se i for igual o tamanho do tamanho do vetor isso significa que chegamos já ao limite de multiplos de 5 no vetor
            {
                key = 1; //key 1 para quebrar o while
            }
            
        }  
    }
    
    
    return n;
    
}


void imprime_vetor(int *n, int *ptam){

    //imprimindo os valores que tem no vetor
    for (int i = 0; i < *ptam; i++)
    {
        printf("vetor[%d] = %d\n", i, n[i]);
    }
    
}

