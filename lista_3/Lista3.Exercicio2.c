/*
Seja o seguinte trecho de programa:
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
Qual é o valor das seguintes expressões ?
a) p == &i; b) *p - *q c) **&p d) 3* - *p/(*q)+7
*/

#include <stdio.h>


int main(){
    int a, b, c, d;
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;
    a = p == &i;
    b = *p - *q;
    c = **&p;
    d = 3* - *p/(*q)+7;
    printf("a) %d\nb) %d\nc) %d\nd) %d\n", a, b, c, d);
    return 0;
}