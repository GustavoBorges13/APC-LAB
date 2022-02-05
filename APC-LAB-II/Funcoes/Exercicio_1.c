#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i,x,y,posicao_vetorX,posicao_vetorY,tamX=0,tamY=0, qtdX=0,qtdY=0;
    int vetor[8],vetorX[tamX],vetorY[tamY];

    //Coletar dados VETOR
    printf("Digite um numero inteiro para armazenar no VETOR!\n");
    for (i=0; i<8; i++){
        printf("Vetor[%i]: ", i);
        scanf("%i", &vetor[i]);
    }
    
    //Coletar dados X e Y
    printf("\nAtribua um valor para X e Y (inteiro).\n");
    for (i=0; i<2; i++){
        if (i<1){
            printf("Valor de X: ");
            scanf("%i", &x);
        }else if(i=1){
            printf("Valor de Y: ");
            scanf("%i", &y);
        }
    }
    printf("\n...");
    system("cls");

    //Print todos dados anotados/salvos para o usuario conferir.
    printf("Os seus DADOS foram anotados com sucesso!\n");
    printf("VETOR ATUAL: {");
    for (i=0; i<8; i++){
        if(i<7){
            printf("%i, ", vetor[i]);
        }else if(i=7){
            printf("%i}", vetor[i]);
        }
    } 
    printf("\nX = %i  |  Y = %i", x,y);
    printf("\n\nVerificando agora se há interseção de X e Y no conjunto do VETOR ATUAL.\n");
    printf("...\n");

    //Verifica a interseção.
    //Qtd de vezes que apareceram e SOMA entre si.
    for (i=0;i<8;i++){
        if(x == vetor[i]){
            qtdX = qtdX + 1;
            vetorX[tamX++] = x;
        }
        if(y == vetor[i]){
            qtdY = qtdY + 1;
            vetorY[tamY++] = y;
        }
    }

    //Anota quantas vezes X e Y apareceram.
    printf("\nQuantas vezes o numero %i(X) apareceu no vetor: { ",x);
    for (i=0;i<tamX;i++){
        printf("%i ", vetorX[i]);
    }
    printf("} = %i vezes.", qtdX);
    printf("\nQuantas vezes o numero %i(Y) apareceu no vetor: { ",y);
    for (i=0;i<tamY;i++){
        printf("%i ", vetorY[i]);
    }
    printf("} = %i vezes.\n", qtdY);

    //Mostra para o usuario as posições onde X e Y foi encontrado.
    if (qtdX == 0){
        printf("\nNão foi encontrado o X no vetor!");
    }else{
        printf("\nFoi encontrado o X nas seguintes posições do vetor: ");
        for (i=0; i<8; i++){
            if(x == vetor[i]){
                printf("Vetor[%i] ",i); }}
    }
    if (qtdY == 0){
        printf("\nNão foi encontrado o Y no vetor!");
    }else{
        printf("\nFoi encontrado o Y nas seguintes posições do vetor: ");
        for (i=0; i<8; i++){
            if(y == vetor[i]){
                printf("Vetor[%i] ",i); }}
    }

    //finalização1
    printf("\n\nFIM... Digite qualquer tecla para encerrar.");
    system("pause >> null");
    exit(0); //Encerra.
}