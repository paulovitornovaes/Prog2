/*
Faça um programa que dado 2 palavras, determine:
a. Se as palavras são iguais;
b. Verifique se a segunda palavra é uma sub string da primeira. Ex: casa e casamento.
*/

#include <stdio.h>
#include <string.h>

void compara_str(nome1, nome2);

int main()
{
    char nome1[40] = "casa";
    char nome2[40] = "casamento";
    printf("\ncomparando '%s' com '%s'...\n", nome1, nome2);
    compara_str(nome1, nome2);
    char nome3[40] = "casamento";
    char nome4[40] = "casa";
    printf("\ncomparando '%s' com '%s'...\n", nome3, nome4);
    compara_str(nome3, nome4);
    char nome5[40] = "casa";
    char nome6[40] = "casa";
    printf("\ncomparando '%s' com '%s'...\n", nome5, nome6);
    compara_str(nome5, nome6);
    char nome7[40] = "casa";
    char nome8[40] = "joao";
    printf("\ncomparando '%s' com '%s'...\n", nome7, nome8);
    compara_str(nome7, nome8);

    return 0;
}

void compara_str(nome1, nome2)
{
    int cmp = strcmp(nome1,nome2);
    int tamanho;
    if (cmp < 0)
    {
        tamanho = strlen(nome1);
        if (strncmp(nome1, nome2, tamanho) == 0)
        {
            printf("A primeira palavra e uma sub string da segunda.\n");
        }
        else
        {
            printf("As palavras nao sao iguais nem sao sub strings umas das outras.\n");
        }
        
    }
    else if (cmp > 0)
    {
        tamanho = strlen(nome2);
        if (strncmp(nome1, nome2, tamanho) == 0)
        {
            printf("A segunda palavra e uma sub string da primeira.\n");
        }
        else
        {
            printf("As palavras nao sao iguais nem sao sub strings umas das outras.\n");
        }
    }
    else
    {
        printf("As palavras sao iguais.\n");
    }
    
    
}