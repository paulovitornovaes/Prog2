/*
Escreva um programa em C para ler uma palavra e escrever:
-A primeira letra da palavra.
-A última letra da palavra.
-O número de letras existente na palavra (não usar a função strlen())
*/

#include <stdio.h>

int main(){
    char palavra[] = "Teste do programa";
    int contador = 0;
    for (int i = 0; palavra[i] != '\0'; ++i) {
        if (i == 0){
            printf("Primeira letra da palavra = [%c]\n", palavra[i]);
        }

        contador++;
    }
    printf("Ultima letra da palavra = [%c] \n", palavra[contador - 1]);
    printf("%d letras no vetor palavra!\n", contador);
}