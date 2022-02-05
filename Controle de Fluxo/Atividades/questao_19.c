/*Assuma que o trabalhador do exercício 18 deva pagar 10% de imposto se o seu salário anual for menor ou igual a R$ 12.000,00.
Caso o salário seja maior que este valor o imposto devido é igual a 10% sobre R$ 12.000,00 mais 25% sobre o que passar de
R$ 12.000,00. Escreva um programa que calcule o imposto devido pelo trabalhador.*/
#include <stdio.h>
int main_19(){
    float empresa_hora_normal = 10.00; float empresa_hora_extra = 15.00;
    float horas_normais, horas_extras, imposto, resto;
    float salario_normal, salario_extra, salario_mensal, salario_anual;

    printf("Quantidade de horas normais trabalhadas: ");
    scanf("%f", &horas_normais);
    printf("Quantidade de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);
    salario_normal = horas_normais * empresa_hora_normal;
    salario_extra = horas_extras * empresa_hora_extra;
    salario_mensal = salario_normal + salario_extra;
    salario_anual = salario_mensal * 12;

    if (salario_anual <= 12000){
        imposto = salario_anual*10/100;
    } else if (salario_anual >= 12000){
        resto = salario_anual - 12000;
        resto = resto*25/100;
        imposto = (10/12000) + resto;
    }

    printf("---\n"); //Mostra o resultado
    printf("Salario mensal: R$%2.2f\n", salario_mensal);
    printf("Salario anual: R$%2.2f\n", salario_anual);
    printf("Imposto a pagar: R$%2.2f\n", imposto);
}
