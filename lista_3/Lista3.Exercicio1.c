/*
Implemente a função calcula_circulo, que calcula a área e a circunferência de um círculo de raio
r. Essa função deve obedecer o protótipo:
void calc_circulo(float r, float * circunferencia, float * area);
Fórmulas:
A = π r
2 ; c = 2 π r ; π = 3.14159265
Note que essa passagem dos 2 últimos parâmetros é uma passagem por referência.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265


int calcula_circulo(float r, float *circunferencia, float *area);

int main(){
    float area, circunferencia, r = 4;
    calcula_circulo(r, &circunferencia, &area);
    printf("area = %f / circunferencia = %f / raio = %f ", area, circunferencia, r);

    return 0;
}

int calcula_circulo(float r, float *circunferencia, float *area){
    *area = PI * pow(r, 2);
    *circunferencia = 2 * PI * r;
    return 0;
}