#include <stdio.h>

int mdc();

int main(){
    int x, y;

    printf("Digite o valor de X: \n");
    scanf("%d", &x);

    printf("Digite o valor de Y: \n");
    scanf("%d", &y);

    printf("O MDC vale: %d.", mdc(x, y));


}

int mdc(int x, int y){

    if(x % y == 0){ // Como estou fazendo uma func recursiva eu tenho que parar
        return y;
    }
    else{
        return mdc(y,x%y); // a funcao recebe um int x , int y
        // dessa forma  eu coloco o y no lugar do x, e o resto da divisao de x % y no lugar de y
        // assim eu vou atualizando o valor ate chegar no mdc
    }
}