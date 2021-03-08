#include <stdio.h>

int main(){
    int pulo[] = {1, 2, 3, 4};
    printf("Se a matriz comecasse a contar do 1 = %i\n", *(pulo + 2));
    printf("Se a matriz comecasse a contar do 0 = %i", *(pulo + 3));
}