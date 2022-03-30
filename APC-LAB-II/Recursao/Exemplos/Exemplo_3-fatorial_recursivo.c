#include <stdio.h>
int fat(int num){
    if(num==0)
        return 1;
    else
        return num*fat(num-1);
}
/* ou poderia usar:
int fat(int num){
    int i,f=1;
    for(i=1;i<=num;i++)
        f=f*i;
    return f;
}
*/
main() {
    int m;
    printf("\n Insira um número: ");
    scanf("%d", &m);
    printf("\n Resposta: %d", fat(m));
    return 0;
}