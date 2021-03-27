#include <stdio.h>
#include <stdlib.h>

int main() {

    char palavra[20];
    int i;

    printf("Digite uma palavra: \n");
    scanf("%20[^\n]", palavra);

    printf("\n");

    for (i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] > 64 & palavra[i] < 91) {
            printf("%c.", palavra[i]);
        }
    }
}