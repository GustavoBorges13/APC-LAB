#include <stdio.h>
int soma(int num){
    int result=0;
    if (num==1){
        printf("\n O valor somado agora eh %d", num);
        result = 1;
        return result;
    }else{
        printf("\n O valor somado agora eh %d", num);
        result = soma(num-1);
        return (num+result);
    }
}

main(){
    int n, resultado;
    printf("\n Digite um nº para ser calculado a soma com seus antecessores: ");
    scanf ("%d", &n);
    resultado = soma(n);
    printf("\n%d ", resultado);
}