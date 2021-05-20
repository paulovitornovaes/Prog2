/* 
Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor
do terceiro elemento da matriz?
a) *(pulo + 2) b) *(pulo + 4) c) pulo + 4 d) pulo + 2
*/

#include <stdio.h>

int main(){
    int pulo[6] = {0, 1, 2 ,3 ,4, 5};
    printf("%d\n", *(pulo + 2));
    printf("opcao certa A");
    return 0;

}