/*Implemente uma função que calcule as raízes de uma equação do segundo grau, do
tipo ax2 + bx + c = 0. Observação: para o cálculo da raiz quadrada de um número, utilize
a função sqrt. Consulte a documentação de como usá-la no programa. */
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    // Entrada dos termos
    printf("Digite o valor de a: \n");
    scanf("%f", &a);
    printf("Digite o valor de b: \n");
    scanf("%f", &b);
    printf("Digite o valor de c: \n");
    scanf("%f", &c);

    float delta, bhaskaraPos, bhaskaraNeg;
    delta = (b * b) - 4 * a * c;
    bhaskaraPos = (-b + sqrt(delta)) / (2 * a);
    bhaskaraNeg = (-b - sqrt(delta)) / (2 * a);
    printf("%.2f e %.2f são os valores obtidos.", bhaskaraPos, bhaskaraNeg);
    return 0;
}
