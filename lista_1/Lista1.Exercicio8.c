#include <stdio.h>
/*Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10,
R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e
determine o menor número de notas para se obter o montante fornecido. A função deve
ter o seguinte protótipo:
int total_de_notas(int valor); */
int main(){
    int n1;
    //Entrada do valor
    printf("Digite o valor em R$: ");
    scanf("%i", &n1);
    printf("Com %i reais voce tem: \n", n1);
    //Dividindo e atualizando o resto na variavel N1
    int cem = n1 / 100;
    n1 %= 100;
    printf("%i notas de 100 R$\n", cem);

    int cinq = n1 / 50;
    n1 %= 50;
    printf("%i notas de 50 R$\n", cinq);

    int vint = n1 / 20;
    n1 %= 20;
    printf("%i notas de 20 R$\n", vint);

    int dez = n1 / 10;
    n1 %= 10;
    printf("%i notas de 10 R$\n", dez);

    int cinc = n1 / 5;
    n1 %= 5;
    printf("%i notas de 5 R$\n", cinc);

    int dois = n1 / 2;
    n1 %= 2;
    printf("%i notas de 2 R$\n", dois);

    printf("%i notas de 1 R$", n1);
    
    printf("\n");
    printf("\n");
    return 0;
}

