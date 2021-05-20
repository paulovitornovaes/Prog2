/* 
Faça um programa com funções para:
a. ler 7 valores inteiros e os armazene em um vetor;
b. listar o conteúdo do vetor com as referidas posições de armazenamento;
b. pesquisar no vetor um valor inteiro qualquer de entrada e retornar a posição deste valor.
Caso esse valor não esteja presente no vetor, então retornar –1;
c. trocar valores contidos no vetor pela seguinte política: cada elemento i dentro do vetor
será substituído pela soma de todos os (i-1) elementos mais o elemento i. Por exemplo, dado um
vetor [1; 2; 3; 4; 5], após a aplicação da função teríamos esse vetor preenchido com os seguintes
valores [1; 3; 6; 10; 15]. Para esta tarefa utilize um vetor auxiliar.
*/

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
        printf("Este valor n�o se encontra no vetor\n");
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