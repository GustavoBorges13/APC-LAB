#include <stdio.h>
int soma(int num){
    if(num==1) return 1;
    else
        return (num+soma(num-1));
}

main(){
    int n;
    printf("\n Digite um nº para ser calculado a soma com seus antecessores: ");
    scanf ("%d", &n);
    printf("\n%d", soma(n));
}