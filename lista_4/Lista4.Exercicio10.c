#include <stdio.h>
#define MAX 20
//FALTOU A E QUE EU NAO SEI FAZER

//A
int respostasOtimas(int *vetorOpniao);
//B
int BomRegularVariacao(int *vetorOpniao);
//C
int MediaIdade(int *vetorOpniao);
//D
int MaiorIdadePessimo(int *vetorOpniao, int *Pmaior, int *Pquantidade);

int main(){
    //variaveis para retornar funcoes
    int qtdOtimas; //A
    float dif; //B
    int qtdRuim; //C
    int qtdPessimo, maior; //D

    //criar um formulário com loop, para sair o usuario vai digitar o numero 1 quando solicitado
    int idade[MAX], opniao[MAX];

    int exit = 0, i;

    for(i = 0; i <= MAX; i++){

        //FORMULARIO BASICO
        //INPUT DA IDADE E JOGA NO VETOR IDADE
        printf("Idade do entrevistado: \n");
        scanf("%d", &idade[i]);
        fflush(stdin);

        //INPUT DA OPNIAO E JOGA NO VETOR OPNIAO
        printf("O filme foi: \n");
        printf("[1] -> Pessimo / [2] -> Ruim / [3] -> Regular / [4] -> Bom / [5] -> Otimo\n");
        scanf("%d", &opniao[i]);
        fflush(stdin);

        //INCREMENTA PARA COLOCAR PROXIMOS REGISTROS EM ESPACOS DIFERENTES DO VETOR
        i++;

        //INPUT PARA SABER SE CONTINUAR NO LOOP OU NAO
        printf("Deseja continuar? [0] -> NAO [1] -> SIM \n");
        scanf("%d", &exit);
        fflush(stdin);
        if(exit == 0){
            break;
        }
    }

    //chamada das funcoes

    //quantidade de respostas otimo

    qtdOtimas = respostasOtimas(opniao);

    printf("%d respostas otimas registradas!\n", qtdOtimas);

    //variacao percentual entre respostas boas e regulares
    dif = BomRegularVariacao(opniao);
    printf("A diferenca entre respostas bom e regular eh: %.2f\n", dif);

    //Media de quem votou na opcao ruim
    qtdRuim = MediaIdade(opniao);
    printf("A media de idades dos que escolheram a opcao ruim eh: %d\n", qtdRuim );

    // Porcentagem de quem votou pessimo e a maior idade de quem escolheu tal opcao
    MaiorIdadePessimo(opniao, &maior, &qtdPessimo);

    printf("Porcentagem de pessimo eh: %d\n", qtdPessimo);
    printf("A maior idade que votou em pessimo eh: %d\n", maior);

    return 0;
}

//quantidade de respostas otimo
int respostasOtimas(int *vetorOpniao){
    int i, soma = 0;
    for(i = 0; i <= *vetorOpniao; i++){
        if (vetorOpniao[i] == 5){
            soma++;
        }
    }

    return soma;

}

//variacao percentual entre respostas boas e regulares
int BomRegularVariacao(int *vetorOpniao) {
    int br = 0;
    float dif = 0;
    for (int i = 0; i <= 20; i++){
        if (vetorOpniao[i] == 3){
            br++;
            dif++;
        }
        else if(vetorOpniao[i] == 4){
            br++;
        }

    }

    dif = br - dif;
    dif = dif / br;
    dif = dif * 100;

    return dif;


}

//Media de quem votou na opcao ruim
int MediaIdade(int *vetorOpniao){
    int qtdRuim = 0, cont = 0;
    for (int i = 0; i <= 20; i++){
        if (vetorOpniao[i] == 4){
            qtdRuim += vetorOpniao[i];
            cont++;
        }
    }
    qtdRuim = qtdRuim / cont;
    return qtdRuim;
}

//Porcentagem de respostas pessimas e qual foi a maior idade de quem votou nessa opcao
int MaiorIdadePessimo(int *vetorOpniao, int *PMaior, int *Pquantidade){

    int qtdPessimo = 0;
    int total = 0, maior = 0;

    for (int i = 0; i <= 20; i++){
        if (vetorOpniao[i] == 5){
            qtdPessimo++;
            if (maior < vetorOpniao[i]){
                maior = vetorOpniao[i];
            }
        }
        total++;

    }
    qtdPessimo = (qtdPessimo / total) * 100;

    *Pquantidade = qtdPessimo;
    *PMaior = maior;


    return 0;
}