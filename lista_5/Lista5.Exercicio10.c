/* 
Fazer um programa para cadastro e diálogo de login. O programa deve:
a. Cadastrar um nome de usuário via teclado. O nome de usuário tem, no máximo, 8 caracteres,
sendo válidos somente os caracteres numéricos e as letras maiúsculas ou minúsculas. Somente os
caracteres válidos devem ser exibidos no console durante a digitação do nome de usuário.
b. Cadastrar uma senha do usuário via teclado. Esta segue as mesmas regras do nome de usuário,
com a diferença de que são exibidos somente asteriscos no console à medida que a senha é digitada.
c. Receber um novo nome de usuário e uma nova senha, utilizando os mesmos procedimentos
descritos nos itens a e b.
d. Comparar o nome de usuário cadastrado com o recebido posteriormente e a senha cadastrada
com a senha recebida. Caso sejam idênticos, informar “OK”, do contrário, informar “Acesso
negado”.
*/

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