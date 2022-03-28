#include <stdio.h> 
#include <conio.h>

// Função Recursiva
int fat_recursiva(int n) {
    int resposta;
    printf("\nNa função recursiva... ");
    if (n == 1)
        return (1);
    // chamada recursiva
    resposta = fat_recursiva(n - 1) * n;
    return (resposta);
}

// Função não-Recursiva
int fat(int n){
    int i, resposta = 1;
    printf("\nNa função não-recursiva... ");
    for (i = 1; i <= n; i++)
        resposta = resposta * i;
    return (resposta);
}

main(){
    int num, result;
    printf("Digite um número: ");
    scanf("%d", &num);
    result=fat_recursiva(num);
    printf("\nResultado: %d", result);
    //printf("\nResultado: %d", fat_recursiva(num););printf("\nResultado: %d",fat(num));
    getch();
}