#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y){
    if(y == 0)
        return 1;
    else
        return x * potencia(x, y - 1);
}

int main () {
    int y, x;
    printf("Digite o valor para X e para N: ");
    scanf("%d%d", &x, &y);
    printf("Resultado de %d elevado a %d: %d\n", x, y, potencia(x, y));
    return 0;
}