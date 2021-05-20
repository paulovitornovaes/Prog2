/* 
Faça um programa que receba uma string do usuário (máx. 20 caracteres) e um caracter
qualquer. O programa deve remover todas as ocorrências do caracter da string e mostrar o
resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char s[20], valor, tmp;
    int i, j;

    printf("Digite uma frase: \n");
    scanf("%19[^\n]", s);

    printf("\nDigite um caractere: \n");
    //scanf("%s", tmp);
    tmp = ' ';
    valor = tmp;

    for (i=0; i<20; i++) {
        if (valor == s[i]) {
            s[i] = s[i + 1];
            for (j = i + 1; s[j] != '\0'; j++) {
                s[j] = s[j + 1];
            }

        }
    }

    printf("\n%s", s);
    return 0;

}