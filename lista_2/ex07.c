#include <stdio.h>

// FALTA FAZER MAIS TESTES
int main(){
    int HorasSemana, ValorHora, resultado;

    printf("Digite quantas horas voce trabalhou: \n");
    scanf("%d", &HorasSemana);
    printf("Digite qual valor da sua hora / trabalho: \n");
    scanf("%d", &ValorHora);


    if(HorasSemana <= 40){
        resultado = HorasSemana * ValorHora;
        printf("%d R$ recebido.\n", resultado);

    }
    else
        if(40 < HorasSemana && HorasSemana <= 60){
            resultado = (HorasSemana * ValorHora) + ((HorasSemana * ValorHora) / 2);
            printf("%d R$ recebido.\n", resultado);
        }


        if(60 < HorasSemana){
            resultado = (HorasSemana * ValorHora) * 2;
            printf("%d R$ recebido.", resultado);
        }

    return 0;
}

