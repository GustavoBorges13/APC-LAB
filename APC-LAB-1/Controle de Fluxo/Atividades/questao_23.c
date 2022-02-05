/*Faça um programa que leia o nome de uma pessoa, o ano de nascimento e o ano atual. Pergunte também se ela já fez aniversário
 esse ano. A partir desses dados calcular a idade.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main_23(){
    setlocale(LC_ALL,"Portuguese");
    char nome[60];
    int idade, ano_atual, ano_nascimento,resposta;
    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf("Fez aniversário esse ano? Responda, SE sim (1), SE nao (0): ");
    scanf("%d", &resposta);
    if (resposta == 1){
        idade = ano_atual - ano_nascimento;
    } else if (resposta == 0){
        idade = ano_atual - ano_nascimento - 1;
    }
    printf("\nO usuário %s, tem %d anos.\n",nome,idade);
}
