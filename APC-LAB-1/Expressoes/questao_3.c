#include <stdio.h>
/*
- Pe�a ao usu�rio para digitar 2 notas
- Leia duas notas
- Imprima as notas
- Calcule a m�dia aritm�tica
*/

int main4(){
    float nota1, nota2, media;
    printf ("\n Digite a nota 1: " );
    scanf ("%f", &nota1 );
    printf ("\n Digite a nota 2: ");
    scanf ("%f", &nota2 );
    media = (nota1 + nota2)/2;
    printf ("\n Media = %3.1f \n", media);
}
