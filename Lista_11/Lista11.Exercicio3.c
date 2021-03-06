/*
Crie uma lista encadeada onde cada elemento contém informações de um aluno. Crie
funções para o gerenciamento da lista: imprimir, excluir, incluir e alterar.
Aplique essas funções a partir de uma lista carregado do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elemento
{
    char nome[50];         //nome do aluno
    float nota;            //media do aluno
    struct elemento *prox; //ponteiro para o proximo elemento
};
typedef struct elemento Elemento;

Elemento *cria(void);
Elemento *insere(Elemento *lst, char nome[50], float nota);
Elemento *retira(Elemento *l, char nome[50], float v);
Elemento *altera(Elemento *l, char nome[50], float nota);
Elemento *busca(Elemento *l, char nome[50], float v);
void imprime(Elemento *lst);

int main()
{
    char nome[50];
    float nota;
    FILE *p;
    Elemento *lst = cria();

    p = fopen("Lista11.Exercicio3.txt", "r");
    if (p == NULL)
    {
        printf("Nao foi possivel abrir o arquivo..\n");
        return 1;
    }

    while (fscanf(p, "%s %f", nome, &nota) != EOF)
    {
        lst = insere(lst, nome, nota);
    }

    lst = insere(lst, "patrick", 10);

    lst = retira(lst, "Michel", 9);

    imprime(lst);

    lst = altera(lst, "patrick", 10);

    imprime(lst);
}

Elemento *cria(void)
{
    return NULL;
}

/*função que insere um elemento na lista encadeada*/
Elemento *insere(Elemento *lst, char nome[50], float nota)
{

    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
    if (novo == NULL)
    {
        printf("Falha de alocacao.\n");
        exit(1);
    }

    strcpy(novo->nome, nome);
    novo->nota = nota;
    novo->prox = lst;

    return novo;
}

/*função que imprime toda lista encadeada*/
void imprime(Elemento *lst)
{
    Elemento *p;
    for (p = lst; p != NULL; p = p->prox)
    {
        printf("\n");
        printf("--------------------------------------------\n");
        printf("Nome = %s\nnota -> %.1f\n", p->nome, p->nota);
        printf("--------------------------------------------\n");
        printf("\n");
    }
}

/* função retira: retira elemento da lista */
Elemento *retira(Elemento *l, char nome[50], float v)
{
    Elemento *ant = NULL; /* ponteiro para elemento anterior */
    Elemento *p = l;      /* ponteiro para percorrer a lista*/
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->nota != v)
    {
        ant = p;
        p = p->prox;
    }
    /* verifica se achou elemento */
    if (p == NULL)
        return l; /* não achou: retorna lista original */
    /* retira elemento */
    if (ant == NULL)
    {
        /* retira elemento do inicio */
        l = p->prox;
    }
    else
    {
        /* retira elemento do meio da lista */
        ant->prox = p->prox;
    }
    free(p);
    return l;
}

/* função busca: busca um elemento na lista */
Elemento *busca(Elemento *l, char nome[50], float v)
{
    int compara = 1;
    Elemento *p;
    printf("\n");
    for (p = l; p != NULL; p = p->prox)
    {
        compara = (strcmp(nome, p->nome));
        if (compara == 0)
        {
            return p;
        }
    }
    printf("\nerro na busca\n");
    return NULL; /* não achou o elemento */
}

/*função que altera nome ou nota de um aluno na lista encadeada*/
Elemento *altera(Elemento *l, char nome[50], float nota)
{
    char novo_nome[50];
    int resposta;
    Elemento *p;
    p = busca(l, nome, nota);
    printf("Nome atual = %s\nDeseja mudar? [0 -> SIM 1 -> NAO] = ");
    scanf("%d", &resposta);
    if (resposta == 0)
    {
        printf("Digite o novo nome = ");
        scanf("%s", &novo_nome);
        strcpy(p->nome, novo_nome);
    }
    return p;
}