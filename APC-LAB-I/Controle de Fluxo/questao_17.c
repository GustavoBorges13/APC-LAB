//Escreva um programa que leia 10 n�meros e imprima o maior deles e quantas vezes o maior n�mero foi lido.
#include <stdio.h>
#include <locale.h>
int main_17(){
    setlocale(LC_ALL,"Portuguese");
    int num[11];
    int maior,count,aux;
    count = 0;

    for (int i = 0; i <= 9; i++){
        printf("Digite um n�mero: ");
        scanf("%d", &num[i]);
        if (maior < num[i]){
            maior = num[i];
        }
    }
    for (int i = 0; i <= 9; i++){
        if (num[i] == maior){
            count++;
        }
    }
    printf("\n O maior n�mero � %d", maior);
    printf("\n Foi lido %d vezes\n\n", count);
    system("pause");
    return 0;
}
