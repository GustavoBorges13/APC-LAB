#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3 //Quantas vezes o usuario irá digitar e tamanho do vetor.

int ordem(); //PROTOTIPO DA FUNÇÃO.

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i,vetorTECLADO[TAM];
    for(i=0;i<TAM;i++){
        printf("Digite um número inteiro para armazenar no vetor[%i]: ",i);
        scanf("%i",&vetorTECLADO[i]);
    }
    ordem(vetorTECLADO); //INICIA A FUNÇÃO
    printf("\nFunção - ordem crescente foi realizada com sucesso!");
    printf("\nRESULTADO:"); //Comprova que os ponteiros alteraram o endereço através da função.
    for (i=0;i<TAM;i++){
        printf("\nVetor[%i]: %i", i,vetorTECLADO[i]);
    } 
    printf("\n\n"); exit(0);
}

int ordem(int *vet){
    int i,j,temp;
    for (i=0;i<TAM;i++){
        for(j=i+1;j<TAM;j++){
            if(vet[i]>vet[j]){
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;                
            }
        }
    }
}