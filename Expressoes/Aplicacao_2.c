#include <stdio.h>
main ( ){
    char a ;
    printf ("Digite um caracter: " );
    scanf ("%c", &a );
    printf ("\n O caracter: %c = %d em decimal: ",  a, a);
    printf ("\n %o em octal, %x em hexadecimal",  a,  a);
}
