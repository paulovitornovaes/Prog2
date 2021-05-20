/*
O que será impresso na tela pelo seguinte programa:
main(void)
{
char frase[80]="o rato roeu a roupa do rei de roma";
char *p;
p = frase;
p[2]='m';
p[6]='\0';
printf("%s\n", frase);
p = p + 3;
printf("%s\n",p);
printf("%d\n",strlen(frase));
} */

#include <stdio.h>
int main(){
    char frase[80]="o rato roeu a roupa do rei de roma"; //um char frase escolhido
    char *p; // um ponteiro
    p = frase; //ponteiro recebe o endere�o da frase
    p[2]='m'; //A posi��o 2 muda para m, 0 = 'o' 1 =' ' 2 = 'r'
    p[6]='\0'; //ele "corta" o resto dos chars
    printf("%s\n", frase); //printf na frase vai sair "o mato"
    p = p + 3; //adicionando +3 no ponteiro p vai fazer ele ler a posicao 3 como inicial
    printf("%s\n",p); // lendo o p que ficou apenas com a palavra "ato"
    printf("%d\n",strlen(frase));//ele vai voltar na variavel frase
    //analisar o tamanho de caracteres na frase que j� foi modificada
    //como ficou apenas o mato ele vai somar a qtd desses caracteres e mostrar na tela
    //nao esquecendo do caracter espa�o que tem em "o mato"
    return 0;
}