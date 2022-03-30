#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int imprime(char num[100],int i) {
    return num[i];
}

main() {
    setlocale(LC_ALL, "Portuguese");
    int i;
    char str[100];
    printf("\n Insira um número qualquer inteiro: ");
    scanf("%s",str);
    printf(" Total de digitos: %d\n", strlen(str));
    printf(" Resultado com a função recursiva: ");
    for(i=0;i<=strlen(str);i++)
        printf("%c", imprime(str,i));

    printf("\nObs.: os pontos foram considerados como digitos.")
    return 0;
}