#include <stdio.h>
#include <string.h>
#include <ctype.h>
//finalizado


// #1 Só pode ter 64 caracteres -> Se tu receber algo maior já retorna false (X)
int valida_mail(char *s) {
    int contadorLn = 0;
    int verificaPonto = 0; // false (booleana)
    int tamanhoEmail = strlen(s);
    int r = 1;

    if (tamanhoEmail > 64) {
        r = 0;
        return r;
    }

    for (int i = 0; i < tamanhoEmail; i += 1) {
        char c = s[i];
        // #2 Primeiro caracter tem q ser uma letra (If i=0 tem q ser letra)
        if (i == 0) {
            if (!isalpha(c)) {
                r = 0;
                break;
            } else {
                contadorLn += 1;
                continue;
            }
        }
        // #3 Não pode ter 2 . seguindos (Criar uma variavel que conta a sequencia de elementos com)
        if (c == '.') {
            if (verificaPonto == 1) {
                r = 0;
                break;
            } else {
                verificaPonto = 1;
            }
        }
        // #4 Ultimo caracter não pode ser ponto (if i = len-1 não pode ser) (X)
        if (i == tamanhoEmail - 1) {
            if (c == '.') {
                r = 0;
                break;
            }
        }
        // #5 Tem que ter no minimo 2 letras ou 2 numeros (Fazer um contador para contar essa validação)

        if (isalnum(c)) {
            contadorLn += 1;
        }

        // #6 Só pode A-Z | 0 E 9 | . - _ (IF que valida esses caras)
        // if ("é numero" || "é ltra") // soma no contadorLn

        if (c != '.' && c != '-' && c != '_' && !isalnum(c)) {
            r = 0;
            break;
        }
    }
    // validação contadorLn é maior > 2 se sim, tudo certo, senão ta false
    if (contadorLn < 2) {
        r = 0;
        return r;
    }

    return r;
}

int main(void) {
    int r;
    char mail[64];
    printf("Digite seu email(sem @):\n");
    scanf("%s", mail);


    r = valida_mail(mail);

    if (r == 1) {
        printf("Email valido");
    } else {
        printf("Email inválido");
    }

    printf("\n\n\%s@mail.com", mail);
    return 0;
}