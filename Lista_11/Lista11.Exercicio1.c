/*
Considere uma lista encadeada que armazena valores reais, na qual cada elemento é do
tipo Elemento, descrito abaixo:
struct elemento {
float info; 
struct elemento *prox; 
};
typedef struct elemento Elemento;
Escreva uma função que recebe como parâmetros o ponteiro lst, para o primeiro elemento
da lista, e os valores min e max, e remove e libera todos os elementos desta lista que
armazenam valores menores que min ou maiores que max. A função deve retornar o
ponteiro para o início da lista, que pode ter sido modificado, e tem o seguinte protótipo:
Elemento* filtra(Elemento *lst, float min, float max);
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct elemento
{
    float info;            /* Valor real armazenado */
    struct elemento *prox; /* Ponteiro para o próximo elemento */
};
typedef struct elemento Elemento;

int lista_nao_filtrada(Elemento *lst, float min, float max);
Elemento *filtra(Elemento *lst, float min, float max);
Elemento *lst_insere(Elemento *lst, float val);
Elemento *lst_cria(void);
void lst_imprime_oneline(Elemento *lst);
void lst_libera(Elemento *lst);

int main()
{
    Elemento *lst = lst_cria();
    float minimo = 4.0f;
    float maximo = 6.0f;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        float numero = (float)(rand() % 10);
        lst = lst_insere(lst, numero);
        //printf("Inserindo numero %.2f na lista...\n", numero);
    }
    printf("Lista gerada aleatoriamente...\n");
    lst_imprime_oneline(lst);
    lst = filtra(lst, minimo, maximo);
    printf("Lista apos aplicacao do filtro onde o minimo eh %.2f, e o maximo eh %.2f...\n", minimo, maximo);
    lst_imprime_oneline(lst);

    lst_libera(lst);
}

Elemento *filtra(Elemento *lst, float min, float max)
{
    Elemento *ant = NULL; /* ponteiro para elemento anterior */
    Elemento *p = lst;    /* ponteiro para percorrer a lista */
    /* procura elemento na lista, guardando ref. do anterior */
    while (lista_nao_filtrada(lst, min, max))
    {
        ant = NULL;
        p = lst;
        while (p != NULL && !(p->info < min || p->info > max))
        {
            ant = p;
            p = p->prox;
        }
        /* verifica se achou elemento */
        if (p == NULL)
            return lst; /* não achou: retorna lista original */
        /* retira elemento */
        if (ant == NULL)
        { /* retira o 1o elemento da lista */
            lst = p->prox;
        }
        else
        { /* retira elemento do meio da lista */
            ant->prox = p->prox;
        }
        free(p);
    }
    return lst;
}

Elemento *lst_cria(void)
{
    return NULL;
}

int lista_nao_filtrada(Elemento *lst, float min, float max)
{
    Elemento *p;
    for (p = lst; p != NULL; p = p->prox)
    {
        if (p->info < min || p->info > max)
        {
            return 1;
        }
    }
    return 0;
}

void lst_imprime_oneline(Elemento *lst)
{
    Elemento *p;
    for (p = lst; p != NULL; p = p->prox)
    {
        printf("[info = %.2f] ", p->info);
    }
    printf("\n");
}

Elemento *lst_insere(Elemento *lst, float val)
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