/*
O que será impresso na tela? Mostre o andamento da execução.
#include < stdio .h >
#include < string .h >
int main (void) {
char *frase = "Otimo teste";
char *p , misterio[80];
int i = 0;
int j = 0;
p = frase + strlen ( frase ) - 1;
while (*p != ’ ’) {
misterio[i] = *p;
i ++; p --;
}
misterio[i] = ’ ’; i ++;
while ( frase[j] != ’ ’) {
misterio [i] = frase[j];
j ++; i ++;
}
misterio[i] = ’\0 ’;
puts (misterio);
return 0;
}
*/

#include <stdio.h>
#include <string.h>

int main (void) {

char *frase = "Otimo teste"; //ponteiro frase  
char *p , misterio[80];  //ponteiro p e um vetor [80]
int i = 0; //inteiro i valendo 0
int j = 0; //inteiro j valendo 0

p = frase + strlen ( frase ) - 1; // p recebe o endereço de frase + o tamanho da frase -1
// o resultado de p é o endereço da ultima letra da frase


while (*p != ' ') { //enquanto o ponteiro p nao for espaço
    misterio[i] = *p; //misterio[p] vai receber esse valor char
    i ++; p --; //incrementa i para avançar nas posicoes de misterio 
    //e decrementa o p para chegar até a primeiro char 
    //desse jeito ele pega de tras p frente até achar o primeiro espaço "teste" = "etset"
}




misterio[i] = ' '; i ++; 
//adicionou um espaço após o etset e incrementou o i


while ( frase[j] != ' ') { //enquanto a frase[j] for diferente de espaço
    misterio [i] = frase[j]; //misterio[i] recebe frase[j]
    j ++; i ++; //incrementa ambos 
}


misterio[i] = '\0' ;//após colocar o Otimo no misterio é necessario dizer onde acaba o vetor de strings, por isso o \0

puts (misterio); //função da biblioteca string que imprime uma string

return 0;
}