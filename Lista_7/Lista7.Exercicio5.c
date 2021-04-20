#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *removeEspaco(char *pfrase);
void cryptografia(char *pfrase);

int main()
{

    char frase[81];
    char *pfrase;
    printf("Digite uma frase:\n");
    scanf(" %80[^\n]", frase);
    pfrase = removeEspaco(frase);
    cryptografia(pfrase);

    printf("%s", pfrase);
    free(pfrase);
    return 0;
}

char *removeEspaco(char *pfrase)
{

    int cont = 0;
    for (int i = 0; pfrase[i] != 0; i++)
        cont++;

    char *aux = (char *)malloc(cont * sizeof(char));
    if (aux == NULL)
    {
        printf("alocacao dinamica nao funcionou");
    }
    

    cont = 0;
    for (int i = 0; pfrase[i] != 0; i++)
    {
        if (pfrase[i] != ' ')
        {
            aux[cont] = pfrase[i];
            cont++;
        }
    }
    aux[cont] = 0;
    return aux;
}

void cryptografia(char *pfrase)
{
    for (int i = 0; pfrase[i] != 0; i++)
    {
        switch (i % 5)
        {
        case 0:
            if ((pfrase[i] + 1 > 'z' && pfrase[i] >= 'a' && pfrase[i] <= 'z')||(pfrase[i] + 1 > 'Z' && pfrase[i] >= 'A' && pfrase[i] <= 'Z'))
            {
                pfrase[i] += 1 - 26;
            }
            else
            {
                pfrase[i] += 1;
            }
            break;

        case 1:
            if ((pfrase[i] + 2 > 'z' && pfrase[i] >= 'a' && pfrase[i] <= 'z')||(pfrase[i] + 2 > 'Z' && pfrase[i] >= 'A' && pfrase[i] <= 'Z'))
            {
                pfrase[i] += 2 - 26;
            }
            else
            {
                pfrase[i] += 2;
            }
            break;

        case 2:
            if ((pfrase[i] + 3 > 'z' && pfrase[i] >= 'a' && pfrase[i] <= 'z')||(pfrase[i] + 3 > 'Z' && pfrase[i] >= 'A' && pfrase[i] <= 'Z'))
            {
                pfrase[i] += 3 - 26;
            }
            else
            {
                pfrase[i] += 3;
            }
            break;

        case 3:
            if ((pfrase[i] + 4 > 'z' && pfrase[i] >= 'a' && pfrase[i] <= 'z')||(pfrase[i] + 4 > 'Z' && pfrase[i] >= 'A' && pfrase[i] <= 'Z'))
            {
                pfrase[i] += 4 - 26;
            }
            else
            {
                pfrase[i] += 4;
            }
            break;

        case 4:
            if ((pfrase[i] + 5 > 'z' && pfrase[i] >= 'a' && pfrase[i] <= 'z')||(pfrase[i] + 5 > 'Z' && pfrase[i] >= 'A' && pfrase[i] <= 'Z'))
            {
                pfrase[i] += 5 - 26;
            }
            else
            {
                pfrase[i] += 5;
            }
            break;
        }
    }
}