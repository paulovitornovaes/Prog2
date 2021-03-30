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