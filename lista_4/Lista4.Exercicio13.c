#include <stdio.h>
#include <stdlib.h>
//NAO FUNCIONA
int main() {

    char texto[50], textoEditado[50], letra;
    int i, j, k, contador = 1;

    printf("Digite uma frase: \n");
    scanf("%49[^\n]", texto);


    for (i=0; texto[i] != '\0'; i++) {
        letra = texto[i];
        if (texto[i] == 32){
            letra = 0;
        }
        for (j=0; j<50; j++){
            if (letra == textoEditado[j]){
                letra = 0;
                break;
            }
        }
        textoEditado[i] = letra;
        for (k=i+1; texto[k] != '\0'; k++){
            if (letra == texto[k]) {
                contador++;
            }
        }
        if (letra != 0){
            printf ("'%c' = %d, ", letra, contador);
        }
        contador = 1;

    }



    return 0;



}