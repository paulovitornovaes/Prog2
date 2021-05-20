#include <stdio.h>
#include <stdlib.h>

struct funcionario
{
    char nome[81];    /* nome do funcionário */
    float valor_hora; /* valor da hora de trabalho em Reais */
    int horas_mes;    /* horas trabalhadas em um mês */
};
typedef struct funcionario Funcionario;

void carrega (int n, Funcionario** vet, char* arquivo);

int main()
{
    char c;
    int n = 0;
    char nomeArq[30];
    printf("Digite o nome do arquivo: ");
    scanf(" %29[^\n]", &nomeArq);   

    FILE* fp = fopen(nomeArq, "r");
    if (fp == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF) {
        if(c == '\n') {
            n++;
        }
    }    
    n = (n/2)+1;
    Funcionario** funcionarios = (Funcionario**) malloc(n * sizeof(Funcionario*));
    if (funcionarios == NULL)
    {
        printf("Erro na alocacao\n");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {        
        funcionarios[i] = (Funcionario*)malloc(sizeof(Funcionario));
        if (funcionarios == NULL)
        {
           printf("Erro na alocacao\n");
           exit(1);
        }
    }
    
    carrega(n, funcionarios, nomeArq);
    for (int i = 0; i < n; i++)
    {
        printf("Nome: %s\n", funcionarios[i]->nome);
        printf("ValorHora: %.2f\n", funcionarios[i]->valor_hora);
        printf("HorasMes: %d\n", funcionarios[i]->horas_mes);
    }
    
    for (int i = 0; i < n; i++)
    {
        free(funcionarios[i]);
    }

    free(funcionarios);
    
}

void carrega (int n, Funcionario** vet, char* arquivo)
{
    FILE* fp = fopen(arquivo, "r");
    if (fp == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }
    
    for (int i = 0; i < n; i++)
    {        
        fscanf(fp, " %80[^\n]", vet[i]->nome);
        fscanf(fp, "%f %d", &vet[i]->valor_hora, &vet[i]->horas_mes);        
    }
    
}