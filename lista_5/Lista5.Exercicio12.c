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