#include <stdio.h>
int ordem_crescente(int num) {
    if(num==0) return 0;
    else
        return num;
}

main() {
    int m,i;
    printf("\n Insira um número: ");
    scanf("%d", &m);
    printf("\n Resposta: ");
    for(i=0; i<=m; i++)
        printf("%d ", ordem_crescente(i));
    return 0;
}