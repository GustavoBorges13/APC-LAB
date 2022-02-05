#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int vTAM = 15;

/* PROTOTIPOS */
int armazena(int i,float *vetorX,float *vetorY); //Guarda cada conjunto em um vetor diferente.
int escalar(int i,float *New_vetorX,float *New_vetorY); //Calcula o produto escalar entre os vetores.
int imprimir(float resultado, float *vetorX, float *vetorY); //Imprime os vetores e o resultado.


void main() {
    setlocale(LC_ALL, "Portuguese");
    int i;
    float vetorX[vTAM],vetorY[vTAM],resultado;

    //COLETA DE DADOS VETORES X e Y.
    printf("Utilize ',' para separacao decimal!\n");
    printf("Digite um número real para cada posição dos vetores XY (Ex: 1,23):");
    for (i = 0; i < vTAM; i++){
        printf("\nVetorX[%i]: ", i);
        scanf("%f", &vetorX[i]);
        printf("VetorY[%i]: ", i);
        scanf("%f", &vetorY[i]);
        resultado = armazena(i,vetorX,vetorY);
        printf("Soma Parcial = %1.2f\n", resultado);
    }
    imprimir(resultado,vetorX,vetorY);
    return 0;
}

int armazena(int i,float *vetorX,float *vetorY){
    float New_vetorX[vTAM],New_vetorY[vTAM];
    New_vetorX[i] = vetorX[i]; //Armazena valores de X em outro vetor.
    New_vetorY[i] = vetorY[i]; //Armazena valores de Y em outro vetor.
    escalar(i,New_vetorX,New_vetorY);
}

int escalar(int i, float *New_vetorX, float *New_vetorY){
    float produto_escalar;
    produto_escalar = produto_escalar + (New_vetorX[i] * New_vetorY[i]);
    return produto_escalar;
}

int imprimir (float resultado, float *vetorX, float *vetorY){
    int i;
    printf("\nSOMA TOTAL (Produto escalar) = %1.2f\n", resultado);

    printf("Conjunto do vetor X: {");
    for(i=0;i<vTAM;i++){
        if(i<vTAM-1){
            printf("%1.2f, ",vetorX[i]);
        }else if(i=vTAM-1){
            printf("%1.2f}\n",vetorX[i]);
        }
    }
    printf("Conjunto do vetor Y: {");
    for(i=0;i<vTAM;i++){
        if(i<vTAM-1){
            printf("%1.2f, ",vetorY[i]);
        }else if(i=vTAM-1){
            printf("%1.2f}\n\n",vetorY[i]);
        }
    }
    return 0;
}