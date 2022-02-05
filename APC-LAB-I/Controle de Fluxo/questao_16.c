//Escreva um programa que leia 10 números e imprima o maior deles.
#include <stdio.h>
#include <locale.h>
int main_16(){
    setlocale(LC_ALL,"Portuguese");
    int num[11];
    int maior;

    for (int i = 0; i <= 9; i++){
        printf("Digite um número: ");
        scanf("%d", &num[i]);
        if (maior < num[i]){
            maior = num[i];
        }
    }
    printf("\n O maior número é: %d\n\n", maior);
    system("pause");
    return 0;
}

