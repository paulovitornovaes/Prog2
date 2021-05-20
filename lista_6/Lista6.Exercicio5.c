/*
Júlio César, o imperador romano, usava a Cifra de César para enviar ordens secretas
aos seus generais. Este código consiste em trocar cada letra de uma mensagem pela
terceira letra seguinte. Ou seja, a letra ‘a’ é substituída por ‘d’, ‘b’ é substituída por ‘e’,
‘c’ é substituída por ‘f’, e assim por diante. As exceções são as três últimas letras do
alfabeto, ‘x’, ‘y’ e ‘z’, que são substituídas, respectivamente, por ‘a’, ‘b’ e ‘c’. Por
exemplo, a palavra “zebra” se transformaria em “cheud”. Escreva uma função que
codifique uma mensagem de acordo com a Cifra de César, aplicando a codificação
apenas às letras da mensagem, maiúsculas ou minúsculas, e preservando os demais
caracteres. Essa função deve receber como parâmetro uma cadeia de caracteres com a
mensagem a ser codificada e retornar o ponteiro para uma nova cadeia de caracteres,
alocada dinamicamente, com a mensagem codificada. A cadeia de caracteres original
não pode ser alterada. A função deve ter o seguinte protótipo:
char* cifra_cesar(char* msg);
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* cifra_cesar(char* msg);

int main()
{
    char mensagem[] = "Cifra de Cesar, 27 zebra";
    char * mcifrada;
    mcifrada = cifra_cesar(mensagem);
    printf("mensagem original: %s\n", mensagem);
    printf("mensagem cifrada: %s\n", mcifrada);

    free(mcifrada);

    return 0;
}

char* cifra_cesar(char* msg)
{
    char * pmc; // Ponteiro para Mensagem Cifrada

    pmc = (char*) malloc((strlen(msg)+1)*sizeof(char));
    if (pmc == NULL)
    {
        return NULL;
    }
    

    for (int i = 0; i < strlen(msg); i++)
    {
        if ((msg[i] >= 'a' && msg[i] <= 'z') || (msg[i] >= 'A' && msg[i] <= 'Z'))
        {
            if (msg[i] == 'x')
            {
                pmc[i] = 'a';
            }
            else if (msg[i] == 'y')
            {
                pmc[i] = 'b';
            }
            else if (msg[i] == 'z')
            {
                pmc[i] = 'c';
            }
            else if (msg[i] == 'X')
            {
                pmc[i] = 'A';
            }
            else if (msg[i] == 'Y')
            {
                pmc[i] = 'B';
            }
            else if (msg[i] == 'Z')
            {
                pmc[i] = 'C';
            }
            else
            {
                pmc[i] = msg[i] + 3;
            }            
                       
        }
        else
        {
            pmc[i] = msg[i];
        }        
    }
    pmc[strlen(msg)] = 0;

    return pmc;    
}