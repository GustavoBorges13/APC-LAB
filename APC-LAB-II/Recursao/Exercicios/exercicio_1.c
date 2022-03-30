#include <stdio.h>
int soma(int num){
    if(num==0) return 0;
    else
        if(num%2==0)
            return (num+soma(num-1));
        else   
            return soma(num-1);
}   

main(){
    int n;
    printf("\n Digite um nº para ser calculado a soma com seus antecessores: ");
    scanf ("%d", &n);
    printf("\n Resultado: %d\n\n", soma(n));
}