/*
1) Considere o tipo Funcionario, que representa um funcionário de uma empresa,
definido pela estrutura a seguir:

struct funcionario {
    char nome[81]; 
    float valor_hora; 
    int horas_mes; 
};
typedef struct funcionario Funcionario;

Escreva uma função em C que preencha um vetor de ponteiros para Funcionario com os
dados lidos de um arquivo texto. Essa função deve receber como parâmetros o vetor de
ponteiros para Funcionario (representado pelo seu comprimento e pelo endereço de seu
primeiro elemento) previamente alocado e o nome do arquivo de entrada. Nesse arquivo
de entrada, os dados de cada funcionário são armazenados em duas linhas: uma com o
seu nome (cadeia com até 80 caracteres), e outra com o valor de sua hora de trabalho e
com o número de horas trabalhadas em um mês (nessa ordem). Um exemplo desse
formato é mostrado abaixo.

João da Silva
15.0 160
Manuel Santos
15.0 80
Fulana de Tal
23.5 40

Considere que: não existem linhas em branco no arquivo; o parâmetro vet já vem com
todas as suas posições inicializadas com NULL; o comprimento do vetor (parâmetro n) é
no mínimo igual à quantidade de registros de funcionários no arquivo de entrada; se não
for possível abrir o arquivo, a função deve imprimir a mensagem “ERRO” e terminar a
execução do programa. A função implementada deve ter o seguinte protótipo:
void carrega (int n, Funcionario** vet, char* arquivo);
*/

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