/*
Mostre e explique (comentando as linhas de código) o que será impresso na tela:
#include<stdio.h>
#include<string.h>
main(void)
{
char texto[]= "foi muito facil";
int i;
for (i = 0; texto[i]!='\0'; i++)
{
if (texto[i] == ' ') break;
}
i++;
for ( ; texto[i]!='\0'; i++)
{
printf("%c", texto[i]);
}
}
*/

#include<stdio.h>
#include<string.h>

main(void)

{
    char texto[]= "foi muito facil"; //vetor de caracteres
    int i; // inteiro i para incremento

    // i come�a do 0
    // termina quando o texto[i] for nulo (final do vetor)
    //i � incrementado
    for (i = 0; texto[i]!='\0'; i++)
    {
        //se chegar no espa�o em branco o loop � interrompido
        if (texto[i] == ' ') break;
    }
    // incrementa 1 vez apenas o int i para pular o caracter espa�o
    i++;

    // o loop vai terminar no final do programa, incrementando o valor de i a cada loop
    for ( ; texto[i]!='\0'; i++)
    {
        //imprime o caracter na tela
        printf("%c", texto[i]);
    }
}
/* com isso o programa foi at� um certo espa�o do vetor, deu break e dpos criou
outro loop, dessa vez sem um break e foi imprimindo at� chegar no final */