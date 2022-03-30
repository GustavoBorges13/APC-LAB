#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int tamstring(char s[]) {
    if (s[0]=='\0')
        return 0;
    return 1+tamstring(&s[1]);
}

main() {
    setlocale(LC_ALL, "Portuguese");
    char str[100];
    printf("\n Insira uma string: ");
    scanf("%s",str);
    printf(" Tamanho da string: %d\n\n", tamstring(str));
    return 0;
}