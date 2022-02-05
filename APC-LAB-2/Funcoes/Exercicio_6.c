#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int vTAM = 10;

/* PROTOTIPOS */
int menu(float *vetor); //Interface Humana e coleta de dados.
int dados();
int ordem_direta(float *vetor); //Mostra o vetor na ordem direta.
int ordem_inversa(float *vetor); //Mostra o vetor na ordem inversa.

int main() {
    setlocale(LC_ALL, "Portuguese");
    dados();
}

int dados(){
    int i, j, repeticao, codigo = 1;
    float vetor[vTAM];
    system("cls");

    printf("Utilize ',' para separacao decimal!\n");
    printf("Digite um número real para cada posição do vetor (Ex: 1,23):\n");
    for (i = 0; i < vTAM; i++)
    {
        printf("Vetor[%i]: ", i);
        scanf("%f", &vetor[i]);
    }
    return menu(vetor);
}

int menu(float *vetor){
    int i, codigo = 1;
    system("cls");

    do
    {
        printf("\n\n\\=========================/");
        printf("\n    \tFuntions! \t");
        printf("\n---------------------------\n");
        printf(" 1. Vetor na ordem direta.\t\t\t\n");
        printf(" 2. Vetor na ordem inversa. \t\t\n");
        printf(" 0. Sair \t\t\n");
        printf("\\=========================/\n ");
        printf("*Digite apenas o numero!\n ");
        scanf("%i", &codigo);

        switch (codigo)
        {
        case 1:
            ordem_direta(vetor);
            break;
        case 2:
            ordem_inversa(vetor);
            break;
        case 0:
            // sair();
            exit(-1);
        default:
            printf("\nDigite um codigo valido!\n");
            system("exit");
        }
    } while (codigo > 0 && codigo <= 2);
    system("pause");
    menu(vetor);
}

int ordem_direta(float *vetor){
    int i;
    char resposta;
    system("cls");
    printf("\nOrdem direta: {");
    for (i=0;i<vTAM;i++){
        if(i<vTAM-1){
            printf("%1.2f, ",vetor[i]);
        }else if(i=vTAM-1){
            printf("%1.2f}\n",vetor[i]);
        }
    }

    printf("Deseja voltar ao menu inicial? S/N -> ");
    scanf("%s", &resposta);
    if (resposta=='s' || resposta=='S'){
        return menu(vetor);
    }else if(resposta=='n' || resposta=='N'){
        exit(0);
    }else if (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N'){
        printf("\nVoce digitou caractere errado! Encerrando o programa...");
        exit(-1);
    }
    system("pause");
    exit(0);
}

int ordem_inversa(float *vetor){
    int i;
    char resposta;
    system("cls");
    printf("\nOrdem inversa: {");
    for (i=vTAM-1;i>=0;i--){
        if(i>0){
            printf("%1.2f, ",vetor[i]);
        }if(i==0){
            printf("%1.2f}",vetor[i]);
        }
    }
    
    printf("\nDeseja voltar ao menu inicial? S/N -> ");
    scanf("%s", &resposta);
    if (resposta=='s' || resposta=='S'){
        return menu(vetor);
    }else if(resposta=='n' || resposta=='N'){
        exit(0);
    }else if (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N'){
        printf("\nVoce digitou caractere errado! Encerrando o programa...");
        exit(-1);
    }
    system("pause");
    exit(0);
}