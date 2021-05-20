/*
Um cadastro de pessoas é representado por um vetor de ponteiros para o tipo Pessoa.
Considere que esse vetor está em ordem crescente de código, e, além disso, o código é a
identificação única da pessoa. Aplicando a técnica de busca binária, implemente uma função que
verifique se um código fornecido como parâmetro existe no vetor. A função retorna o ponteiro
para esta pessoa (Pessoa *). Caso contrário, a função deve retornar NULL. A função recebe como
parâmetros o ponteiro vet, para o primeiro elemento do vetor, o inteiro n, que representa o
tamanho do vetor, e o código. Seu protótipo é:
Pessoa* busca(int n, Pessoa** vet, int codigo);
Faça também um programa para testar essa função.

*/

#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    int codigo;
    char nome[81];
};
typedef struct pessoa Pessoa;

Pessoa *busca(int n, Pessoa **vet, int codigo);

int main()
{
    int n = 3;
    Pessoa **pessoas = (Pessoa **)malloc(n * sizeof(Pessoa *));
    Pessoa pessoa0 = {333, "Funala"};
    Pessoa pessoa1 = {444, "Cliclana"};
    Pessoa pessoa2 = {666, "Pedro"};

    pessoas[0] = &pessoa0;
    pessoas[1] = &pessoa1;
    pessoas[2] = &pessoa2;

    Pessoa *ppessoa = busca(n, pessoas, 666);
    printf("%s\n", ppessoa->nome);
}

Pessoa *busca(int n, Pessoa **vet, int codigo)
{
    /* no início consideramos todo o vetor */
    int ini = 0;
    int fim = n - 1;
    /* enquanto a parte restante for maior que zero */
    while (ini <= fim)
    {
        int meio = (ini + fim) / 2;
        if (codigo < vet[meio]->codigo)
        {
            fim = meio - 1;
        }
        else if (codigo > vet[meio]->codigo)
        {
            ini = meio + 1;
        }
        else
        {
            return vet[meio];
        }
    }
    /* não encontrou: restou parte de tamanho zero */
    return NULL;
}