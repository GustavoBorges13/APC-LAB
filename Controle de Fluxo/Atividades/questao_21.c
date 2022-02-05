/*Fa�a um programa que simule um caixa eletr�nico com as seguintes op��es:
1 � Depositar dinheiro (dep�sito de qualquer valor)
2 � Ver saldo
3 � Sacar dinheiro (apenas se tiver saldo)
4 � Sair (O programa s� finaliza se o usu�rio digitar a op��o) */
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

    printf("Por favor, selecione uma das op��es abaixo: ");
    printf("\n1 � Depositar dinheiro\n2 � Ver saldo\n3 � Sacar dinheiro\n4 � Sair\n\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("\nVoc� selecionou depositar dinheiro.");
        printf("\nDigite o valor para deposito: ");
        scanf("%f", &deposito);
        system("cls");
        printf("Deposito realizado com sucesso!\n");
        printf("Voc� realizou um deposito no valor de R$%2.2f\n", deposito);
        getch();
        return 0;
    } else if (opcao == 2){
        printf("\nVoc� seleciou ver saldo.");
        printf("\nO seu saldo � de R$%2.2f\n", saldo);
        getch();
        return 0;
    } else if (opcao == 3){
        printf("\nVoc� seleciou sacar dinheiro.");
        printf("\nDigite a quantia para sacar: ");
        scanf("%f", &saque);
        system("cls");
        printf("Voc� fez o saque de R$%2.2f\n", saque);
        printf("\nO seu saldo anterior era de R$%2.2f\n", saldo);
        printf("O seu saldo atual agora � de R$%2.2f\n", saldo - saque);
    } else if (opcao == 4){
        printf("\nVoc� optou por sair, volte sempre!\n");
        return 0;
    }
}
