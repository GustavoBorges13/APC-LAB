#include <stdio.h>
#include <locale.h>
int main_27(){
    setlocale(LC_ALL,"Portuguese");
    float consumo_medio, distancia_total, combustivel, valor_gasto_reais, preco_gasolina;
    printf("Digite o pre�o da gasolina em reais: "); //R$6,68 - 1 L
    scanf("%f", &preco_gasolina);
    printf("Digite a dist�ncia total percorrida em km: ");
    scanf("%f", &distancia_total);
    printf("Digite a qtd. de combust�vel do ve�culo em L: ");
    scanf("%f", &combustivel);

    consumo_medio = distancia_total/combustivel;
    printf("\nO consumo m�dio do ve�culo: %2.2f Km/L\n", consumo_medio);

    valor_gasto_reais = consumo_medio*preco_gasolina;
    printf("\nO valor gasto em reais � de R$%2.2f.\n",valor_gasto_reais);
}
