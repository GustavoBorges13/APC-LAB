//Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares. Exemplo: Para n 4 a saída deverá ser 1,3,5,7
#include <stdio.h>
int main_4 () {
    int i,n,impar;
    printf ("Digite o valor de n: ");
    scanf (" %d", &n);
    impar = 1;
    i = 1;
    while (i <= n) {
        printf (" %d\n", impar );
        impar += 2; //impar = impar+2
        i++; //i= i+1
    }
    return 0;
}

