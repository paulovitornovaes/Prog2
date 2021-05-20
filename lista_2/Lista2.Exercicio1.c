/*Faça um programa que verifique se um determinado número é primo. O número a ser
testado deve ser fornecido pelo usuário do programa. O programa deve imprimir a
mensagem “NUMERO PRIMO” caso o número seja primo, e “NUMERO NAO PRIMO”
caso contrário. */

#include <stdio.h>

int main(){
/*N1 é o número a ser analisado, primo é para saber se N1 é primo ou não
i é o incremento
*/
    int n1, primo = 0, i;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    // laço for começando em 1 e para no N1, incrementando de 1 a 1
    // condição if para saber se n1 é divisivel pelo incremento, caso verdadeiro nós incrementamos a variavel primo
    for (i = 1; i <= n1; i++){
        if (n1 % i == 0){
            primo++;
        }
    }
    
    // se primo for divisivel por 1 e ele mesmo (2) é primo
    if(primo == 2 ){
        printf("%d e numero primo!\n", n1);
    } 
    else {
        printf("%d nao e numero primo!\n", n1);
    }
    
}
