/* 
A cadeia que representa a parte local de um endereço de e-mail Hotmail válido (aquela parte
que vem à esquerda do “@”) tem no máximo 64 caracteres e pode conter apenas letras (‘a’ a ‘z’) e
números (‘0’ a ‘9’), e os caracteres ponto (‘.’), hífen (‘-’) e sublinhado (‘_’). Quaisquer outros
caracteres especiais ou letras acentuadas não são permitidos. Além disso, a cadeia deve conter no
mínimo duas letras ou números, seu primeiro caractere tem que ser necessariamente uma letra, e
o caractere ponto (“.”) não pode aparecer em sequência ou ser o último da cadeia. Por exemplo,
“jsilva”, “t.o.n.y-99_”, “x-__7-” são strings válidas, enquanto “3marias”, “_peter”, “bia.”, “abc...z”
são incorretas. Escreva uma função em C que receba como parâmetros a cadeia s, representando
a parte local de um endereço de e-mail, e retorne 1 se a cadeia for válida de acordo com as
condições descritas, ou 0, se for inválida. A função deve ter o seguinte protótipo:

int valida_mail(char *s);
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


// #1 S� pode ter 64 caracteres -> Se tu receber algo maior j� retorna false (X)
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
        // #3 N�o pode ter 2 . seguindos (Criar uma variavel que conta a sequencia de elementos com)
        if (c == '.') {
            if (verificaPonto == 1) {
                r = 0;
                break;
            } else {
                verificaPonto = 1;
            }
        }
        // #4 Ultimo caracter n�o pode ser ponto (if i = len-1 n�o pode ser) (X)
        if (i == tamanhoEmail - 1) {
            if (c == '.') {
                r = 0;
                break;
            }
        }
        // #5 Tem que ter no minimo 2 letras ou 2 numeros (Fazer um contador para contar essa valida��o)

        if (isalnum(c)) {
            contadorLn += 1;
        }

        // #6 S� pode A-Z | 0 E 9 | . - _ (IF que valida esses caras)
        // if ("� numero" || "� ltra") // soma no contadorLn

        if (c != '.' && c != '-' && c != '_' && !isalnum(c)) {
            r = 0;
            break;
        }
    }
    // valida��o contadorLn � maior > 2 se sim, tudo certo, sen�o ta false
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
        printf("Email inv�lido");
    }

    printf("\n\n\%s@mail.com", mail);
    return 0;
}