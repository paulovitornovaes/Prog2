#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER 256

void main()
{
    FILE *f;

    // '*' é o números de casas decimais e o 'i' o valor que será substituido
    char nome[] = "teste%0*i.txt";
    char texto[] = "Texto do arquivo %0*i";

    int casas = 2;
    int tamanho = 11;

    for (int d = 0; d < tamanho; d++)
    {
        // cria uma array de caracteres temporaria pra criar os nomes
        char fileName[BUFFER];
        char fileText[BUFFER];

        // sprintf é como um printf pra array...
        sprintf(fileName, nome, casas, d);
        sprintf(fileText, texto, casas, d);

        f = fopen(fileName, "w");
        // fprintf recebe o ponteiro do arquivo e o que deve ser escrito
        fprintf(f, "%s", fileText);
        fclose(f);
    }
}