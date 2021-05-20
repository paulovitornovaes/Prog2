/*Defina as variáveis a, b e c (tipo de dado) para obter todas as possíveis respostas para
os valores de ‘c’:
Suponha que:
a = 3
b = a / 2
c = b + 3.1
Valores possíveis para ‘c’?
1. c = 4.6
2. c = 4.1
3. c = 4 */
#include <stdio.h>

int main()
{
    void first(void);
    first();

    void second(void);
    second();

    void third(void);
    third();

    return 0;
}

void first(void)
{
    int a = 3, b, c;
    b = a / 2;
    c = b + 3.1;
    printf("C = %i\n", c);
}

void second(void)
{
    float a2 = 3, b2, c2;
    b2 = a2 / 2;
    c2 = b2 + 3.1;
    printf("C = %.1f\n", c2);
}

void third(void)
{
    int a3 = 3, b3;
    float c3;
    b3 = a3 / 2;
    c3 = b3 + 3.1;
    printf("C = %g\n", c3);
}