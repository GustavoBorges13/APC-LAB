#include <stdio.h>
#include <stdlib.h>

//prototipo do vetor 3
int calculo(int k, int *vet1,int *vet2);

int main() {
    int i,vet1[10],vet2[10];

    printf("Para o vetor 1, digite o valor de cada posição:\n");
    for(i=0;i<10;i++){
        printf("Vetor 1[%i]: ",i);
        scanf("%i",&vet1[i]);
    }

    printf("\n\nPara o vetor 2, digite o valor de cada posição:\n");
    for(i=0;i<10;i++){
        printf("Vetor 2[%i]: ",i);
        scanf("%i",&vet2[i]);
    }
    
    calculo(10,vet1,vet2); //EXECUTA OUTRA FUNÇÃO

    //finalização1
    printf("\n\nFIM... Digite qualquer tecla para encerrar.");
    system("pause >> null");
    exit(0); //Encerra.
}

//Realiza o calculo de trocar os valores dos vetores.
int calculo(int k, int *vet1,int *vet2){
    int i, vet3[20];
    for(i=0;i<k;i++){
        vet3[2*i]=vet1[i];
        vet3[2*i+1]=vet2[i];
    }
    printf("\nVetor 3: {");
    for(i=0;i<20;i++){
        if(i<20-1){
            printf("%i, ",vet3[i]);
        }else if(i=20-1){
            printf("%i}",vet3[i]);
        }
    }
    return 0;
}