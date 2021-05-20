/* 
Implemente uma função que receba como parâmetros um vetor de números inteiros v e seu
comprimento n, e verifique se os elementos do vetor correspondem aos termos de uma PA
(Progressão Aritmética), isto é, se existe um número inteiro k tal que v[i]=v[0]+k*i. Caso os
elementos do vetor correspondam aos termos de uma PA, a função deve retornar o valor
calculado para k. Por exemplo, se for passado para essa função o vetor {2,10,18,26,34} a função
deve retornar o valor 8. Caso o vetor não corresponda a uma PA, a função deve retornar o valor 0.
Assuma que o vetor sempre terá pelo menos 3 elementos. Essa função deve ter o seguinte
protótipo:
int testa_PA(int n, int* v)
*/
#include <stdio.h>


int testa_PA(int n, int* v);

int main(){
    int vetorTeste [5] = {5, 10, 15, 20, 25};
    

    int razao;
    razao = testa_PA(5 ,vetorTeste);
    printf("razao = %d\n", razao);
    return 0;
}

int testa_PA(int n, int* v){
    int i;
    int razao = v[1] - v[0];
    for (i = 1; i < n; i++){
        if (v[i] - v[i - 1] == razao){
            continue;
        } else {
            return 0;
        }

    }
    return razao;
}