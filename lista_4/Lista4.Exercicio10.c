/*
Um cinema que possui capacidade de 20 lugares está sempre lotado. Certo dia cada
espectador respondeu a um questionário, onde constava:
- sua idade;
- sua opinião em relação ao filme, que podia ser: ótimo, bom, regular, ruim ou péssimo.
Elabore um programa que, recebendo estes dados calcule e mostre:
a. a quantidade de respostas ótimo;
b. a diferença percentual entre respostas bom e regular;
c. a média de idade das pessoas que responderam ruim;
d. a porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
e. a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que
respondeu ruim.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Notas
{
    OTIMO, BOM, REGULAR, RUIM, PESSIMO
};

void mostra_matriz(int n, int v[2][20]);
void qtd_otimo(int n, int v[2][20]);
void diferenca_percentual_bom_regular(int n, int v[2][20]);
void media_idade_ruim(int n, int v[2][20]);
void porcentegem_pessimo_maior_idade(int n, int v[2][20], int *pidade);
void diferenca_maior_idade_otimo_ruim(int n, int v[2][20]);

int main()
{
    int mat[2][20];

    //srand(time(NULL));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (i == 0)
            {
                mat[i][j] = 12 + (rand() % 82);
            }
            else
            {
                mat[i][j] = (rand() % 5);
            }
        }
    } // linha 0 == idade, linha 1 == nota, coluna == pessoa

    mostra_matriz(20, mat);
    qtd_otimo(20, mat);
    diferenca_percentual_bom_regular(20, mat);
    media_idade_ruim(20, mat);
    int idade;
    porcentegem_pessimo_maior_idade(20, mat, &idade);
    diferenca_maior_idade_otimo_ruim(20, mat);

    return 0;
}

void mostra_matriz(int n, int v[2][20])
{
    printf("P == Pessoa, I == Idade e N == Nota\n");
    printf("0 == OTIMO, 1 == BOM, 2 == REGULAR, 3 == RUIM e 4 == PESSIMO\n");
    for (int i = 0; i < n; i++)
    {
        printf("|P%2d-I: %2d, N: %2d| ", i, v[0][i], v[1][i]);
        if ((i+1)%4 == 0) printf("\n");
    }
    printf("\n");
    printf("\n");
}

void qtd_otimo(int n, int v[2][20])
{
    int co = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[1][i] == OTIMO) co++;

    }
    printf("Quantidade de otimos: %d\n", co);
}

void diferenca_percentual_bom_regular(int n, int v[2][20])
{
    float cre = 0.0, cb = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (v[1][i] == BOM) cb++;
        if (v[1][i] == REGULAR) cre++;
    }
    printf("Pessoas que escolheram a nota otima: %.0f \nPessoas que escolheram a nota regular: %.0f\n", cb, cre);
    if (cb > cre)
    {
        printf("Diferenca percentual entre bom e regular: %.2f%%\n", ((cb - cre) / cre) * 100);
    }
    else
    {
        printf("Diferenca percentual entre bom e regular: %.2f%%\n", ((cre - cb) / cb) * 100);
    }
}

void media_idade_ruim(int n, int v[2][20])
{
    float cru = 0, cidaderu = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[1][i] == RUIM)
        {
            cidaderu += v[0][i];
            cru++;
        }
    }
    printf("Media de idade das pessoas que escolheram a nota ruim: %.2f\n", cidaderu / cru);
}

void porcentegem_pessimo_maior_idade(int n, int v[2][20], int *pidade)
{
    float cp = 0;
    *pidade = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[1][i] == PESSIMO)
        {
            if (v[0][i] > *pidade) *pidade = v[0][i];
            cp++;
        }
    }
    printf("Porcentagem de pessoas que escolheram a nota pessimo: %.0f%% e a maior idade entre elas: %d\n", (cp / n) * 100, *pidade);
}

void diferenca_maior_idade_otimo_ruim(int n, int v[2][20])
{
    int mio = -1, miru = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[1][i] == OTIMO && v[0][i] > mio) mio = v[0][i];
        if (v[1][i] == RUIM && v[0][i] > miru) miru = v[0][i];
    }
    printf("Maior idade da pessoa que escolheu otimo: %d\nMaior idade da pessoa que escolheu ruim: %d\n", mio, miru);
    if (mio > miru)
    {
        printf("Diferenca de idade entre as maiores idades que responderam otimo e ruim: %d\n", mio - miru);
    }
    else
    {
        printf("Diferenca de idade entre as maiores idades que responderam otimo e ruim: %d\n", miru - mio);
    }
}