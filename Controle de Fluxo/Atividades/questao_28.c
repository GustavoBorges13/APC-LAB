/*Fa�a um programa que receba 2 valores para as vari�veis A e B e efetue a troca dos valores nas vari�veis.
Apresentar os valores antes e ap�s a troca.*/
#include <stdio.h>
#include <locale.h>
int main_28(){
    setlocale(LC_ALL,"Portuguese");
    int A,B, aux;
    printf("Digite um n�mero para a vari�vel A: ");
    scanf("%d", &A);
    printf("Digite um n�mero para a vari�vel B: ");
    scanf("%d", &B);

    //TROCA DOS VALORES
    printf("A = %d\nB = %d\n",A, B); //print os valores digitados
    aux = A;
    A = B;
    B = aux;
    printf("\nTROCA\n\nA = %d\nB = %d\n",A, B); //print os valores trocados
}
