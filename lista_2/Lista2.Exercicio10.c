/*
O maior divisor comum (MDC) de dois números inteiros é o maior número inteiro
que faz uma divisão exata (com resto zero) desses dois números. Por exemplo, o MDC de
32 e 40 é 8, o MDC de 9 e 27 é 9 e o MDC de 13 e 25 é 1. Implemente uma função que
receba como parâmetros dois números inteiros x e y e calcule o MDC desses números.
Essa função deve ter o seguinte protótipo:
int mdc (int x, int y);
*/
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