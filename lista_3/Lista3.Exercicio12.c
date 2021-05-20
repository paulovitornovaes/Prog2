/* 
Fazer um programa para receber uma frase do usuário, caracter a caracter usando getch() e
armazenando no vetor (máx. 80 caracteres). Quando o usuário digita enter (‘\r’) a recepção é
finalizada. Mostrar cada palavra da frase em uma linha separada
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


#define MAX 100

void mostra(char *vet,int num);

int main(){

    int i,num = 0;
    char vet[MAX], end = '\r';

    printf("Sua frase vai ser printada:\n");

    for (i = 0; i < MAX;i++)
    {

        vet[i] = getch();
        printf("%c",vet[i]);
        num++;
        if (vet[i] == end)
        {
            break;
        }

    }
    printf("Sua frase digitada sera´esta:\n");
    //chamei a função montra com a duas variaveis//
    mostra(vet,num);
    return 0;

}

void mostra(char *vet,int num)
{
    int i;
    for (i=0;i<num;i++)
    {
        if(vet[i] == ' '){
            printf("\n");
        }
        printf("%c",vet[i]);

    }

}