/*
Escreva um programa que calcule o salário semanal de um trabalhador. As entradas
são o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se
acrescenta nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas
horas. Acima de 60h há um bônus de 100% para essas horas.
 */
#include <stdio.h>


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

