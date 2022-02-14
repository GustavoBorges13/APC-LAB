#include <stdio.h>
#include <stdlib.h>

void verifica(int *TAM, int *vetor2, int n, int *x){
    int i,true=0;
    for (i=0;i<=TAM;i++){
        if (vetor2[i]==n){
            true=1; //A condição é verdadeira para n!
            printf ("O n=%i foi encontrado no vetor!\n",n,i);
        }
    }
    if(true==0){ //Se a condição for falso para n!
        printf("O n=%i NAO foi encontrado no vetor!\n",n);
    }
    true=0; //inverte o estado de true para false.

    for (i=0;i<=TAM;i++){
        if (vetor2[i]==*x){
            true=1; //A condição é verdadeira para x!
            printf ("O x=%i foi encontrado no vetor!\n",*x,i);
        }
    }
    if(true==0){ //Se a condição for falso para x!
        printf("O x=%i NAO foi encontrado no vetor!\n",*x);
    }
}

int main(){
    int TAM=0,vetor[TAM],n,x,i;

    printf("Digite o TAMANHO do vetor: "); 
    scanf("%i",&TAM);

    for (i=0; i<TAM;i++){
        printf("Vetor[%i]: ",i);
        scanf("%i",&vetor[i]);
    }

    printf("\nDigite o valor de n -> ");
    scanf("%i",&n);
    printf("Digite o valor de x -> ");
    scanf("%i",&x); printf("\n");
    
    verifica(TAM,vetor,n,&x);
    printf("\n");
    exit(0);
}