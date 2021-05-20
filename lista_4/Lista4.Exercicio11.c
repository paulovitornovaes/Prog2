/*
Elabore um programa que, dado 2 vetores inteiros de 20 posições, efetue as respectivas
operações indicadas por um terceiro vetor de caracteres de 20 posições também fornecido pelo
usuário, contendo as quatro operações aritméticas em qualquer combinação, armazenando os
resultados num quarto vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1[20], num2[20], resultado[20];
    char operacao[20], tmp[20];
    int i;

    for (i=0; i<20; i++) {
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1[i]);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2[i]);
        printf("Digite a operacao: ");
        scanf("%s", &operacao[i]);

    }

    for (i=0; i<20; i++) {
        if (operacao[i] == '+'){
            resultado[i] = num1[i] + num2[i];
        }
        if (operacao[i] == '-'){
            resultado[i] = num1[i] - num2[i];
        }
        if (operacao[i] == '*'){
            resultado[i] = num1[i] * num2[i];
        }
        if (operacao[i] == '/'){
            resultado[i] = num1[i] / num2[i];
        }
    }

    for(i=0; i<20; i++) {
        printf("%g ", resultado[i]);
    }

}