#include <stdio.h>

int inverter(); // prototipo da funcao

int main(){
    int n1;

    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Invertendo fica: \n");

    inverter(n1); // chamada da funcao

    return 0;
}

int inverter(int n1){
    int unidade; //numero da extremidade direita

    if (n1 == 0)
        return n1; // tenho que fazer isso pois uma hora tem que parar, senao vai retornar zero toda hora
    // pois no else eu fiz uma funcao recursiva, quando o n1 for dividido a ponto de virar zero
    // ele tem que parar, entao ao inves de ficar retornando o inverter(n1 /10) eu tenho q retornar o proprio n1
    else {
        unidade = n1 % 10; // resto da divisao
        printf("%d", unidade); // faco o print aqui da unidade "retirada"
        return inverter(n1 / 10); // devolve para o meu inverter() o valor sem a unidade da extrema direita
    }
}