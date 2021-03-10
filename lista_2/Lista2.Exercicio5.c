#include <stdio.h>
//Nao consegui fazer ainda

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