/*
O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025. Fazer
um programa para obter todos os números de 4 algarismos com a mesma característica do
número 3025.
*/
#include <stdio.h>

int main()
{
    int n1=1000; // como eu quero apenas aqueles com 4 algarismos, comeco com 1000
    while(n1 <= 9999) // vou finalizar no ultimo numero de 4 algarismos
    {
        if(n1 == (((n1/100)+(n1%100))*((n1/100)+(n1%100)))) // quero comparar se o valor de n1 eh igual ao valor da expressao do enunciado
            printf("%d: %d+%d=%d -> %d**2=%d \n",n1,n1/100,n1%100,(n1/100)+(n1%100),(n1/100)+(n1%100),n1);
        n1 += 1; // indo para o proximo caso...
    }
}