#include <stdio.h>

int main()
{
    int tabuleiro[8][8] = { {1, 3, 0, 5, 4, 0, 2, 1},
                            {1, 0, 1, 0, 0, 1, 0, 0},
                            {0, 0, 0, 0, 1, 0, 6, 0},
                            {1, 0, 0, 1, 1, 0, 0, 1},
                            {0, 1, 0, 4, 0, 0, 1, 0},
                            {0, 0, 3, 1, 0, 0, 1, 1},
                            {1, 0, 6, 6, 0, 0, 1, 0},
                            {1, 0, 5, 0, 1, 1, 0, 6} };
    int contp = 0, contt = 0, contc = 0, contb = 0, contre = 0, contra = 0, conta = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (tabuleiro[i][j])
            {
            case 0:
                conta++;
                break;
            case 1:
                contp++;
                break;
            case 2:
                contc++;
                break;
            case 3:
                contt++;
                break;
            case 4:
                contb++;
                break;
            case 5:
                contre++;
                break;
            case 6:
                contra++;
                break;            
            }
        }        
    }
    
    printf("Soma de peoes e bispos: %d\n", contp + contb);
    printf("Qauntidade de posicoes com ausencia de peca: %d\n", (8*8) - (contp + contb+ contc + contt + contra + contre));
    printf("\n");
    printf("Numero de ausencia: %d\n", conta);
    printf("Numero de peoes: %d\n", contp);
    printf("Numero de cavalos: %d\n", contc);
    printf("Numero de torres: %d\n", contt);
    printf("Numero de bispos: %d\n", contb);
    printf("Numero de reis: %d\n", contre);
    printf("Numero de rainhas: %d\n", contra);
}