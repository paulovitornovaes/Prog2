#include <stdio.h>

/*Fazer um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o
menor deles, os valores pares e a média. */

int n1, n2, n3, higher, lowest, pairs;

int input(){
    //Dar entrada nos tres valores para serem analisados
    printf("Digite o primeiro valor: \n");
    scanf("%i", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%i", &n2);
    printf("Digite o terceiro valor: \n");
    scanf("%i", &n3);
}

int checkHigher(){
    //Checar o maior numero
    higher = n1;
    if(higher < n2){
        higher = n2;
    }
    if(higher < n3){
        higher = n3;
    }
    printf("O maior valor é %i.\n", higher);
}

int checkLowest(){
    //Checar o menor numero
    lowest = n1;
    if(lowest > n2){
        lowest = n2;
    }
    if(lowest > n3){
        lowest = n3;
    }
    printf("O menor valor é %i.\n", lowest);
}

int checkPairs(){
    //Preciso checar quais são pares
    printf("Os valores pares sao: \n");
    if(n1 % 2 == 0){
        printf("%i\n", n1); 
    }
    if(n2 % 2 == 0){
        printf("%i\n", n2);
    }
    if(n3 % 2 == 0){
        printf("%i\n", n3); 
    }


}

int media(){
    //Criei variaveis locais para calcular a média usando float, já que os valores de n1, n2 e n3 eram int
    float x = n1, y = n2, z = n3;
    printf("A média dos 3 valores é : %.1f\n", (x + y + z)/ 3);
}

int main(){
    //Chamando todas funções
    input();
    printf("\n");
    checkHigher();
    checkLowest();
    printf("\n");
    checkPairs();
    printf("\n");
    media();
    printf("\n");
    
    return 0;
}
