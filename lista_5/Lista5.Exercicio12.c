/*
Fazer um programa para receber uma string do usuário (máx. 50 caracteres) e fazer uma
estatística dos caracteres digitados. Por exemplo, para a string "O EXERCICIO E FACIL"”, a
estatística mostrada será 'O' = 2, ' '=3, 'E' = 3, 'X' = 1, 'R' = 1, 'C' = 3, 'I' = 3, 'F' = 1, 'A' = 1, 'L' = 1
*/

#include <stdio.h>
#include <string.h>

int main(void)
{

    char str[50];
    int i,j, cont = 0;

    printf("Digite uma string: ");
    gets(str);

    int len = strlen(str);
    
    for(i=0;i<len+1;i++)
    {
         cont=1;
        if(str[i])
        {

           for(j=i+1;j<len+1;j++)
          {

            if(str[i]==str[j])
            {
                 cont++;
                 str[j]='\0';
             }
          }
          printf("'%c' = %d ",str[i],cont);
       }

     }
    return 0;
}