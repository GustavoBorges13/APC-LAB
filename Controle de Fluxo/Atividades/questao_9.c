//Escreva um programa que leia um número inteiro e determine se ele é par ou ímpar.
#include <stdio.h>
int main_9(){
    int num;
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if (num % 2) {
        printf("\n%d -> impar\n", num);
    } else {
        printf("\n%d -> par\n", num);
    }
}
