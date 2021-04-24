#include <stdio.h>
#include <string.h>

float media(char *mat, char *nome_arquivo);

int main()
{
    float nota;

    nota = media("8820324-3", "Lista10.Exercicio3.txt");

    printf("A nota do aluno foi %.1f\n", nota);
}

float media(char *mat, char *nome_arquivo)
{
    char matricula[10];
    float a, b, c;
    FILE *arq; /* ponteiro do arquivo de entrada */

    arq = fopen(nome_arquivo, "r"); /* abre arquivos para leitura */
    if (arq == NULL)
    {
        printf("ERRO\n");
        return -1;
    }

    while (fscanf(arq, "%s %f %f %f", matricula, &a, &b, &c) != EOF)
    {
        if (strstr(matricula, mat))
        {
            return (a + b + c) / 3;
        }
    }

    fclose(arq);

    return -1;
}