#include <stdio.h>
#include <stdlib.h>

void mostradistancia(int mat[5][5], int c1, int c2);

int main()
{
    int tabela[5][5] = {{0, 15, 30, 5, 12},
                        {15, 0, 10, 17, 28},
                        {30, 10, 0, 3, 11},
                        {5, 17, 3, 0, 80},
                        {12, 28, 11, 80, 0}};
    char* percurso;
    int pc, sc;
    do
    {
        printf("Digite uma cidade: ");
        scanf("%d", &pc);
        printf("Digite outra cidade: ");
        scanf("%d", &sc);
        mostradistancia(tabela, pc, sc);  
    } while (!(pc == sc && pc == 0));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i<=j)
            {
                printf("%2d ", tabela[i][j]);                
            }
            else
            {
                printf("   ");
            }
            
        }
        printf("\n");        
    }

    printf("Digite um percurso (numeros separados por virgulas):\n");
    scanf(" %s", percurso);
    int contador = 0;
    for (int i = 0; percurso[i] != 0; i++)
    {
        if (!(i % 2 != 0 || i == 0))
        {
            contador += tabela[percurso[i-2]-'0'-1][percurso[i]-'0'-1];
            //printf("%d\n", tabela[percurso[i-2]-'0'-1][percurso[i]-'0'-1]);  
        }        
    }
    printf("Total percorrido: %d\n", contador);
    
    return 0;
}

void mostradistancia(int mat[5][5], int c1, int c2)
{
    if (c1 == c2 && c2 == 0)
    {
        printf("Encerrando entrada de dados...\n");
    }    
    else if ((c1 < 1 || c1 > 5)||(c2 < 1 || c2 > 5))
    {
        printf("Cidade digitada eh invalida...\n");
    }
    else
    {
        printf("Ah distancia entre as cidades eh de %d\n", mat[c1-1][c2-1]);
    }
    
}