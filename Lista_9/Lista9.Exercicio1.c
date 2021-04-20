#include <stdio.h>
#include <stdlib.h>


typedef struct data
{
    int dia, mes, ano;
} Data;

typedef struct local
{
    char ender[81]; /* endereço do local de provas */
    int sala;       /* numero sala */
} Local;

typedef struct notas
{
    float geral;      /* prova de conhecimentos gerais */
    float especifica; /* prova de conhecimentos especificos */
} Notas;

typedef struct candidato
{
    int inscr;     /* numero de inscricao */
    char nome[81]; /* nome do candidato */
    Data nasc;     /* data de nascimento */
    Local *loc;    /* local de prova */
    Notas nt;      /* notas de prova */
} Candidato;

void mostra_candidato(int n, Candidato *vc);

void altera_local();

int main()
{

    Candidato c;
    Candidato *vc;
    int *ptam;
    int option = 0;

    c.loc = (Local *)malloc(sizeof(Local));

    while (option != 4)
    {

        printf("-----------Menu-----------\n");
        printf("[1] = Leitura de dados.\n[2] = Imprimir os dados.\n[3] = Alterar endereco de um candidato.\n[4] = Sair do programa.\n");
        printf("--------------------------\n");
        printf("Selecione uma das opcoes = ");

        scanf("%d", &option);

        
        if (option == 1)
        {

            //usuario coloca a quantidade de entrevistados no int tam
            int tam;
            printf("Digite a quantidade de candidatos a serem entrevistados = ");
            scanf("%d", &tam);
            ptam = &tam;

            vc = (Candidato *)malloc(tam * sizeof(Candidato));

            for (int i = 0; i < tam; i++)
            {
                printf("Digite o numero de inscricao = ");
                scanf("%d", &c.inscr);
                printf("\n");

                printf("Digite o nome do candidato = ");
                scanf(" %s", &c.nome);
                printf("\n");

                printf("Digite a data de nascimento= ");
                scanf("%d %d %d", &c.nasc.dia, &c.nasc.mes, &c.nasc.ano);
                printf("\n");

                printf("Digite o endereco  = ");
                scanf(" %s", &c.loc->ender);
                printf("\n");
                printf("Digite o numero da sala = ");
                scanf("%d", &c.loc->sala);
                printf("\n");

                printf("Digite a nota geral do candidato = ");
                scanf("%f", &c.nt.geral);
                printf("Digite a nota especifica do candidato = ");
                scanf("%f", &c.nt.especifica);
                printf("\n");

                vc[i] = c;
            }
        }

        if (option == 2)
        {
            mostra_candidato(*ptam, vc);
        }

        if (option == 3)
        {
            altera_local(*ptam, vc);
        }
        

    }
}

void mostra_candidato(int n, Candidato *vc)
{
    for (int i = 0; i < n; i++)
    {
        printf("Imprimindo informacoes do candidato com inscricao %d...\n", vc[i].inscr);
        printf("-------------------------------------------\n");
        printf("Data de nascimento = %d/%d/%d\n", vc[i].nasc.dia, vc[i].nasc.mes, vc[i].nasc.ano);
        printf("Endereco = %s\n", vc[i].loc->ender);
        printf("Sala = %d\n", vc[i].loc->sala);
        printf("Nota geral = %.2f\n", vc[i].nt.geral);
        printf("Nota especifica = %.2f\n", vc[i].nt.especifica);
        printf("-------------------------------------------\n");
    }
}

void altera_local(int n, Candidato *vc){
    int auxiliar;
    printf("Digite o numero de inscricao = ");
    scanf("%d", &auxiliar);
    int existe = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (vc[i].inscr == auxiliar)
        {
            existe = 1;
            printf("Digite o novo endereco = ");
            scanf(" %s", &vc[i].loc->ender);
            printf("Digite o numero da nova sala = ");
            scanf("%d", &vc[i].loc->sala);
        }
        

    }
    if (existe == 0)
    {
        printf("Essa inscricao nao existe...\nVoltando para o menu...");
        
    }


}