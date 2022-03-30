#include <stdio.h>
#include <conio.h>
int caract(char c, char s[])
{
    if (s[0] == '\0') //desconsidera espaços
        return 0;
    if (s[0] == c) //compara se a string contem o caracter a ser procurado
        return (1 + caract(c, ++s)); //faz a soma de ocorrencias
    return caract(c, ++s); //Retorna o valor total de ocorrencias para o main
}

int main(void)
{
    char str[100], caractere;
    int num_ocorrencias;
    printf("\nDigite a string: ");
    gets(str);
    printf("Digite o caractere a ser encontrado na string digitada: ");
    caractere = getchar();
    num_ocorrencias = caract(caractere, str);
    printf("Foi encontrado %d vezes\n", num_ocorrencias);
    return 0;
}
