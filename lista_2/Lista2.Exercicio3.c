#include <stdio.h>

int main(){
    int n1 = 1, n2 = 1, NumTermos, NumX;
    /* n1 e n2 para serem os primeiros valores */
    /* NumTermos para ver quantos termos o usuário quer */
    /* NumX vai receber a soma de n1 + n2 */
    printf("Digite a quantidade de termos: ");
    scanf("%d", &NumTermos);
    printf("%d %d ", n1, n2);
    /* NumTermos tem que ser maior que 2 pois já é fixo a sequencia 1 1... */
    /* NumX recebe a soma de n1+n2 */
    /* n1 recebe n2 para pular uma sequencia a frente, fazendo funcionar as somas sucessivas */
    /* n2 recebe NumX pelo mesmo motivo */
    /* Decremento do NumTermos para validar o meu while */
    while(NumTermos > 2){
        NumX = n1 + n2;
        n1 = n2;
        n2 = NumX;
        printf("%d ", NumX);
        NumTermos--;
    }
    return 0;
}