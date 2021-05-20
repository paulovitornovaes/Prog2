#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct elemento
{
    int info;              /* Valor inteiro armazenado */
    struct elemento *prox; /* Ponteiro para o próximo elemento */
};
typedef struct elemento Elemento;

Elemento *lst_insere(Elemento *lst, int val);
Elemento *lst_cria(void);
void lst_imprime_oneline(Elemento *lst);
void lst_libera(Elemento *lst);
Elemento *copia(Elemento *lst);
Elemento *lst_append(Elemento *lst, int val);

int main()
{
    Elemento *lst = lst_cria();
    Elemento *plst;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int numero = rand() % 10;
        lst = lst_insere(lst, numero);
        //printf("Inserindo numero %.2f na lista...\n", numero);
    }
    printf("Lista gerada aleatoriamente...\n");
    lst_imprime_oneline(lst);
    printf("\n");
    printf("Copia da lista acima...\n");
    plst = copia(lst);
    lst_imprime_oneline(plst);
    printf("\n");
    printf("Mudando o valor do primeiro elemento da copia para 11...\n");
    printf("\n");
    plst->info = 11;
    printf("Lista original...\n");
    lst_imprime_oneline(lst);
    printf("\n");
    printf("Copia alterada da lista acima...\n");
    lst_imprime_oneline(plst);
    printf("\n");

    lst_libera(lst);
    lst_libera(plst);
}

Elemento *copia(Elemento *lst)
{
    Elemento *clst = (Elemento *)malloc(sizeof(Elemento));
    Elemento *p;
    if (clst == NULL)
    {
        printf("Falha na alocacao");
        exit(1);
    }
    clst = NULL;
    for (p = lst; p != NULL; p = p->prox)
    {
        clst = lst_append(clst, p->info);
    }
    return clst;
}

Elemento *lst_append(Elemento *lst, int val)
{
    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
    Elemento *p = lst;
    if (novo == NULL)
    {
        printf("Falha na alocacao");
        exit(1);
    }

    if (p == NULL)
    {
        lst = lst_insere(p, val);
    }
    else
    {
        while (p->prox != NULL)
        {
            p = p->prox;
        }
        novo->info = val;
        novo->prox = NULL;
        p->prox = novo;
    }
    return lst;
}

Elemento *lst_cria(void)
{
    return NULL;
}

void lst_imprime_oneline(Elemento *lst)
{
    Elemento *p;
    for (p = lst; p != NULL; p = p->prox)
    {
        printf("[info = %d] ", p->info);
    }
    printf("\n");
}

Elemento *lst_insere(Elemento *lst, int val)
{
    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
    if (novo == NULL)
    {
        printf("Falha na alocacao");
        exit(1);
    }

    novo->info = val;
    novo->prox = lst;
    return novo;
}

void lst_libera(Elemento *lst)
{
    Elemento *p = lst;
    Elemento *t;
    while (p != NULL)
    {
        t = p->prox; /* guarda referência p/ próx. elemento */
        free(p);     /* libera a memória apontada por p */
        p = t;       /* faz p apontar para o próximo */
    }
}