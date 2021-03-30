#include <stdio.h>
#include <conio.h>
#include <string.h>

void main (void) {
    char c, nome[9], senha[9], novonome[9], novasenha[9];
    int contador = 0, i;

    printf("Nome: ");
    for (i = 0; i < 8; i++) {
        c = getch();
        if ((c  >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            printf("%c", c);
            nome[i] = c;
        }
        else {
            i--;
        }
    }
    fflush(stdin);

    printf("\nSenha: ");
    for (i = 0; i < 8; i++) {
        c = getch();
        if ((c  >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            printf("*");
            senha[i] = c;
        }
        else {
            i--;
        }
    }
    fflush(stdin);

    printf("\n\nNovo nome: ");
    for (i = 0; i < 8; i++) {
        c = getch();
        if ((c  >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            printf("%c", c);
            novonome[i] = c;
        }
        else {
            i--;
        }
    }
    fflush(stdin);

    printf("\nNova senha: ");
    for (i = 0; i < 8; i++) {
        c = getch();
        if ((c  >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            printf("*");
            novasenha[i] = c;
        }
        else {
            i--;
        }
    }
    fflush(stdin);

    printf("\n\n");


    if (strcmp(nome, novonome) || strcmp(senha, novasenha)) {
        printf("Acesso  negado");
    }
    else {
        printf("OK");
    }

    printf("\n");

}