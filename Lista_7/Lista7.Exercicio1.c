/*
O que será impresso na tela?
#include < stdio.h >
void f1 ( int v) {
v = v + 1;
printf (" f1 = %d\n " , v );
}
void f2 ( int *v) {
*v = *v + 1;
printf (" f2 = %d\n " , *v );
}
int f3 ( int v) {
v = v + 1;
printf (" f3 = %d\n " , v );
return v;
}
int main (void) {
int v = 1;
f1 ( v );
f2 (&v );
v = f3 ( v );
printf (" main = %d \n" , v );
return 0;
}
*/

#include <stdio.h>

void f1 (int v) { //recebeu o inteiro v como parametro
    v = v + 1; // inteiro v é incrementado
    printf (" f1 = %d\n " , v ); //imprimiu o valor do inteiro v
}

void f2 (int *v) { //recebeu o ponteiro de v como parametro
    *v = *v + 1; //incremento do ponteiro de v
    printf (" f2 = %d\n " , *v ); // imprimiu o valor do ponteiro de v
}

int f3 (int v) { // recebeu o inteiro v como parametro
    v = v + 1; //incremento do v
    printf (" f3 = %d\n " , v ); //imprimiu o valor de v
    return v;
}

int main (void) {
int v = 1; //colocou o valor 1 na variavel v
f1 ( v ); //chamou a função f1 que incrementa o v, entao vai imprimir 1+1 = 2 mas nao vai mudar a variavel v no main
f2 (&v ); //fez a msm coisa que o f1 mas agora como o f2 trabalha com ponteiros ele vai mudar no endereço de v, mudando o valor dele no main
//v aqui vale 2, logo em baixo v vai receber o valor de f3(v) que faz a mesma coisa que f1
v = f3 ( v );
//agora podemos ver que v vale 3
printf (" main = %d \n" , v );
return 0;
}