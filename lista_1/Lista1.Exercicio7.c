/*Faça operações de arredondamento para cima e para baixo com números float. Dica:
Pesquise o documento “Cartão de Referência da Linguagem C” para encontrar quais
funções devem ser usadas no programa.*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a = 1.3;

    printf("%.2f\n", floor(a));

    printf("%.2f\n", ceil(a));

    return 0;
}