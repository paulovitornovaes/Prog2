/*
Criar um tipo Aluno e um tipo Materia tal como dado abaixo:

typedef struct Aluno {
int matricula;
float *vNotas; // Armazena as 5 notas de um aluno ao longo de um ano.
char nome[100];
}Aluno;
typedef struct Matéria {
Aluno *V; // Armazena a informação de n alunos !!
float media[5]; // Armazena as 5 médias do ano.
int nAlunos // Número de alunos matriculados no curso.
}Materia;

(A) Criar uma função Aluno* fillAluno() que preenche os campos da estrutura do tipo Aluno com
dados fornecidos pelo usuário.

(B) Criar uma função Materia * fillMateria(int numAlunos) que preenche os campos da estrutura
do tipo Materia realizando chamadas a função fillAluno em um número de vezes igual ao número
contido na variável numAlunos.

(C) Criar uma função void mediaMateria(Materia *m1) que fornece a média de cada prova do
ano para os alunos contidos na variável m1 e assim preenche o campo media de m1.

(D) Criar uma função void mostraMateria(Materia *m1) que mostra as informações dos alunos
contidas na variável m1.

(E) Criar um programa que ilustra o funcionamento das funções anteriores.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno
{
    int matricula;
    float *vNotas; // Armazena as 5 notas de um aluno ao longo de um ano.
    char nome[100];
} Aluno;
typedef struct Matéria
{
    Aluno *V;       // Armazena a informação de n alunos !!
    float media[5]; // Armazena as 5 médias do ano.
    int nAlunos     // Número de alunos matriculados no curso.
} Materia;

Aluno* fillAluno();
Materia* fillMateria(int numAlunos);
void mediaMateria(Materia *m1);
void mostraMateria(Materia *m1);

int main()
{
    Materia *mat = fillMateria(3);
    mediaMateria(mat);
    mostraMateria(mat);
    printf("\n");   
    for (int i = 0; i < 5; i++)
    {
        printf("Media da %d prova: %.2f\n", i+1, mat->media[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        free(mat->V[i].vNotas);
        free(&mat->V[i]);
    }
    free(mat->V);
    free(mat);
    
    return 0;
}

Aluno* fillAluno()
{
    Aluno *a = (Aluno*) malloc(sizeof(Aluno));
    if (a == NULL)
    {
        printf("Alocacao dinamica falhou");
    }
    a->vNotas = (float*) malloc(5 * sizeof(float));
    if (a->vNotas == NULL)
    {
        printf("Alocacao dinamica falhou");
    }

    printf("Digite a matricula do aluno: ");
    scanf("%d", &a->matricula);
    printf("Digite as notas do aluno...\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d nota: ", i+1);
        scanf("%f", &a->vNotas[i]);        
    }
    printf("Digite o nome do aluno: ");
    scanf(" %s", a->nome);
    return a;
}

Materia * fillMateria(int numAlunos)
{
    Materia * m = (Materia*) malloc(sizeof(Materia));
    if (m == NULL)
    {
        printf("Alocacao dinamica falhou");
    }
    m->V = (Aluno*) malloc(numAlunos * sizeof(Aluno));
    if (m->V == NULL)
    {
        printf("Alocacao dinamica falhou");
    }   
    m->nAlunos = numAlunos;
    for (int i = 0; i < numAlunos; i++)
    {
        printf("Recenbendo dados do aluno %d...\n", i+1);
        m->V[i] = *fillAluno();
        printf("\n");
    }    
    for (int i = 0; i < 5; i++)
    {
        m->media[i] = 0.0;           
    }

    return m;
}

void mediaMateria(Materia *m1)
{
    for (int j = 0; j < 5; j++)
    {
        m1->media[j] = 0.0;
        for (int i = 0; i < m1->nAlunos; i++)
        {
            m1->media[j] += m1->V[i].vNotas[j];
        }
        m1->media[j] /= m1->nAlunos;   
    }
}

void mostraMateria(Materia *m1)
{
    for (int i = 0; i < m1->nAlunos; i++)
    {
        printf("\n");
        printf("-Matricula: %d\n", m1->V[i].matricula);
        printf("-Nome: %s\n", m1->V[i].nome);
        for (int j = 0; j < 5; j++)
        {
            printf("-Nota %d: %.2f\n", j+1, m1->V[i].vNotas[j]);
        }        
    }    
}
