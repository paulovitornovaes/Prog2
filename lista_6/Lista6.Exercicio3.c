/*
O cadastro de uma turma de n alunos é representado por um vetor de inteiros,
contendo a matrícula de cada aluno, e um vetor de reais, contendo a nota final de cada
aluno, de tal modo que para uma mesma posição do vetor (mesmo índice), a matrícula e
a nota se referem a um mesmo estudante. Considere que um aluno está aprovado se
tem nota final maior ou igual a 5,0. Escreva uma função que recebe como parâmetros o
inteiro n, o ponteiro mat para o vetor de matrículas, o ponteiro notas para o vetor de
notas e um ponteiro para a variável inteira tam. A função deve contar o número de
alunos aprovados, criar um novo vetor de inteiros alocado dinamicamente com o

tamanho exato para conter apenas a matrícula desses alunos, e armazenar no novo
vetor as matrículas correspondentes. Finalmente, a função deverá armazenar o
tamanho do novo vetor na variável tam e retornar o ponteiro para seu primeiro
elemento. O protótipo da função é:
int *aprovados(int n, int *mat, float *notas, int *tam);
 */

#include <stdio.h>
#include <string.h>

int *aprovados(int n, int *mat, float *notas, int *tam);

void main (void) {
    int *matricula, i;
    int tam;
    float *nota;


    printf("Quantos alunos: \n");
    scanf("%d", &tam);


    matricula = (int  *)malloc(tam * sizeof (int));
    if (matricula == NULL){
        printf("Nao consegui alocação dinamica\n");
    }

    nota = (float  *)malloc(tam * sizeof (float));
    if (nota == NULL){
        printf("Nao consegui alocação dinamica\n");
    }


    for(i=0; i < tam; i++) {
        printf("Matricula do aluno %d: ", i + 1);
        scanf("%d", &matricula[i]);

        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);

        printf("\n");
    }

    /*for(i=0; i < tam; i++) {
        printf("Aluno %d - nota %g\n", matricula[i], nota[i]);
    }*/
    printf("\n");

    int *aprovadosfinal = aprovados(tam, matricula, nota, &tam);

    printf("\nAlunos aprovados: \n");

    for(i=0; i < tam; i++) {
        printf("Aluno %d\n", aprovadosfinal[i]);
    }
    printf("\n\n", tam);

    free(matricula);
    free(nota);
    free(aprovadosfinal);
}


int *aprovados(int n, int *mat, float *notas, int *tam) {
    int numaprovados = 0, novotam = 0, i;
    int *aprovados;


    for(i=0; i < *tam; i++) {
        if(notas[i] >= 5) {
            numaprovados++;
        }
    }


    aprovados = (int  *)malloc(numaprovados * sizeof (int));
    if (aprovados == NULL){
        printf("Nao consegui alocação dinamica\n");
    }

    for(i=0; i < *tam; i++) {
        if(notas[i] >= 5) {
            aprovados[novotam] = mat[i];
            novotam++;
        }
    }

    *tam = numaprovados;

    return aprovados;

}