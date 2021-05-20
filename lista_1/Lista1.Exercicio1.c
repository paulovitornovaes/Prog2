#include <stdio.h>
/*Fazer um programa para receber um número inteiro de segundos do usuário e imprimir
a quantidade correspondente em horas, minutos e segundos. */

int main()
{
    int segundos, horas, minutos;
    printf("Digite a quantidade de segundos: \n");
    scanf("%i", &segundos);
    printf("Voce digitou %i segundos.\n", segundos);
    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;
    printf("Sao %i horas, %i minutos e %i segundos", horas, minutos, segundos);
    return 0;
}