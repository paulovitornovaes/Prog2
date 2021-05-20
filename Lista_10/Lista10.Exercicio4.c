/*
Faça um programa que leia um nome de “arquivo .c” digitado pelo usuário e gere um
novo que remove as linhas com comentários “//”
*/

#include <stdio.h>
#include <string.h>

void remove_comentarios(char *arquivo);

int main()
{
    //usuario escolhe o nome do arquivo
    char arquivo[80];
    printf("Digite o nome do arquivo = ");
    scanf("%s", &arquivo);

    //função que remove os comentarios do arquivo
    remove_comentarios(arquivo);

    return 0;
}

void remove_comentarios(char *arquivo)
{
    int n = 0;       //incremento para as linhas do arquivo
    char linha[121]; //captura a string do arquivo

    FILE *arq;     //ponteiro tipo File para o arquivo da funcao
    FILE *new_arq; //ponteiro tipo File para o novo arquivo
    char c;        //caracter para leitura

    //abrindo arq modo leitura e escrita com o char arquivo
    arq = fopen(arquivo, "rt");
    if (arq == NULL)
    {
        printf("Erro\n");
        exit(1);
    }

    //abrindo o novo arquivo para escrita
    new_arq = fopen("new_arq.txt", "wt");
    if (new_arq == NULL)
    {
        printf("Erro\n");
        fclose(new_arq);
        exit(1);
    }

    while (fgets(linha, 121, arq) != NULL) //char que recebe a string, o limite para string e o arquivo que vai ser lido
    {
        n++;
        if (strstr(linha, "//") == NULL) // se ao tiver // na linha
        {
            fputs(linha, new_arq); //coloque a string no novo arquivo
        }
    }

    //fechando os arquivos
    fclose(arq);
    fclose(new_arq);
}