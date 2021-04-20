#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *estado[27] =
    {"AC", "AL", "AM", "AP", "BA", "CE", "DF", "ES", "GO", "MA", "MG", "MS", "MT", "PA",
     "PB", "PE", "PI", "PR", "RJ", "RN", "RO", "RR", "RS", "SC", "SE", "SP", "TO"};

typedef struct assalariados
{
    char nome[51];
    char sexo;
    int idade;
    float salario;
    char estado[3];
} Assalariados;

Assalariados *cadastra(char *nome, char sexo, int idade, float salario, char *estado);

void relatorio(Assalariados **ptr, int numAssalariados);

void imprime(Assalariados **ptr, int numAssalariados);

main(void)
{
    Assalariados **pessoas;
    int numAssalariados = 3;
    pessoas = (Assalariados **)malloc(numAssalariados * sizeof(Assalariados *));
    pessoas[0] = cadastra("Fulano de tal", 'M', 45, 1500.00, "RJ");
    pessoas[1] = cadastra("Ciclano", 'M', 50, 2500.00, "RS");
    pessoas[2] = cadastra("Beltrano", 'M', 42, 500.00, "RS");
    imprime(pessoas, numAssalariados);
    relatorio(pessoas, numAssalariados);
}

Assalariados *cadastra(char *nome, char sexo, int idade, float salario, char *estado)
{
    Assalariados *passalariado = (Assalariados *)malloc(sizeof(Assalariados));
    strcpy(passalariado->nome, nome);
    passalariado->sexo = sexo;
    passalariado->idade = idade;
    passalariado->salario = salario;
    strcpy(passalariado->estado, estado);

    return passalariado;
}

void imprime(Assalariados **ptr, int numAssalariados)
{
    for (int i = 0; i < numAssalariados; i++)
    {
        printf("Imprimindo os dados do Assalariado %s\n", ptr[i]->nome);
        printf("Nome: %s\n", ptr[i]->nome);
        printf("Sexo: %c\n", ptr[i]->sexo);
        printf("Idade: %d\n", ptr[i]->idade);
        printf("Salario: %.2f\n", ptr[i]->salario);
        printf("Estado: %s\n", ptr[i]->estado);
        printf("\n");
    }
}

void relatorio(Assalariados **ptr, int numAssalariados)
{

    for (int e = 0; e < 27; e++)
    {
        int contador = 0;
        for (int i = 0; i < numAssalariados; i++)
        {
            if (strcmp(ptr[i]->estado, estado[e]) == 0 && ptr[i]->idade > 40 && ptr[i]->salario > 1000.0)
            {
                contador++;
            }
        }
        printf("Estado=%s com %d homens maiores de 40 anos e salÃ¡rio maior que R$ 1000,00\n", estado[e], contador);
    }
}