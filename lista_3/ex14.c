#include <stdio.h>
#define MAX 100

void printaIdade(*vetorIdade);

int main(){

    //criar um formulário com loop, para sair o usuario vai digitar o numero 1 quando solicitado
    int idade[MAX], opniao[MAX];

    int exit = 0, i;

    for(i = 0; i <= MAX; i++){

        printf("Idade do entrevistado: \n");
        scanf("%d", &idade[i]);
        fflush(stdin);

        printf("O filme foi: \n");
        printf("[1] -> Pessimo [2] -> Ruim [3] -> Regular [4] -> Bom [5] -> Otimo\n");
        scanf("%d", &opniao[i]);
        fflush(stdin);

        i++;

        printf("Deseja continuar? [0] -> NAO [1] -> SIM \n");
        scanf("%d", &exit);
        fflush(stdin);
        if(exit == 1){
            break;
        }
    }

    return 0;
}

void printaIdade(*vetorIdade){
    int i;
    for 
}