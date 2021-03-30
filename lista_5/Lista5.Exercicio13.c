#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20] = "Diogo";
    char letra = 'o';
    printf("funcao 'strchr(vet, c)' que devolve um ponteiro para a primeira ocorrencia do char c em vet.\n");
    printf("O endereco da primeira ocorrencia da letra %c em %s: %d\n", letra, nome,strchr(nome, 'o'));


    printf("funcao 'strcpy(dest, font)' que copia o valor da string font na string dest.\n");
    char exemplo[20];
    strcpy(exemplo, nome);
    nome[0] = 'b'; // Se tivesse acontecido uma atribuicao de endereco a impressao abaixo resultaria em "biogo"
    printf("Valor do alvo da funcao strcpy: %s\n", exemplo);

    printf("funcao 'strspn(str1, str2)' que retorna a quantidade de elementos em comum no incio das 2 duas str.\n");
    int tam;
    char nome2[20] = "Diogo Valongo";
    strcat(exemplo,"Valongo");
    tam = strspn(nome2, exemplo);
    printf("quantidade de elementos em comum no incio de '%s' e '%s': %d",nome2, exemplo, tam);

    return 0;
}