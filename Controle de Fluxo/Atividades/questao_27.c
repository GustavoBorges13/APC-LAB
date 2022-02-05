#include <stdio.h>
#include <locale.h>
int main_27(){
    setlocale(LC_ALL,"Portuguese");
    float consumo_medio, distancia_total, combustivel, valor_gasto_reais, preco_gasolina;
    printf("Digite o preço da gasolina em reais: "); //R$6,68 - 1 L
    scanf("%f", &preco_gasolina);
    printf("Digite a distância total percorrida em km: ");
    scanf("%f", &distancia_total);
    printf("Digite a qtd. de combustível do veículo em L: ");
    scanf("%f", &combustivel);

    consumo_medio = distancia_total/combustivel;
    printf("\nO consumo médio do veículo: %2.2f Km/L\n", consumo_medio);

    valor_gasto_reais = consumo_medio*preco_gasolina;
    printf("\nO valor gasto em reais é de R$%2.2f.\n",valor_gasto_reais);
}
