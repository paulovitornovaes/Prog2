#include <stdio.h>
#include <math.h>

int main(){
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

