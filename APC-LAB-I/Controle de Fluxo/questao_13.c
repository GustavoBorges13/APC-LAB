//Ler uma temperatura em graus Celsius e apresent�-la convertida em graus Fahrenheit. A f�rmula de convers�o �:
//         �	F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main_13(){
    setlocale(LC_ALL,"Portuguese");
    int C,F;
    printf("\nDigite a temperatura: \n");
    scanf("%d", &C);
    system("cls");
    printf("Temperatura digitada: %d�C\n", C);
    printf("\rConvertendo");

    F = (9*C+160)/5;
    printf("\nTemperatura em Fahrenheit: %d�F\n", F);
}

