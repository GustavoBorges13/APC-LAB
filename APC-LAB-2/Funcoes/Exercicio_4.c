#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//prototipo do vetor 3
int imprime_Maior_Menor(int n,int *vetor);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i,vetor[10];
    
    printf("Digite o valor de cada posição do vetor:\n");
    for(i=0;i<10;i++){
        printf("Vetor[%i]: ",i);
        scanf("%i",&vetor[i]);
    }

    //Print todos dados anotados/salvos para o usuario conferir.
    printf("Os seus DADOS foram anotados com sucesso!\n");
    printf("VETOR ATUAL: {");
    for (i=0; i<10; i++){
        if(i<9){
            printf("%i, ",vetor[i]);
        }else if(i=9){
            printf("%i}",vetor[i]);
        }
    } 

    imprime_Maior_Menor(10,vetor); //EXECUTA OUTRA FUNÇÃO

    //finalização
    printf("\n\nFIM... Digite qualquer tecla para encerrar.");
    system("pause >> null");
    exit(0); //Encerra.
}

int imprime_Maior_Menor(int n, int *vetor){
    int i,vetorMAIOR,vetorMENOR,posicao_maior=0,posicao_menor=0;
    vetorMAIOR = vetor[0];
    vetorMENOR = vetor[0];

    for (i=0;i<n;i++){
        if (i==0){
            vetorMAIOR = vetor[i];
            vetorMENOR = vetor[i];
            posicao_maior = i;
        }
        if (vetor[i]>vetorMAIOR){
            vetorMAIOR = vetor[i];
            posicao_maior = i;
        }
        if (vetor[i]<vetorMENOR){
            vetorMENOR = vetor[i];
            posicao_menor = i;
        }
    }
    printf("\n\nO MAIOR valor encontrado foi vetor[%i]: %i",posicao_maior,vetorMAIOR);
    printf("\nO MENOR valor encontrado foi vetor[%i]: %i",posicao_menor,vetorMENOR);
}