/*
Escreva uma função em C que receba como parâmetro uma cadeia de caracteres,
contendo apenas letras entre 'A' e 'Z' ou 'a' e 'z' e espaços em branco, e retorne uma
nova cadeia -- alocada dinamicamente --, contendo uma cópia da cadeia original, mas
sem espaços em branco no início ou no final, isto é, sem qualquer caractere ' ' (espaço)
localizado antes da primeira letra ou depois da última letra da cadeia. Por simplificação,
considere que a cadeia de entrada possui no mínimo uma letra (entre 'A' e 'Z' ou 'a' e
'z'). Por exemplo, se a cadeia “ nota do aluno ” (com três espaços em branco no início
e dois no final) for passada para a função, a cadeia retornada deve ser “nota do aluno”,
sem nenhum espaço no início ou no final. Se não for possível alocar dinamicamente a
nova cadeia, a função deve retornar NULL. O protótipo da função é:
char *compactar(char *s);
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

char *compactar(char *s) {
    int contador = 0, i = 0, j;

    char *texto = malloc(sizeof (char) * (1 + strlen(s)));
    if(texto == NULL){
        printf("erro de alocacao dinamica...\n");
    }
    strcpy(texto, s); //texto = s


    printf("\nPalavra digitada: '");
    for (i = 0; texto[i] != '\0'; i++) {
        printf("%c", texto[i]);
        contador++;
    }
    printf("'\n");


    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == 32) {

            for (j = i; texto[j] != '\0'; j++) {
                texto[j] = texto[j + 1];
            }
            i--;
        }
        else {
            break;
        }
    }


    for (i = contador; i >= 0; i--) {
        if (texto[i] != 32 && texto[i] != '\0') {
            texto[i + 1] = '\0';
            break;
        }
    }
    return texto;
}


void main (void) {
    char texto[80];
    int contador = 0, i = 0, j;

    printf("Digite uma palavra: \n");
    scanf("%79[^\n]", texto);

    char *resultado = compactar(texto);

    printf("\nResultado: \n'%s'\n", resultado);


    free(resultado);

}