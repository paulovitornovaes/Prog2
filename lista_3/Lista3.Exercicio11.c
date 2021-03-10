#include <stdio.h>
#define MAX 100
//Finalizado

//idade, altura e sexo de n pessoas
// mulheres entre 20 e 35 anos
// Homens mais altos que 1.80m
// Quanto vai variar de altura

int main()
{

    float altura[MAX], variante, media, soma = 0;
    int n, idade, mulheres20_35 = 0, altos = 0;
    char s, tmp[3];

    printf("Quantas pessoas serao cadastradas? ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Altura: ");
        scanf("%f", &altura[i]);

        do
        {
            printf("Sexo(m/f): ");
            scanf("%s", tmp);
            s = tmp[0];
        }while(s != 'm' && s != 'f');

        if(s == 'f' && idade >= 20)
        {
            if(idade <= 35)
            {
                mulheres20_35++;
            }

        }

        if(s == 'm')
        {
            if(altura[i] > 1.80)
                altos++;
        }
        soma += altura[i];
    }
    media = soma/n;
    soma = 0;

    for(int i = 0; i < n; i++)
    {
        soma += (altura[i] - media)*(altura[i] - media);
    }
    variante = soma / n;

    printf("Numero de mulheres entre 20 e 35 anos: %d\n", mulheres20_35);
    printf("Numero de homens de mais de 1.80m: %d\n", altos);
    printf("Variancia de altura: %f", variante);
    return 0;
}
