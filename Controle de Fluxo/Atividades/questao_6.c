/*
Faça um programa para qualificar a temperatura:
– Se a temperatura for menor do que 20 oC, então está frio;
– Se a temperatura estiver entre 20 oC e 30 oC, então está agradável;
– Se a temperatura for maior do que 30 oC, então está quente. */

#include <stdio.h>
#include <stdlib.h>

int main_6(){
    int temperatura;
    printf("\nDigite a temperatura atual em graus Celsius: ");
    scanf("%d", &temperatura);
    system("cls");
    if (temperatura < 20) {
        printf("\nEsta frio!\n");
    } else if (temperatura >= 20 && temperatura <= 30) {
        printf("\nEsta agradavel!\n");
    } else if (temperatura > 30){
        printf("\nEsta quente!\n");
    }
}
