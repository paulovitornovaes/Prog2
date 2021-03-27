#include <stdio.h>
#include <string.h>
#include <conio.h>

int main (){

    char nome[30];
    char email[30];
    char telefone[30];
    char concatenado[80];
    memset(nome, '\0', sizeof(char) * 30);
    memset(email, '\0', sizeof(char) * 30);
    memset(telefone, '\0', sizeof(char) * 30);
    memset(concatenado, '\0', sizeof(char) * 80);

    printf("Digite seu Nome: ");
    gets(nome);
    fflush(stdin);
    printf("Digite seu Email: ");
    gets(email);
    fflush(stdin);
    printf("Digite seu Telefone: ");
    gets(telefone);
    fflush(stdin);
    strcat(concatenado, nome);
    strcat(concatenado, email);
    strcat(concatenado, telefone);
    printf("\n%s", concatenado);
    return 0;
}