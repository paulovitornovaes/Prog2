/* Ordenação bolha recursiva */
void bolha_rec(int n, int *v)
{
    int i;
    int troca = 0;
    for (i = 0; i < n - 1; i++)
        if (v[i] > v[i + 1])
        {
            int temp = v[i]; /* troca */
            v[i] = v[i + 1];
            v[i + 1] = temp;
            troca = 1;
        }
    if (troca != 0 && n > 1){
        bolha_rec(n - 1, v);/* houve troca e n>1 */
    } 
            
}