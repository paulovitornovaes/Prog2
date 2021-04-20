#include <stdio.h>
#define MAX 3

struct aluno
{
    int matricula;
    float media;
};
typedef struct aluno ALUNO;

void le(ALUNO turma[]);
void imprime(ALUNO turma[]);
void ordena_medias(ALUNO turma[]);

int main(void)
{
    struct aluno turma[MAX];
    le(turma);

    puts(" Imprimindo dados lidos da turma.");
    puts(" Digite qualquer coisa para continuar .");
    getchar();
    imprime(turma);
    ordena_medias(turma);
    puts(" Imprimindo dados ordenados da turma.");
    puts(" Digite qualquer coisa para continuar.");
    getchar();
    imprime(turma);
    getchar();
}

void imprime(ALUNO turma[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("Matricula = %d\nMedia = %f\n\n", turma[i].matricula, turma[i].media);
    }    
}

void le(ALUNO turma[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("Recebendo dados do Aluno %d...\n", i+1);
        printf("Digite a matricula do aluno: ");
        scanf("%d", &turma[i].matricula);
        printf("Digite a media do aluno: ");
        scanf("%f", &turma[i].media);
        printf("\n");
    }
}

void ordena_medias(ALUNO turma[])
{
    int i, foraOrdem, jaOrdenados = 0;
    ALUNO temp;
    do
    {
        foraOrdem = 0;
        for (i = 0; i < MAX - 1 - jaOrdenados; i++)
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