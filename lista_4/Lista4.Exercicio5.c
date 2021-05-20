/*
Desde março deste ano, os 33 táxis da cidade de Rio das Ostras tiveram que instalar a aferir
taxímetros para o cálculo do valor das corridas. De acordo com a tabela em vigor, a tarifa inicial
(ou bandeirada) custa R$4,95. Além disso, para cada quilômetro percorrido são cobrados mais
R$2,50, na bandeira 1, ou R$3,00, na bandeira 2. Escreva uma função em C que calcula os valores
da corrida de táxi em Rio das Ostras. A função recebe como parâmetros o valor real dist,
correspondendo à distância percorrida pelo táxi (em quilômetros), e os ponteiros b1 e b2,
indicando os endereços onde devem ser armazenados, respectivamente, os valores calculados
para a corrida na bandeira 1 e na bandeira 2.
void calcula_corrida(float dist, float *b1, float *b2);
 */

#include <stdio.h>
void calcula_corrida(float dist, float *b1, float *b2);

int main(){
    float corrida1, corrida2, *b1, *b2;
    b1 = &corrida1;
    b2 = &corrida2;
    calcula_corrida(10, b1, b2);
    printf("%.2f / %.2f", corrida1, corrida2);

    return 0;
}

void calcula_corrida(float dist, float *b1, float *b2){
    *b1 = 4.95 + (dist * 2.5);
    *b2 = 4.95 + (dist * 3.0);

}