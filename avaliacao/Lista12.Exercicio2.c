#include <stdio.h>

int imprime_soma(int *vet, int n)
{

    if ((*vet % 2 == 0) && n != -1)
    {
        return 0 + imprime_soma(vet + 1, n - 1);
    }
    if ((*vet % 2 != 0) && n != -1)
    {
        return *vet + imprime_soma(vet + 1, n - 1);
    }
    return 0;
}

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d", imprime_soma(vetor, 10));
}