#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void menu (void) {
    setlocale(LC_ALL,"Portuguese");

    char ch;

    printf("1. Checar Ortografia\n");
    printf("2. Corrigir Erros de Ortografia\n");
    printf("3. Mostra Erros de Ortografia\n");
    printf("Pressione Qualquer Outra Tecla para Abandonar\n");
    printf("    Entre com sua escolha:  ");

    ch=getchar();

    switch(ch){
    case '1':
        check_spelling();
        break;
    case '2':
        correct_erros();
        break;
    case '3':
        display_erros();
        break;
    default :
        printf("Nenhuma opção selecionada");
    }
}
