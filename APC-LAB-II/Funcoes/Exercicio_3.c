#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i,valor_par,valor_impar,tamI=1,tamP=0,Qtd_impar=0, Qtd_par=0;
    int vetor[10],vetor_impar[tamI],vetor_par[tamP];

    system("cls");

    //Coleta de dados do VETOR
    printf("Digite o valor para cada posicao do vetor.\n");
    for (i=0;i<10;i++){
        printf("Vetor[%i]: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("\nVETOR ATUAL: {");
    for (i=0; i<10; i++){
        if(i<9){
            printf("%i, ", vetor[i]);
        }else if(i=9){
            printf("%i}", vetor[i]);
        }
    }

    for (i=0;i<10;i++){
        if(vetor[i]%2==0){ //NUMEROS PARES
            Qtd_par = Qtd_par + 1; //Incremento - quantas vezes apareceu par
            vetor_par[tamP++] = vetor[i]; //Salva esse valor PAR em outro vetor
        } else if (vetor[i]%2==1){ //NUMEROS IMPARES
            Qtd_impar = Qtd_impar + 1; //Incremento - quantas vezes apareceu impar
            vetor_impar[tamI++] = vetor[i]; //Salva esse valor IMPAR em outro vetor
        }
    }

    printf("\n\nPARES: { ");
    for (i=0; i<tamP; i++){
        printf("%i ", vetor_par[i]);
    }
    printf("} = %i vezes.", Qtd_par);

    printf("\nIMPARES: { ");
    for (i=1; i<tamI; i++){
        printf("%i ", vetor_impar[i]);
    }
    printf("} = %i vezes.\n", Qtd_impar);

    //finalização1
    printf("\n\nFIM... Digite qualquer tecla para encerrar.");
    system("pause >> null");
    exit(0); //Encerra.
}