/*
Faça um programa que dado um nome completo, retorne a abreviatura deste nome. Não se devem
abreviar as preposições como: do, de, etc. A abreviatura deve vir separada por pontos. Ex: Paulo
Jose de Almeida Prado. Abreviatura: P.J.A.P.
*/

#include <stdio.h>

int main()
{
    char nome[80] = "Paulo Jose de Almeida Prado";
    char abv[80];
    int count = 0;
    for (int i = 0; nome[i] != 0; i++)
    {
        if (nome[i] >= 'A' && nome[i] <= 'Z')
        {
            abv[2*count] = nome[i];
            abv[2*count + 1] = '.';
            count++;
        }                
    }
    abv[2*count] = 0;
    printf("%s", abv);
    return abv;
}