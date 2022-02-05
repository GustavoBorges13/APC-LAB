/*Faça um programa que simule um caixa eletrônico com as seguintes opções:
1 – Depositar dinheiro (depósito de qualquer valor)
2 – Ver saldo
3 – Sacar dinheiro (apenas se tiver saldo)
4 – Sair (O programa só finaliza se o usuário digitar a opção) */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main_21(){
    setlocale(LC_ALL,"Portuguese");
    char resposta;
    int opcao;
    float deposito,saldo,saque;
    saldo = 1100;

    printf("Por favor, selecione uma das opções abaixo: ");
    printf("\n1 – Depositar dinheiro\n2 – Ver saldo\n3 – Sacar dinheiro\n4 – Sair\n\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("\nVocê selecionou depositar dinheiro.");
        printf("\nDigite o valor para deposito: ");
        scanf("%f", &deposito);
        system("cls");
        printf("Deposito realizado com sucesso!\n");
        printf("Você realizou um deposito no valor de R$%2.2f\n", deposito);
        getch();
        return 0;
    } else if (opcao == 2){
        printf("\nVocê seleciou ver saldo.");
        printf("\nO seu saldo é de R$%2.2f\n", saldo);
        getch();
        return 0;
    } else if (opcao == 3){
        printf("\nVocê seleciou sacar dinheiro.");
        printf("\nDigite a quantia para sacar: ");
        scanf("%f", &saque);
        system("cls");
        printf("Você fez o saque de R$%2.2f\n", saque);
        printf("\nO seu saldo anterior era de R$%2.2f\n", saldo);
        printf("O seu saldo atual agora é de R$%2.2f\n", saldo - saque);
    } else if (opcao == 4){
        printf("\nVocê optou por sair, volte sempre!\n");
        return 0;
    }
}
