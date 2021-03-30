#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    char endereco[80];
    char telefone[25];
    char tudojunto[150] = "Nome: ";
    
    printf("Digite aqui seu nome: ");
    scanf(" %49[^\n]", nome);
    printf("Digite aqui seu endereco: ");
    scanf(" %79[^\n]", endereco);
    printf("Digite aqui seu telfone: ");
    scanf(" %24[^\n]", telefone);
    strcat(tudojunto, nome);
    strcat(tudojunto, ", Endereco: ");
    strcat(tudojunto, endereco);
    strcat(tudojunto, ", Telefone: ");
    strcat(tudojunto, telefone);
    printf("Informacoes concatenadas: %s", tudojunto);

    return 0;
}