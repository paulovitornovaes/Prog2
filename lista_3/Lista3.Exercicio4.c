/*
Fazer uma função denominada divs() que:
a. recebe como parâmetro um número inteiro n por valor e dois números inteiros max e min por
referência;
b. retorna 0 se o número num é primo e 1 caso contrário. Se o número não for primo, as variáveis
max e min devem assumir os valores do menor e do maior divisores inteiros do número,
respectivamente, desconsiderando o número 1 e o próprio número num. 
*/

#include <stdio.h>


//
int divs(int n, int *Pa,int *Pb){
    int i, resultado = 0;

    //para i comecando em 2 ja que o programa pediu para descartar o 1 como divisor
    for(i = 2; i<= n / 2; i++){
        // se o n for divisivel pelo incremento o resultado eh incrementado
        if (n % i == 0){
            resultado ++;
            break;
        }
    }

    // se for primo retorna 0
    if(resultado == 0){
        printf("%d eh um numero primo\n", n);
        return 0;
    // se nao for, temos que dizer os divisores maximos e minimos

    } else{
        i = 0;
        printf("%d nao eh um numero primo\n", n);
        *Pa = i;
        *Pb = 9999;
        for(i = 2; i < n; i++){
            if(n % i == 0){
                if(i > *Pa){
                    *Pa = i;
                }
                if(i < *Pb){
                    *Pb = i;
                }

            }
        }
        printf("O divisor minimo eh : %i e o divisor maximo eh : %i\n", *Pb, *Pa);

        return 1;
    }



}

int main(){
    int n, max, min;
    printf("Digite o valor de N: \n");
    scanf("%d", &n);
    divs(n, &max, &min);
    return 0;
}

