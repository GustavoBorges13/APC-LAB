#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,*p_1,**p_2,**p_3,***p_4;
    i=4;
    j=5;
    p_1 = &j;
    p_2 = &p_1;
    p_3 = p_2;
    p_4 = &p_3;

    printf("i=%i\nj=%i\np_1=%i\np_2=%i\np_3=%i\np_4=%i",&i,&j,&p_1,&p_2,&p_3,&p_4);
    printf("\n\n");

    printf("i=%i\n*p_2=%i\n&j=%i\n&p_2=%i\n**p_3=%i\n**p_4=%i\n***p_4=%i\n*p_1=%i\n*&p_2=%i\n*p_4=%i",i,*p_2,&j,&p_2,**p_3,**p_4,***p_4,*p_1,*&p_2,*p_4);
    printf("\n\n");
}