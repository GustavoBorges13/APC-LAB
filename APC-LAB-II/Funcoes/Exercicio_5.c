#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int vTAM = 20;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i,j,vetor[vTAM],repeticao;

    printf("Digite um número inteiro para cada posição do vetor:\n");
    for(i=0;i<vTAM;i++){
        printf("Vetor[%i]: ",i);
        scanf("%i",&vetor[i]);
    }

    printf("\nSeu Vetor atual: {");
    for(i=0; i<vTAM; i++){
        if(i<vTAM-1){
            printf("%i, ",vetor[i]);
        }else if(i=vTAM-1){
            printf("%i",vetor[i]);
        }
    }
    printf("}");

    printf("\nVetor organizado sem repeticao: { ");
    for(i=0; i<vTAM; i++){
        repeticao = 0;
        for(j = i-1; j >= 0; j--){
            if(vetor[i] == vetor[j])
                repeticao = 1;
        }
        if(repeticao == 0)
            printf("%i ", vetor[i]);
    }
    printf("}\n\n");
}