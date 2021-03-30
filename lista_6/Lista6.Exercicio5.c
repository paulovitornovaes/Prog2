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