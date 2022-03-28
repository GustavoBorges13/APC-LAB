#include <stdio.h>
int X(int n){
    if (n == 1 || n == 2)
        return n;
    else
        return X(n-1) + n * X(n-2);
        /*       4-1  + 4 *   4-2
                  3   + 4 *    2
                  
                 3-1  + 3 *   3-2
                  2   + 3 *    1

                  5   + 4 *    2
                  5    +   8
                      13 (retorna como resultado)
        */
}

main(){
    int n;
    printf("\n Insira um número: ");
    scanf("%d", &n);
    printf("\n Resposta: %d", X(n));
}