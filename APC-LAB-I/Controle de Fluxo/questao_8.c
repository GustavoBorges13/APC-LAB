//Escreva um programa que leia dois números e exiba o maior deles.
#include <stdio.h>
int main_8(){
    float num1,num2, aux;
    printf("\nDigite um numero: ");
    scanf("%f", &num1);
    printf("Digite um numero: ");
    scanf("%f", &num2);
    if (num1 > num2) {
        printf("\nMaior numero: %1.f\n", num1);
    } else {
        printf("\nMenor numero: %1.f\n", num2);
    }
}
