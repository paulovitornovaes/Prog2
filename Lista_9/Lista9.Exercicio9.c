#include <stdio.h>
#define MAX 4

struct aluno
{
    int matricula;
    float media;    
};
typedef struct aluno ALUNO;

void ordena(ALUNO turma[], int tam);

int main()
{
    ALUNO turma[MAX];
    turma[0] = (ALUNO){ 1, 10.0};
    turma[1] = (ALUNO){ 2, 7.0};
    turma[2] = (ALUNO){ 3, 8.0};
    turma[3] = (ALUNO){ 4, 3.0};

    ordena(turma, MAX);
    
    for (int i = 0; i < MAX; i++)
    {
        printf("Matricula = %d\nMedia = %.1f\n\n", turma[i].matricula, turma[i].media);
    }
}

void ordena(ALUNO turma[], int tam)
{
    int i, foraOrdem, jaOrdenados = 0;
    ALUNO temp;
    do
    {
        foraOrdem = 0;
        for (i = 0; i < 4 - 1 - jaOrdenados; i++)
        {
            if (turma[i].media > turma[i + 1].media)
            {
                temp = turma[i];
                turma[i] = turma[i + 1];
                turma[i + 1] = temp;
                foraOrdem = 1;
            }
        }
        jaOrdenados++;
    } while (foraOrdem);
}