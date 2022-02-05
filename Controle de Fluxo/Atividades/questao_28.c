/*Faça um programa que receba 2 valores para as variáveis A e B e efetue a troca dos valores nas variáveis.
Apresentar os valores antes e após a troca.*/
#include <stdio.h>
#include <locale.h>
int main_28(){
    setlocale(LC_ALL,"Portuguese");
    int A,B, aux;
    printf("Digite um número para a variável A: ");
    scanf("%d", &A);
    printf("Digite um número para a variável B: ");
    scanf("%d", &B);

    //TROCA DOS VALORES
    printf("A = %d\nB = %d\n",A, B); //print os valores digitados
    aux = A;
    A = B;
    B = aux;
    printf("\nTROCA\n\nA = %d\nB = %d\n",A, B); //print os valores trocados
}
