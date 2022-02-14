#include <stdio.h>
#include <stdlib.h>

//Inverte os valores
void troca(int *a1, int *b1){
    int temp;
    temp =*a1;
    *a1 = *b1;
    *b1 = temp;
    printf("\n- - TROCA - -");
    printf("\nValor de A = %i\nValor de B = %i\n\n",*a1,*b1);
    return 0;
}

int main(){
    int a,b;
    a=2; b=3;
    
    printf("\nANTES DA TROCA\n");
    printf("Valor de A = %i",a);
    printf("\nValor de B = %i\n",b);

    troca(&a,&b);

    printf("\nDEPOIS DA TROCA\n");
    printf("Valor de A = %i",a);
    printf("\nValor de B = %i\n\n",b);

    exit(0);
}