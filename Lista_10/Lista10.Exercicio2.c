/*
Considere um arquivo texto onde cada linha contém a matrícula de um aluno e seu
respectivo CR, como ilustra o exemplo a seguir:
9010087-2 7.3
8820324-3 8.7
9210478-5 9.2

9020256-8 6.7
Implemente uma função que receba como parâmetros o nome de um arquivo no formato
descrito acima e a matrícula de um aluno, e retorne o CR do aluno. Se não for encontrado
no arquivo a matrícula procurada, a função deve retornar –1.0. Se não for possível abrir o
arquivo, a função deve imprimir a mensagem "ERRO" e terminar a execução do
programa. O protótipo dessa função deve ser:
float busca (char* arquivo, char* matricula);
*/

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