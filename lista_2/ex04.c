#include <stdio.h>
#include <stdlib.h>
//#include <time.h> //uso o time para gerar valores aleatorios, ele serve como uma semente, entao os segundos vao ajudar a ''randomizar''

int main(){
    char letra = 0, i = 0;
    //Deixei como comentario pois pela minha interpretacao nao vai ser necessario a randomizacao toda hora...
    // srand(time(NULL)); //uso do time como semente para gerar sempre numeros aleatorios
    char sorteado = 'a' + rand() % 26;
    // como o char eh um valor decimal, eu somei o a que eh o primeiro char com o rand no limite de 26

    while (sorteado != letra){
        i++;
        printf("Digite uma letra: \n");
        fflush(stdin);
        scanf("%c", &letra);
        if(letra == sorteado){
            continue;
        }
        if(letra > sorteado){
            printf("Letra eh maior que sorteado!\n");
        } else
            printf("Letra menor que o sorteado!\n");

    }
    printf("Voce acertou na tentativa %d !", i);
    return 0;
}