//Escreva um programa que leia dois números e exiba os em ordem crescente.
#include <stdio.h>
int main_7(){
    float num1,num2, aux;
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    if (num1 < num2) {
        printf("\nOrdem crescente: %1.f | %1.f\n", num1, num2);
    } else {
        printf("\nOrdem crescente: %1.f | %1.f\n", num2, num1);
    }
}
