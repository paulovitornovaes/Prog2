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