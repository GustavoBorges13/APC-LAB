//Faça um algoritmo que mostre todos os números inteiros pares de 2 a 100.
#include <stdio.h>
#include<locale.h>

int main_11(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n Imprimir os números inteiros pares de 2 a 100: \n");
    for(int num = 2; num <= 100; num++){
        if (num%2){
            //NAO FAZ NADA POIS AQUI SÃO OS VALORES IMPARES
        } else {
        printf(" %d",num); //Printa os valores pares
        }
    }
    printf("\n");
    return 0;
}
