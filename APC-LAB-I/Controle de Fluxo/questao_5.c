//Dados um inteiro x e um inteiro não negativo n, calcular x^n.
#include <stdio.h>
#include <math.h>
int main_5(){
    int x,n, potencia;
    printf("\nDigite o valor de x: ");
    scanf("%d", &x);
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);
    double pow(x,n);
    potencia = pow(x,n);
    printf("\nO resultado do calculo %d^%d = %d",x,n,potencia);
}
