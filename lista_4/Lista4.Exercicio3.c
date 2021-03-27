#include <stdio.h>

//finalizado

int main()
{
    int numbers[5];
    int *p;
    int n;

    p = numbers;
    printf("p recebeu o endereco do vetor numbers\n");

    *p = 10;
    printf("Ponteiro p recebe valor 10\n");
    printf("Com isso o vetor numbers recebeu o valor 10 na posicao 0\n");

    p++;
    printf("Incremento para ir para o proximo local do vetor\n");

    *p = 20;
    printf("ponteiro recebeu valor 20 e colocou na posicao 1 do vetor numbers\n");

    p = &numbers[2];
    printf("Colocou o endereco da posicao 2 no vetor numbers\n");

    *p = 30;
    printf("Deu para a posicao 2 o valor de 30\n");


    p = numbers + 3;
    printf("p recebeu o vetor numbers (padrao fica na posicao 0) + 3 para acessar a terceira posicao\n");

    *p = 40;
    printf("Adicionou o valor 40 na terceira posicao\n");

    p = numbers;
    printf("p voltou ao numbers que por padrao eh posicao 0\n");

    *(p + 4) = 50;
    printf("ponteiro p + 4 posicoes recebeu valor 50\n");

    for (n = 0; n < 5; n++)
        printf("%d", numbers[n]);

    printf("\n");
    printf("printado o valor de cada posicao do vetor numbers\n");
}
