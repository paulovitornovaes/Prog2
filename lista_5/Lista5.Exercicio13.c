#include <stdio.h>
#include <string.h>

int main(){
    char text[50];
    printf("Digite um texto para ver mudancas: ");
    gets(text);
    strupr(text);
    printf("String em maiscula: %s\n", text);
    strlwr(text);
    printf("String em minuscula: %s\n", text);
    strrev(text);
    printf("String de tras pra frente: %s\n", text);

    return 0;
}