//Fa�a um programa para calcular uma �rea de um ret�ngulo. Basta multiplicar o valor da base pela altura.
#include <stdio.h>
#include <locale.h>
int main_29(){
    setlocale(LC_ALL,"Portuguese");
    int area, base, altura;
    printf("Digite o valor da base de um ret�ngulo: ");
    scanf("%d", &base);
    printf("Digite o valor da altura de um ret�ngulo: ");
    scanf("%d", &altura);

    area = base*altura/2; //formula para calcular area do retangulo.

    printf("A sua �rea � igual a %d.\n", area);
}
