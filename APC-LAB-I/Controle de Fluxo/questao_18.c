/*Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra.
Escreva um programa que leia o total de horas normais e o total de horas extras trabalhadas por um empregado em um ano e
calcule o salário anual deste trabalhador.*/
#include <stdio.h>
int main_18(){

    float empresa_hora_normal = 10.00; float empresa_hora_extra = 15.00;
    float horas_normais, horas_extras;
    float salario_normal, salario_extra, salario_mensal, salario_anual;

    printf("Quantidade de horas normais trabalhadas: ");
    scanf("%f", &horas_normais);
    printf("Quantidade de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);
    salario_normal = horas_normais * empresa_hora_normal;
    salario_extra = horas_extras * empresa_hora_extra;
    salario_mensal = salario_normal + salario_extra;
    salario_anual = salario_mensal * 12;
    printf("---\n");
    printf("Salario mensal: R$%2.2f\n", salario_mensal);
    printf("Salario anual: R$%2.2f\n", salario_anual);
}
