#include <stdio.h>
#include <math.h>

int main(){
    int x, y;

    printf("Digite o valor de X: \n");
    scanf("%d", &x);

    printf("Digite o valor de Y: \n");
    scanf("%d", &y);

    printf("%d elevado a %d = %.1f",x, y, pow(x, y));

    return 0;
}
