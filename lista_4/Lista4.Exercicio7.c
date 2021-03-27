#include <stdio.h>

void CamelCase(char *s) {
    int i, j;
    for (i=0; i<20; i++) {
        if (i == 0) {
            s[i] = s[i] - 32;
        }
        if (s[i] == 32) {
            s[i] = s[i + 1] - 32;
            for (j = i + 1; s[j] != '\0'; j++) {
                s[j] = s[j + 1];
            }

        }
    }

}

int main()
{
    char s[20];

    printf("Digite uma frase: \n");
    scanf("%19[^\n]", s);

    CamelCase(s);


    printf("\n%s", s);
    return 0;

}