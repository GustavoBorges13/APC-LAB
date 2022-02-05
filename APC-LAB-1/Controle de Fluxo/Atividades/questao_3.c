//Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
#include <stdio.h>
int main_3(){
    int n, soma;
    soma = 0;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        soma = soma + i;
    }
    printf("A soma dos %d primeiros numeros inteiros positivos -> %d\n", n, soma);
}
