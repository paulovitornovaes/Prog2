#include <stdio.h>
//Finalizado
int main(){
    char frase[80]="o rato roeu a roupa do rei de roma"; //um char frase escolhido
    char *p; // um ponteiro
    p = frase; //ponteiro recebe o endereço da frase
    p[2]='m'; //A posição 2 muda para m, 0 = 'o' 1 =' ' 2 = 'r'
    p[6]='\0'; //ele "corta" o resto dos chars
    printf("%s\n", frase); //printf na frase vai sair "o mato"
    p = p + 3; //adicionando +3 no ponteiro p vai fazer ele ler a posicao 3 como inicial
    printf("%s\n",p); // lendo o p que ficou apenas com a palavra "ato"
    printf("%d\n",strlen(frase));//ele vai voltar na variavel frase
    //analisar o tamanho de caracteres na frase que já foi modificada
    //como ficou apenas o mato ele vai somar a qtd desses caracteres e mostrar na tela
    //nao esquecendo do caracter espaço que tem em "o mato"
    return 0;
}