//Faça um programa que mostre todos os números inteiros de 1 a 50, utilizando o comando while(), do...while() e for().
#include <stdio.h>
#include<locale.h>
int main_10(){
    setlocale(LC_ALL,"Portuguese");
    int num = 1;

    //WHILE()
    printf("\n Imprimir os números de 1 até 50 usando While(): \n");
    while (num<=50){
     printf(" %d",num);
     num++;
    }

    //DO WHILE
    printf("\n");
    printf("\n Imprimir os números de 1 até 50 usando DO While(): \n");
    num = 1;
    do {
        printf(" %d",num);
        num++;
    }
    while (num<=50);
    printf("\n");

    //FOR
    printf("\n");
    printf("\n Imprimir os números de 1 até 50 usando for(): \n");
    for(num = 1; num <= 50; num++){
        printf(" %d",num);
    }
    printf("\n");
    return 0;
}
