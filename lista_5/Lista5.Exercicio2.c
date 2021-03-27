#include<stdio.h>
#include<string.h>

main(void)

{
    char texto[]= "foi muito facil"; //vetor de caracteres
    int i; // inteiro i para incremento

    // i começa do 0
    // termina quando o texto[i] for nulo (final do vetor)
    //i é incrementado
    for (i = 0; texto[i]!='\0'; i++)
    {
        //se chegar no espaço em branco o loop é interrompido
        if (texto[i] == ' ') break;
    }
    // incrementa 1 vez apenas o int i para pular o caracter espaço
    i++;

    // o loop vai terminar no final do programa, incrementando o valor de i a cada loop
    for ( ; texto[i]!='\0'; i++)
    {
        //imprime o caracter na tela
        printf("%c", texto[i]);
    }
}
/* com isso o programa foi até um certo espaço do vetor, deu break e dpos criou
outro loop, dessa vez sem um break e foi imprimindo até chegar no final */