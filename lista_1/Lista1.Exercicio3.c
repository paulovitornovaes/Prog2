/*Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois
números reais. O programa deve retornar o resultado da operação recebida sobre estes
dois números. */

#include <stdio.h>

float n1, n2;
char operacao;

int main(){

    printf("Digite qual operacao (+ - * /): \n");
    scanf("%c", &operacao);

    printf("Digite 1 valor: \n");
    scanf("%f", &n1);

    printf("Digite o segundo valor: \n");
    scanf("%f", &n2);

    void sinal(void);
    sinal();

    
    return 0;
}

void sinal(void){
    switch (operacao)
    {
    case '+':
        printf("%.1f + %.1f = %.1f\n", n1, n2, n1+n2);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f\n", n1, n2, n1-n2);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f\n", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f\n", n1, n2, n1/n2);
        break;
    }
}
