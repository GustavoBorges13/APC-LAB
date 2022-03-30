#include <stdio.h>
int soma(int num) {
    if(num==0) return 0;
    else return num+soma(num-1);
}

main() {
    int m,i;
    printf("\n Insira um número: ");
    scanf("%d", &m);
    printf("\n Resposta: ");
    printf("%d ", soma(m));
    return 0;
}