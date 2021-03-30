#include <stdio.h>
#include <string.h>
#include <conio.h>

void cadastra_nome(int n, char * nome);
void cadastra_senha(int n, char * senha);
void verifica_acesso(char * nome, char * senha, char * tnome, char * tsenha);

int main()
{
    char nome[9];
    char n_nome[9];
    char senha[9];
    char n_senha[9];
    printf("Cadastrando dados...\n");
    cadastra_nome(8, nome);
    cadastra_senha(8, senha);
    printf("Nome: %s\n", nome);
    printf("Senha: %s\n", senha);
    printf("Realizando login...\n");
    cadastra_nome(8, n_nome);
    cadastra_senha(8, n_senha);
    verifica_acesso(nome, senha, n_nome, n_senha);

    return 0;
}

void cadastra_nome(int n, char * nome)
{
    char letra;
    int i = 0;
    printf("Digite o nome de usuario: ");
    letra = getch();
    while (letra != '\r' && i < 9)
    {
        if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z') || (letra >= '0' && letra <= '9'))
        {
            nome[i] = letra;
            i++;
            printf("%c", letra);
        }        
        letra = getch();
    }
    printf("\n");
    nome[i] = 0;
}

void cadastra_senha(int n, char * senha)
{
    char letra;
    int i = 0;
    printf("Digite a senha do usuario: ");
    letra = getch();
    while (letra != '\r' && i < 9)
    {
        if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z') || (letra >= '0' && letra <= '9'))
        {
            senha[i] = letra;
            i++;
            printf("*", letra);
        }        
        letra = getch();
    }
    printf("\n");
    senha[i] = 0;
}

void verifica_acesso(char * nome, char * senha, char * tnome, char * tsenha)
{
    if (strcmp(nome, tnome) == 0 && strcmp(senha, tsenha) == 0)
    {
        printf("OK\n");
    }
    else
    {
        printf("Acesso negado\n");
    }
    
}