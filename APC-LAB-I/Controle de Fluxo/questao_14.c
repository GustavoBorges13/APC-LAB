//Escreva um algoritmo que leia três números e os imprima em ordem crescente (!= da questão 6).
#include <stdio.h>
#include <locale.h>
int main_14(){
    setlocale(LC_ALL,"Portuguese");
    int num[4];
    int maior, menor, meio,aux;

    for (int i = 1; i <= 3; i++){
        printf("Digite um número: ");
        scanf("%d", &num[i]);
    }

    if(num[1] > num[2]){
        aux=num[1];
        num[1]=num[2];
        num[2]=aux;
    }
    if(num[2] <= num[3]){
        printf("\nA ordem crescente e: %d %d %d\n",num[1],num[2],num[3]);
    } else {
        if(num[1] <= num[3]){
            printf("\nA ordem crescente e: %d %d %d\n",num[1],num[3],num[2]);
        } else {
            printf("\nA ordem crescente e: %d %d %d\n",num[3],num[1],num[2]);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
