/*
Escreva um programa em C para ler um valor X e um valor Z (se Z for menor que X
deve ser lido um novo valor para Z). Contar quantos números inteiros devemos somar em
sequência (a partir do X inclusive) para que a soma ultrapasse a Z o mínimo possível.
Escrever o valor final da contagem.
Exemplo:
X Z Resposta
3 20 5 (3+4+5+6+7=25)
2 10 4 (2+3+4+5=14)
30 40 2 (30+31=61)
*/

#include <stdio.h>

int main(){
    int x, z, CloneX ,i = 1;
    //le o valor de x e z, se z for menor ele vai repetir o laco e incrementar o i//
    printf("Digite um numero X: \n");
    scanf("%d", &x);
    printf("Digite um numero Z: \n");
    scanf("%d", &z);
    
    for(i; z < x;){
        printf("Digite outro numero Z: \n");
        scanf("%d", &z);
    }

    printf("%d (", i);

    while (x < z)
    {
        i++;
        CloneX = x;
        printf("%d ", CloneX);
        x++;
        x += CloneX;

        
    }
    
    
    
        
    return 0;
}