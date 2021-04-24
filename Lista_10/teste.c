/* Procura ocorrência de sub-cadeia no arquivo */
#include <stdio.h>
#include <string.h> /* função strstr */
int main(void)
{
    int n = 0;           /* número da linha corrente */
    char subcadeia[121]; /* armazena sub-cadeia */
    char linha[121];     /* armazena cada linha do arquivo */
    char matricula[121];
    char nota[121];
    FILE *fp;            /* ponteiro do arquivo de entrada */
    /* pede ao usuário o nome do arquivo e a sub-cadeia */
    
    printf("Digite a sub-cadeia: ");
    scanf("%120s", subcadeia);

    /* abre arquivos para leitura */
    fp = fopen("Lista10.Exercicio2.txt", "rt");
    if (fp == NULL)
    {
        printf("Não foi possível abrir arquivo de entrada.\n");
        return 1;
    }
    
    /* lê linha a linha */
    while (fscanf(fp, "%s %s", matricula, nota) != NULL)
    {
        
        if (strstr(matricula, subcadeia) != NULL)
        {
            
            printf("nota foi de %s\n", nota);
            break;
        }
    }
    
    /* fecha arquivo */
    fclose(fp);
    
    return 0;
}

