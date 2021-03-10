#include <stdio.h>

int main(){
    int n1, i, soma;
    i = 1; // incremento
    soma = 0; // a soma parcial (vai somando com o incremento)

    printf("Digite um número natural: ");
    scanf("%d", &n1);
    
    /* incremento começa no 1 e vai até o n1 */
    /* o valor só vai ser somado se o incremento for ímpar */
    for(i = 1; i <= n1; i++){
        if(i % 2 != 0){
            soma += i;
        } 
    }
    
    printf("A soma dos N termos ímpares até %d é : %d",n1 , soma);
    return 0;
}