/*Faça um programa para calcular o aumento que será dado a um funcionário, obtendo do usuário as seguintes informações:
    salário e a porcentagem de aumento. Mostrar o novo valor do salário e o valor do aumento.*/
#include <stdio.h>
int main_20(){
    float salario, porcentagem_aumento, aumento, novo_salario, valor_aumento;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &porcentagem_aumento);
    aumento = (salario*porcentagem_aumento)/100;
    novo_salario = salario + aumento;
    printf("\nO salario digitado = R$%2.2f\n", salario);
    printf("\nTeve um aumento de R$%2.2f\n", aumento);
    printf("Portanto, o novo salario = R$%2.2f\n", novo_salario);
}
