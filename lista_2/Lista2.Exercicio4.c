/* 
Escreva um programa que sorteie uma letra do alfabeto de ‘a’ a ‘z’ e o usuário é
perguntado qual é essa letra. O programa deve informar se a letra é maior ou menor e
quando o usuário a acertou.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

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