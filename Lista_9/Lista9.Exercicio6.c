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