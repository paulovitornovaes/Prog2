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