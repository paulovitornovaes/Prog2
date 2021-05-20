/*
Fazer um programa que receba uma string de no máximo 20 caracteres do usuário e mostre o
conteúdo desta string de forma invertida.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char texto[20];
    int i, contador = 0;

    printf("Digite um texto: \n");
    scanf("%20[^\n]", texto);

    for (i=0; texto[i] != '\0'; i++) {
        contador++;
    }

    for (i = contador - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }
}