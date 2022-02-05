//Faça um algoritmo que gere a seguinte série: 10, 20, 30, 40, ..., 990, 1000.
#include <stdio.h>
#include<locale.h>
int main_12(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n Imprimir a série de 10 em 10 até 1000: \n");
    for(int num = 10;num<=1000;num+=10){
        printf("\n %d",num); //Printa os valores pares
    }
    printf("\n");
    return 0;
}
