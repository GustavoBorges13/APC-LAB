#include <stdio.h>
#include <locale.h>
int main_26(){
    setlocale(LC_ALL,"Portuguese");
    float reais, dolares, valor_dolar, valor_real;
    int dolar, real = 1;
    int resposta;

    //PARTE 1
    printf("Qual o valor do dolar em reais? "); //1 dolar = 5,55 reais
    scanf("%f", &valor_dolar);
    printf("Qual o valor do real em dolar? "); //1 real = 0,18 dolar
    scanf("%f", &valor_real);

    //PARTE 2
    printf("Escolha qual op��o deseja usar para convers�o: ");
    printf("\n1 -> real para d�lar.\n2 -> d�lar para real.\n");
    scanf("%d", &resposta);

    //PARTE 3
    if (resposta == 1){ //REAL PARA DOLAR
        system("cls");
        printf("Digite o valor em REAL para converter: ");
        scanf("%f", &reais);
        dolares = (dolar*reais)/valor_dolar;
        printf("Portanto, R$%2.2f reais equivale a $%2.2f dolares.\n", reais, dolares);
    }
    if (resposta == 2){ //DOLAR PARA REAL
        system("cls");
        printf("Digite o valor em D�LAR para converter: ");
        scanf("%f", &dolares);
        reais = (real*dolares)/valor_real;
        printf("Portanto, $%2.2f dolares equivale a R$%2.2f reais.\n", dolares, reais);
    }
}
