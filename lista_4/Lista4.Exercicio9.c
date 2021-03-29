#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[7], v2[7], soma = 0, i, valor, verificador = -1;

    printf("Digite os 7 valores do vetor: \n");
    for (i=0; i<7; i++) {
        scanf("%d", &v[i]);
    }

    printf("\nVetor: ");
    for (i=0; i<7; i++) {
        printf("[%d] = %d ",i, v[i]);
    }

    printf("\n\nDigite um valor para pesquisa: \n");
    scanf("%d", &valor);

    for (i=0; i<7; i++) {
        if (valor == v[i]) {
            printf("\nSe encontra na posicao: [%d]\n", i);
            verificador = 0;
        }
    }

    if (verificador == -1) {
        printf("Este valor não se encontra no vetor\n");
        return -1;
    }


    for (i=0; i<7; i++) {
        v2[i] = soma + v[i];
        soma = v2[i];
    }

    printf("\n\nValor apos a soma: \n");
    for (i=0; i<7; i++) {
        printf("%d  ", v2[i]);
    }
}