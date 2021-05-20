/*
Seja a seguinte sequência de instruções em um programa C:
int *pti;
int veti[]={10,7,2,6,3};
pti = veti;
Qual afirmativa é falsa?
a. *pti é igual a 10
b. *(pti+2) é igual a 2
c. pti[4] é igual a 3
d. pti[1] é igual a 10
e. *(veti+3) é igual a 6
 */
#include <stdio.h>


int main(){
    int *pti;
    int veti[]={10,7,2,6,3};
    pti = veti;

    printf("%i", *(veti + 3));

    printf("\n");

    printf("*pti é igual a 10 = VERDADEIRO\n");
    printf("*(pti+2) é igual a 2 = VERDADEIRO\n");
    printf("pti[4] é igual a 3 = VERDADEIRO\n");
    printf("pti[1] é igual a 10 = FALSO\n");
    printf("*(veti+3) é igual a 6 = VERDADEIRO\n");

}