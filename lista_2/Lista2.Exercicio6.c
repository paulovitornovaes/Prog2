/*
Fazer um programa que sorteie um número de 0 a 100 e que permita que o usuário
(sem conhecer o número sorteado) tente acertar. Caso não acerte, o programa deve
imprimir uma mensagem informando se o número sorteado é maior ou menor que a
tentativa feita. Ao acertar o número, o programa deve imprimir a quantidade de tentativas
feitas.
*/
#include <stdio.h>
#include <stdlib.h> // preciso do rand dessa biblioteca
#include <time.h> // hora do sistema, vou usar como semente para o pseudo aleatorio
//prototipo do sorteio
int sorteio();

int main(){
    int NumSorteio = sorteio();
    int n1, i = 1;
    printf("Numero do sorteio: %d\n", NumSorteio);

    while (n1 != NumSorteio) // enquanto o n1 for diferente do numero de sorteio...
    {

        printf("Digite um numero: ");
        scanf("%d", &n1);
        
        if(n1 == NumSorteio)
            continue;
            if(n1 < NumSorteio)
                printf("O valor que voce escolheu eh menor que o numero sorteado...\n");
        
            else
                printf("O valor que voce escolheu eh maior que o numero sorteado...\n");
        i++;
    }
    
    printf("Voce acertou, o numero era %d, voce usou %d tentativas!", n1, i);
   
    return 0;
}

int sorteio(){
    srand(time(NULL)); // Srand com o argumento time como dito la em cima no #include
    return rand() % 100; // retornando o rand de 0 a 100
}