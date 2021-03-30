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