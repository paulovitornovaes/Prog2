#include <stdio.h>

int main(){
    int n1, n2, n3, maior;
    printf("Digite o primeiro valor: \n");
    scanf("%i", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%i", &n2);
    printf("Digite o terceiro valor: \n");
    scanf("%i", &n3);
    maior = n1;
    if(maior < n2){
        maior = n2;
    }
    if(maior < n3){
        maior = n3;
    }
    printf("O maior valor é %i.\n", maior);
    return 0;
}