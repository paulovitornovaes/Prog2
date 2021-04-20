#include <stdio.h>
#include <stdlib.h>

typedef struct Livro
{
    int ano;
    char titulo[100];
    char autor[100];
    int nVolume; // Número de exemplares de um dado livro.
    float preco;
} Livro;

typedef struct Biblioteca
{
    Livro **V;  // Armazena a informação de n livros !!
    int nLivros // Número de livros existentes na biblioteca.
} Biblioteca;

Livro * fillLivro();
Biblioteca * fillBiblioteca(int numLivros);
void valorBiblioteca(Biblioteca * b1, int numLivros);
Livro * maiorBiblioteca(Biblioteca * b1, int numLivros);

int main()
{
    Biblioteca *blib = fillBiblioteca(3);
    valorBiblioteca(blib, blib->nLivros);
    Livro * ml = maiorBiblioteca(blib, blib->nLivros);
    if (ml == NULL)
    {
        printf("Alocacao dinamica falhou");
    }
    printf("\n\nDados dos livros...\n");       
    for (int i = 0; i < blib->nLivros; i++)
    {
        printf("---Livro %d:\n", i+1);
        printf("-Ano: %d\n", blib->V[i]->ano);
        printf("-Titulo: %s\n", blib->V[i]->titulo);
        printf("-Autor: %s\n", blib->V[i]->autor);
        printf("-Numero de exemplares: %d\n", blib->V[i]->nVolume);
        printf("-Preco: %.2f\n\n", blib->V[i]->preco);
    }
    printf("Titulo do livro com maior numero de exemplares:\n-%s\n", ml->titulo);

    for (int i = 0; i < blib->nLivros; i++)
    {
        free(blib->V[i]);
    }
    free(blib->V);
    free(blib);

    return 0;
}

Livro * fillLivro()
{
    Livro *l = (Livro*) malloc(sizeof(Livro));
    if (l == NULL)
    {
        printf("Alocacao dinamica falhou");
    }  

    printf("Digite o ano do livro: ");
    scanf("%d", &l->ano);
    printf("Digite o titulo do livro: ");
    scanf(" %99[^\n]", l->titulo);
    printf("Digite o autor do livro: ");
    scanf(" %99[^\n]", l->autor);
    printf("Digite a quantidade do livro: ");
    scanf("%d", &l->nVolume);
    printf("Digite o preco do livro: ");
    scanf("%f", &l->preco);

    return l;
}

Biblioteca * fillBiblioteca(int numLivros)
{
    Biblioteca * b = (Biblioteca*) malloc(sizeof(Biblioteca));
    if (b == NULL)
    {
        printf("Alocacao dinamica falhou");
    }
    b->V = (Livro**) malloc(numLivros * sizeof(Livro*));
    if (b->V == NULL)
    {
        printf("Alocacao dinamica falhou");
    }
    b->nLivros = numLivros;

    for (int i = 0; i < numLivros; i++)
    {
        printf("Recenbendo dados do livro %d...\n", i+1);
        b->V[i] = fillLivro();
        printf("\n");
    }
    return b;
}

void valorBiblioteca(Biblioteca * b1, int numLivros)
{
    float valorTotal = 0.0;
    for (int i = 0; i < numLivros; i++)
    {
        valorTotal += b1->V[i]->preco * b1->V[i]->nVolume;
    }
    printf("O Valor da biblioteca eh de R$%.2f\n", valorTotal);
}

Livro * maiorBiblioteca(Biblioteca * b1, int numLivros)
{
    Livro* ml = b1->V[0];    
    for (int i = 0; i < numLivros; i++)
    {
        if (b1->V[i]->nVolume > ml->nVolume)
        {
            ml = b1->V[i];
        }  
    }
    return ml;
}