#include <stdio.h>

//finalizado

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