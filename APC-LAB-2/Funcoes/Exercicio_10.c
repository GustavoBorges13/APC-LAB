#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int vTAM = 4;

/* PROTOTIPOS */
int Matriz(float *numero,float *altura); //Guarda cada conjunto em um vetor diferente.
int busca(float *matriz); //Calcula o produto escalar entre os vetores.

main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    float numero[vTAM],altura[vTAM],resultado,array;

    //COLETA DE DADOS VETORES X e Y.
    printf("Utilize ',' para separacao decimal!\n");
    printf("Digite as informações de cada aluno abaixo:");
    for (i = 0; i<vTAM; i++){
        printf("\nNumero de identificação do aluno[%i]: ", i);
        scanf("%f", &numero[i]);
        printf("Altura em metros do aluno[%i]: ", i);
        scanf("%f", &altura[i]);
    }
    array = Matriz(numero,altura);
    return 0;
}

int Matriz(float *numero,float *altura){
    int n,m,NColunas=2;
    float matriz[vTAM][NColunas],resultado;
    system("cls");
    
    //Fazer um array dos vetores para dentro de uma matriz.
    for (n=0;n<vTAM;n++){
        for(m=0;m<NColunas-1;m++){
            matriz[n][m] = numero[n];
        }
        for(m=1;m<NColunas;m++){
            matriz[n][m] = altura[n];
        }
    }

    for (n=0;n<vTAM;n++){
        for(m=0;m<NColunas-1;m++){
            printf("\nElemento[%i][%i] = %1.f",n,m,matriz[n][m]);
        }
        for(m=1;m<NColunas;m++){
            printf("\nElemento[%i][%i] = %1.2f",n,m,matriz[n][m]);
        }
    }

    printf("\n\n------- MATRIZ -------\n");
    printf(" Numero ->\t");
    for(n=-1;n<vTAM-1;n++){
        printf("%1.f ",matriz[n][NColunas]);
    }
    printf("\n Altura ->\t");
    for(n=0;n<vTAM;n++){
        printf("%1.2f ",matriz[n][NColunas-1]);
    }
    printf("\n");
    busca(matriz);
}   

int busca(float *matriz){
    int i,posicao_alto,posicao_baixo;
    float aluno_baixo,aluno_alto,search_altura;

    for(i=0; i<vTAM;i++){
        if (i==0){
            aluno_alto= matriz[i];
            aluno_baixo = matriz[i];
            aluno_alto = i;
        }
        if (matriz[i]>aluno_alto){
            aluno_alto = matriz[i];
            posicao_alto = i;
        }
        if (matriz[i]<aluno_baixo){
            aluno_baixo = matriz[i];
            posicao_baixo = i;
        }
    }
    printf("\n\nO aluno mais ALTO encontrado foi matriz[%i]: %1.2fm.",posicao_alto,aluno_alto);
    printf("\nO aluno mais BAIXO encontrado foi matriz[%i]: %1.2fm.\n",posicao_baixo,aluno_baixo);
    return 0;
}