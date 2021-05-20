int mdc_recursiva(int a, int b) //funcao que tem parametros inteiro a e inteiro b
{
    printf("\n%d e %d", a, b); //imprime os valores passados por parametro de a e b
    if (a % b == 0)            // se o resto da divisao de a / b for igual a 0 retorna o b
        return b;
    return mdc_recursiva(b, a % b); //senao retorna a mesma funcao, mas o inteiro a recebe valor inteiro b
    //e o inteiro b recebe como parametro o resto da divisao de a / b
    //vai ser feito até o resto da divisão ser zero, pois quebra o looping
}
int main()
{
    int a = 32, b = 18;                            //inteiro a recebeu 32 e inteiro b recebeu 18
    printf("\nResultado=%d", mdc_recursiva(a, b)); // vai printar 2 pois é o resultado final (quando acaba a função recursiva)
    //antes disso a função vai printar 18 e 4
    //14 e 4
    //4 e 2
}