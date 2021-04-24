#include <stdio.h>
#include <string.h> /* função strstr (compara strings) */

float busca(char *arquivo, char *matricula);

int main(void)
{
    char matricula[10]; /* armazena a matricula que o uuario quer analisar */
    float nota; /* nota vai receber o retorno da funçao */

    /* pede ao usuário a matricula */
    printf("Digite a matricula: ");
    scanf("%s", matricula);

    //chamada da função, nota vai receber o valor encontrado
    nota = busca("Lista10.Exercicio2.txt", matricula);

    //print da nota encontrada
    printf("A nota encontrada foi de %.1f\n", nota);

    return 0;
}

float busca(char *arquivo, char *matricula)
{
    int n = 0;               /* número da linha a ser lida */
    float nota;              /*nota que vai ser encontrada */
    char matricula_lida[10]; /*matricula que vai ser lida no arquivo */

    FILE *arq; /* ponteiro do arquivo de entrada */

    /* abre arquivos para leitura */
    arq = fopen("Lista10.Exercicio2.txt", "rt");
    if (arq == NULL)
    {
        printf("ERRO\n");
        return -1;
    }

    /* lê linha a linha */
    while (fscanf(arq, "%s %f", matricula_lida, &nota) != EOF)
    {
        if (strstr(matricula_lida, matricula))  //se forem iguais retorna nota
        {
            return nota;
        }
    }

    //senao retorna -1.0
    return -1.0;

    /* fecha arquivo */
    fclose(arq);
}