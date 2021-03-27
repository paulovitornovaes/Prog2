#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char *compactar(char *s);

int main(){
    char *palavra = "     Paulo Vitor     ";
    compactar(palavra);
    return 0;
}

char *compactar(char *s){
    char primeira_letra;
    char ultima_letra;
    char *novo_vetor;
    int tamanho = strlen(s);

    //varrendo os valores para achar a ultima letra
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] != ' '){
            primeira_letra = getch();
            printf("A tecla pressionada foi '%c'\n", primeira_letra);
            break;
        }
    }
    printf("TAMANHO DA FRASE = %d\n", strlen(s));
    //varrendo de cima para baixo para achar a primeira letra
    for (int i = tamanho; i > 0 ; --i) {
        if (s[i] != ' '){
            char c;
            c = getch();
            printf("A tecla pressionada foi '%c'\n", c);
            break;
        }

    }

    printf("\nPrimeira letra = [%c] Ultima letra [%c]\n", primeira_letra, ultima_letra);



    //alocacao dinamica para o novo vetor
    int qtd = primeira_letra - ultima_letra + 1;
    novo_vetor = (char *) malloc((qtd + 1) * sizeof (char ));
    if(novo_vetor == NULL){
        printf("Erro de alocacao...");
        return NULL;
    }

    //atribuindo os caracteres no novo vetor
    for (int i = 0; i < qtd; ++i) {
        //novo_vetor[i] = s[i];
        //printf("%c", novo_vetor[i]);
    }

    return novo_vetor;
}