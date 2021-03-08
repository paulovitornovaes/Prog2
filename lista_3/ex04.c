#include <stdio.h>

int divs(int n, int *Pa,int *Pb){
    int i, resultado = 0;
    *Pa = 22;

    for(i = 2; i<= n / 2; i++){
        if (n % i == 0){
            resultado ++;
            break;
        }
    }

    if(resultado == 0){
        printf("%d eh um numero primo\n", n);
        return 0;
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

