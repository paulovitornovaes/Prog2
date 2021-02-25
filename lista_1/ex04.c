#include <stdio.h>
// FALTA FAZER VALIDACAO DAS ENTRADAS!!
float n1, n2, n3, result;

int entrada(){

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);

    printf("As notas valem respectivamente %.1f, %.1f e %.1f\n", n1, n2, n3);
    return n1, n2, n3;
}

int calcMedia(){
    entrada();
    return result = (n1 + n2 + n3) / 3;
}

int main(){
    calcMedia();
    printf("O resultado da média é %.1f\n", result);
    if (result >= 6){
        printf("Voce passou!");
    }
    else if(6 > result && result >=4){
        printf("Voce reprovou mas tem direito a VS");
    }
    else if(4 > result){
        printf("Voce reprovou e nao tem direito a VS");
    }
    return 0;
}
