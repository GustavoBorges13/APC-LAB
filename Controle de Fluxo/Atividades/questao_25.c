//Ler o nome do aluno, matricula e 3 notas. Aprovado ou reprovado se nota <= 6...
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main_25(){
    setlocale(LC_ALL,"Portuguese");
    char nome[60];
    int matricula;
    float nota1,nota2,nota3,media;

    //NOME DO ALUNO
    printf("Digite o nome do aluno: ");
    gets(nome);

    //MATRICULA
    printf("\nDigite a matrícula: ");
    scanf("%d", &matricula);

    //NOTAS
    printf("\nDigite a 1° Nota como por exemplo 4,56: "); //TEM QUE USAR VIRGULA.
    scanf("%f", &nota1);
    printf("\nDigite a 1° Nota: ");
    scanf("%f", &nota2);
    printf("\nDigite a 1° Nota: ");
    scanf("%f", &nota3);
    printf("\nNotas: %1.2f %1.2f %1.2f", nota1,nota2,nota3);

    //LIMPA TELA E PRINTA OS DADOS
    system("cls");
    printf("Nome: %s\nMatrícula: %d\n",nome,matricula);

    //VERIFICA SE FOI APROVADO OU REPROVADO
    printf("\nNota 1: %1.2f\tNota 2: %1.2f\tNota 3: %1.2f\t\n",nota1,nota2,nota3);
    if (nota1 >=6){
        printf("APROVADO!");
    } else {
        printf("REPROVADO!");
    }
    if (nota2 >=6){
        printf("\tAPROVADO!");
    } else {
        printf("\tREPROVADO!");
    }
    if (nota3 >=6){
        printf("\tAPROVADO!\n");
    } else {
        printf("\tREPROVADO!\n");
    }
}
