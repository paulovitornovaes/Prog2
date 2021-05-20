/*
Faça um programa com uma função que calcule o número de vogais existentes em uma string. A
função recebe a string e atualiza a resposta (número de vogais) em uma variável que foi passada por
referência.
*/

#include <stdio.h>
#include <string.h>

int numero_vogais(int *contador, char *p);


int main(){
    char nome[80] = "Paulo Vitor Novaes Cardozo";
    char *p;
    p = nome;
    int contador;

    numero_vogais(&contador, p);
    printf("Frase escolhida = \n%s\n", nome);
    printf("Quantidade de vogais existentes = \n%d\n", contador);

    return 0;
}

int numero_vogais(int *contador,char *p){
    int tamanho = strlen(p);
    int n = 0;
    for (int i = 0; i < tamanho; ++i) {
        if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u'){
            n++;
        }
    }
    *contador = n;
    return 0;
}