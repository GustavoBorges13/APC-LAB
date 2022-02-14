#include <stdio.h>
#include<conio.h>

void InverteS(int *total,char *s){
    int i;

    printf("Qtd. palavras: %i",total);
    printf("\nSeu texto invertido ficou: ");
    for(i=total; i>=0;i--)
        printf("%c",s[i]);
    return 0;
}

int strlen(char *s) //conta quantas palavras tem a string digitada
{
    int total=0;
    while( s[total] != '\0')
        total++;
    return total;
}

int main() {
    char s[50]; int total;

    printf("Digite uma palavra para inverter (SEM ESPAÇOS): ");
    scanf("%s",s);

    total = strlen(s);
    InverteS(total,s); 
    printf("\n");
    return 0;
}