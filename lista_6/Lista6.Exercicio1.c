#include <stdio.h>
#include <stdlib.h>

//finalizado

float *acima_da_media(int n,float *pvetor, int *ptam);

int main(){
    int tam; // inteiro tam
    float *vetor; //vetor com aloca��o dinamica
    int *ptam; //ponteiro para o tamanho
    ptam = &tam; //atribuindo o endere�o do inteiro tam no ponteiro ptam
    float *vetresposta; //ponteiro que recebe o retorno da funcao acima_da_media

    //input no valor do tamanho que queremos para o vetor
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tam);


    //aloca��o dinamica para o vetor
    vetor = (float  *)malloc(tam * sizeof (float));
    if (vetor == NULL){
        printf("Nao consegui aloca��o dinamica\n");
    }


    // la�o para dar input nos valores desejados no vetor
    for(int i = 0; i < tam; i++){
        printf("Indice [%d] = \n", i);
        scanf("%f", &vetor[i]);
    }


    //chamada da fun��o e atribui��o do valor retornado a uma variavel do main
    vetresposta = acima_da_media(9 , vetor, ptam);


    // lendo os valores do vetresposta feito na fun�ao chamada
    printf("{");
    for (int i = 0; i < tam; i++){

        printf("%.2f ", vetresposta[i]);

    }
    printf("}");


    //liberando espa�o da aloca��o dinamica
    free(vetor);

    return 0;
}

float *acima_da_media(int n,float *vetor, int *ptam){
    float media = 0; // variavel que vai receber a soma dividido pelo valor do tamanho do vetor
    float *vetresposta; //novo vetor com aloca��o dinamica
    int contador = 0; // contador incremento

    //la�o para ver todos valores dentro do vetor e somar todos
    for(int i = 0; i < n; i++){
        media += vetor[i];
    }
    media /= n;

    //incrementando o valor de n para saber o novo tamanho do vetor
    for(int i = 0; i < n; i++){
        if (vetor[i] > media){
            contador++;
        }
    }

    //alocando espa�o para o novoVetor
    vetresposta = (float *) malloc(contador * sizeof(float));
    if (vetresposta == NULL){
        return NULL;
    }

    contador = 0; // resetando o valor do contador para usar novamente


    //la�o para dizer que s� entra valores no vetresposta se forem maior que o valor da m�dia
    for (int i = 0; i < n; ++i) {
        if (vetor[i] > media){
            vetresposta[contador] = vetor[i];
            contador++;
        }
    }

    // ponteiro tam atualizado com o valor do tamanho do novo vetor
    *ptam = contador;

    return vetresposta;

}