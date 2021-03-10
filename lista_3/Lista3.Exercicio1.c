#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
//FINALIZADO

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