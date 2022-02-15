#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float calculo(int *l,int *m, float *p,float *raio, float *altura){
    /* LEGENDA
    l = quantidade de litros de 1 lata.
    m = quantidade em metros quadrados que cada lata de tinta pinta.
    p = preço da lata de tinta.
    raio = raio da circuferencia do tanque de combustível cilíndrico.
    altura = altura do tanque de combustivel cilíndrico.
    */

    float area,litros_total,latas_total;
    system("cls");
    printf("Cálculo!");

    area = 2*M_PI*(*raio)*((*altura)+(*raio));
    litros_total = area / *m;
    latas_total = litros_total / *l;

    printf("\n\nAREA: %1.2f",area);
    printf("\nLitros: %1.2f  |   Latas: %1.2f",litros_total,latas_total);

}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int qtd_litros=5,metros_quadrados=3; float preco_lata_de_tinta=20,raio,altura;

    printf("A lata de tinta custa R$%1.2f.\n",preco_lata_de_tinta);
    printf("Cada lata contém %d litros.\n",qtd_litros);
    printf("Cada litro de tinta pinta %d metros quadrados.\n",metros_quadrados);
    printf("\nEste programa, portanto, irá calcular a quantidade\nde latas de tinta necessárias e o custo para pintar\ntanques cilíndricos de combustível.\n",metros_quadrados);
    printf("\nPressione qualquer tecla para prosseguir...");
    system("pause");

    system("cls");
    printf("Utilize vírgula para separação decimal!\n");
    printf("Digite o valor (cm) do raio do tanque de combustível: ");
    scanf("%f",&raio);
    printf("Digite a altura (cm) do tanque de combustível: ");
    scanf("%f",&altura);

    calculo(&qtd_litros,&metros_quadrados,&preco_lata_de_tinta,&raio,&altura);
}