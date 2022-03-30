#include <stdio.h>
int fibonacci(int num) {
    if(num==0)
        return 0;
    if(num==1)
        return 1;
    else
        return fibonacci(num-1) + fibonacci(num-2);
}

main() {
    int n,i;
    printf("\n\nDigite a quantidade de termos da sequência de Fibonacci: ");
    scanf("%d", &n);
    printf("A sequência de Fibonacci e: \n");
    for(i=0; i<n; i++)
        printf("%d ", fibonacci(i));
    printf("\n\n"); return 0;
}