/* Analise do código */
typedef struct data {
int dia;
int mes;
char nomeMes[12];
} Data;
main()
{
Data aniversarios[3] = { {5,1,"JANEIRO"},
{4,2,"FEVEREIRO"},{10,3,"MAIO"} };
int a;
Data *p_dt;
p_dt=&aniversarios[2];
printf("Nome do mês %d é: %s.", p_dt->mes, p_dt->nomeMes);
strcpy(p_dt->nomeMes, "MARÇO");
printf("\nNúmero de letras : %d=", strlen(p_dt->nomeMes));
Data p_dt2 = (Data *) malloc(sizeof(Data));
//p_dt2 = &aniversarios[0];  --> Código com erro!
}

/*
a. O programa acima pode ter no máximo 1 erro. Caso tiver, explique qual é o erro.

b. Qual o valor mostrado na tela no segundo (último) printf?
*/

/*
9.2.a)
A alocação dinamica não funciona já que ele faz o casting de forma errada, para consertar
basta declarar p_dt2 com o * que ele será um ponteiro ao inves de uma variavel de valor.

9.2.b) 
Com o problema consertado o programa deve imprimir a quantidade de letras que MARÇO tem...
ao considerar MARÇO como MARCO, pois Ç não existe na tabela ascii, o programa imprime na tela que MARCO tem 5 letras.
*/