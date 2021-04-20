#include <stdlib.h>

struct aluno
{
    int mat;       /* Matricula do aluno */
    char nome[81]; /* Nome do aluno */
};
typedef struct aluno Aluno;

struct prova
{
    Aluno a;              /* Aluno que fez a prova */
    float q1, q2, q3, q4; /* Nota em cada questao */
};
typedef struct prova Prova;

void ordena(int n, Prova **v);

int compara(Prova *n, Prova *x);

void troca(Prova **p1, Prova **p2);

int main()
{   
    int n = 2;
    Prova **provas = (Prova **) malloc(n * sizeof(Prova *));
    
    Aluno aluno1 = {1, "Paulo"};
    Prova prova1 = {aluno1, 100, 2, 3 ,4};
    
    Aluno aluno2 = {2, "Diogo"};
    Prova prova2 = {aluno2, 12, 2, 3 ,4};

    provas[0] = &prova1;
    provas[1] = &prova2;

    ordena(n, provas);

    printf("%s", provas[0]->a.nome);

    return 0;
}

void ordena(int n, Prova **v)
{
    int fim, i;
    for (fim = n - 1; fim > 0; fim--)
        for (i = 0; i < fim; i++)
            if (compara(v[i], v[i + 1]))
                troca(&v[i], &v[i + 1]);
}

int compara(Prova *n, Prova *x)
{
    int soman = (n->q1 + n->q2 + n->q3 + n->q4) / 4;
    int somax = (x->q1 + x->q2 + x->q3 + x->q4) / 4;
     
    if (soman <= somax)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void troca(Prova **p1, Prova **p2){
    Prova *auxiliar = *p1;

    *p1 = *p2;
    *p2 = auxiliar;
}