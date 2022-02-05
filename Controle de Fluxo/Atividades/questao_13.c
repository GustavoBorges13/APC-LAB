//Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é:
//         •	F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main_13(){
    setlocale(LC_ALL,"Portuguese");
    int C,F;
    printf("\nDigite a temperatura: \n");
    scanf("%d", &C);
    system("cls");
    printf("Temperatura digitada: %d°C\n", C);
    printf("\rConvertendo");
    for(int i = 1; i <= 3; i++){ //CARREGANDO :D
        printf(".");
        sleep(1);
    }
    F = (9*C+160)/5;
    printf("\nTemperatura em Fahrenheit: %d°F\n", F);
}

