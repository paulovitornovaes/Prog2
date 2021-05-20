/*
Construa uma função que receba como argumento de entrada uma cadeia de 20 caracteres e um
caractere e retorne o número de vezes que este caractere aparece na cadeia.
*/

#include <stdio.h>
#include <string.h>

int qtdchar(char *letra, char *frase);


int main(){
    char frase[20] = "Aaaa aaA aAa AAA aaa";
    char letra = 'a';

    char *pfrase;
    char *pletra;

    pfrase = frase;
    pletra = &letra;

    int contador;

    contador = qtdchar(pletra, pfrase);

    printf("Frase escolhida = \n%s'%c' apareceu %d vezes!", frase, letra, contador);

    return 0;
}

int qtdchar(char *letra, char *frase){
    int tamanho = strlen(frase);
    int contador = 0;
    for (int i = 0; i < tamanho; ++i) {
        if (frase[i] == *letra){
            contador++;
        }
    }
    return contador;
}