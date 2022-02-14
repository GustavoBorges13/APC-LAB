#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//PROTOTIPO DA FUNÇÃO CALCULO
float calculo(float *x1, float *x2, float *y1, float *y2){
    float formula;
    printf("\nValor de x1: %1.2f",*x1);
    printf("\nValor de x2: %1.2f",*x2);
    printf("\nValor de y1: %1.2f",*y1);
    printf("\nValor de y2: %1.2f",*y2);
    formula = sqrt(pow(((*x2)-(*x1)),2)+ pow(((*y2)-(*y1)),2));
    return formula;
}

int main(){
    float x1,x2,y1,y2,resultado;

    //COLETA DE DADOS - PLANO P
    printf("Numeros reais sao aceitos! Utilize '.' para separacao decimal.\n");
    printf("Digite o valor dos pontos do plano P(x1,y1)\n");
    printf("Valor do ponto x1: "); scanf("%f",&x1);
    printf("Valor do ponto y1: "); scanf("%f",&y1);

    //PLANO Q
    printf("\nDigite o valor dos pontos do plano Q(x2,y2)\n");
    printf("Valor do ponto x2: "); scanf("%f",&x2);
    printf("Valor do ponto y2: "); scanf("%f",&y2);

    system("cls"); //limpa a tela

    //Função que irá calcular a distancia entre os pontos.
    resultado = calculo(&x1,&x2,&y1,&y2);
    printf("\n\nResultado da distancia entre os pontos: %1.2f\n",resultado);
    exit(0);
}