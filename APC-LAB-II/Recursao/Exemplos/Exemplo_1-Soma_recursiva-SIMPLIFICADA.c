#include <stdio.h>
int soma(int num){
    return num;
}

main(){
    int n;
    printf("\n Digite um nº para ser calculado a soma com seus antecessores: ");
    scanf ("%d", &n);
    printf("\n%d", soma(n));
}