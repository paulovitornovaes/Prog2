/*
a. Implemente a função atribui, conforme o seu protótipo (dica: somente 1 linha de
código no corpo da função).
b. Implemente a função get_sobrenome, conforme o seu protótipo, que retorna a última
palavra do nome.
c. O que será impresso no segundo printf?
d. O que será impresso no terceiro printf?
*/

#define MAX 4
#define MAXNOME 31
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void atribui(char **nomes, int indice, char *nome);

char *get_sobrenome(char *nome);

main()
{
    int i;
    char **nomes;
    char *sobrenome;
    nomes = (char **)malloc(MAX * sizeof(char *));
    for (i = 0; i < MAX; i++)
    {
        nomes[i] = (char *)malloc(sizeof(char) * MAXNOME);
    }
    atribui(nomes, 0, "Fulano Silva");
    atribui(nomes, 1, "Maria do Carmo");
    atribui(nomes, 2, "Beltrano Belmonte");
    atribui(nomes, 3, "Pedro dos Santos");
    for (i = 0; i < MAX; i++)
    {
        sobrenome = get_sobrenome(nomes[i]);
        printf("\n%s ", sobrenome);
        printf(" %d", strlen(sobrenome) > 5 ? i : 0); // 2o printf
    }

    printf("\n%c", nomes[0][3]); // 3o printf
}

void atribui(char **nomes, int indice, char *nome)
{

    strcpy(nomes[indice], nome);
}

char *get_sobrenome(char *nome)
{
    char *sobrenome;
    int i, j;
    for (i = strlen(nome); nome[i] != ' '; i--)
        ;
    i++;
    sobrenome = nome + i;
    return sobrenome;
}


/*
9.4.c) O segundo printf imprime 0 caso a palavra analizada tenha 5 ou menos letras, se a palavra tiver mais de 5 letras
esse prinft imprime seu indice no array nomes.

9.4.d) O terceiro printf imprime um 'a', já que ele esta pegando a quarta letra do primeiro nome de nomes, que no caso é "Fulano" e a letra é o 'a'.
*/