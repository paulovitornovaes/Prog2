/*
Faça um algoritmo para ler dois números inteiros e calcular e mostrar o valor
resultante se elevarmos a base representada pelo primeiro à potência representada pelo
segundo. Dica: busque qual a função que faz a potenciação.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int x, y;

    printf("Digite o valor de X: \n");
    scanf("%d", &x);

    printf("Digite o valor de Y: \n");
    scanf("%d", &y);

    printf("%d elevado a %d = %.1f",x, y, pow(x, y));

    return 0;
}
