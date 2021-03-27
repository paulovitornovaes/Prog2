#include <stdio.h>
#include <string.h>
#define MAX 30


int main(){
    int compara;
    char palavra1[MAX] = "Paulo";
    char palavra2[MAX] = "Paulo";

    compara = strcmp(palavra1, palavra2);

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);

    if (compara == 0){
        printf("As duas palavras sao identicas!\n");
    } else{
        printf("As palavras tem alguma diferenca!\n");

        if (strstr(palavra1, palavra2) != NULL) {
            for(int i = 0; i < 20; i++) {
                if(palavra2[i] == palavra1[i]) {
                i = 20;
                printf("Palavra = [%s] / Substring [%s]",palavra1 ,palavra2);
                }
            }

        }
    }

    return 0;

}

