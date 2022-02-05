//Escreva um programa que leia três números e imprima o maior deles (!= da questão 7).
#include <stdio.h>
#include <locale.h>
int main_15(){
    setlocale(LC_ALL,"Portuguese");
    int num[4];
    int maior;

    for (int i = 1; i <= 3; i++){
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
