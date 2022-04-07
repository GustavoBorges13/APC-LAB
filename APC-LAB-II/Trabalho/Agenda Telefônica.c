#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/* Os structs apresentados servem para armazenar as variáveis que foram utilizadas na função add_contato, a fim de gerar um código mais limpo */
struct aniversario{
    int dia;
    int mes;
    int ano;
};

struct telefone{
    int DDD;
    int numero;
};

typedef struct{
    int registro;
    char nome[30];
    char sexo;
    int idade;
    char cpf [20];
    char endereco[200];
    struct telefone tel;
    struct aniversario niver;
} agenda;

/* A função add_contato gera um arquivo .txt e nele será gravado os dados de cadastro informados para que o usuário digite */
void add_contato(){

    //criação do ponteiro do arquivo
    FILE *arquivo;
    //agenda refere-se a typedef struct apresentada no início do código, cujo nome na função é declarado como dados.
    agenda dados;
    //abertura/criação do arquivo .txt para edição
    arquivo = fopen("agenda.txt","a");

    //condição if que verifica se o arquivo .txt não apresentou erros em sua abertura.
    if(arquivo==NULL){
        printf("Erro na abertura do arquivo de cadastro!\n");
        getchar();
        exit(0);
    }

    //declaração das variáveis i e n, além da definição da variável n que indica quantos contatos serão cadastrados.
    int i,n;
    printf ("Quantos cadastros deseja-se realizar?");
    scanf("%d",&n);
    system ("CLS");

    printf("========AO DIGITAR NAO COLOQUE CARACTERES ESPECIAIS OU ACENTO========");

    //variável i serve como contador para o for, esse que estabelece quantas vezes a solicitação dos dados de cadastro irá se repetir.
    for (i=0;i<n;i++){

    /*fprintf indica o que será escrito no arquivo.txt, enquanto os comandos fgets e scanf definem a variável contida na struct, 
    por exemplo, em dados.nome define-se o que será gravado no vetor nome */
    fprintf (arquivo,"\n\nCadastro de numero ");  
    fprintf (arquivo,"%d",i+1);

    dados.registro=rand();
    fprintf (arquivo,"\nNumero registro: ");
    fprintf (arquivo,"%d",dados.registro);

    printf("\n\nNOME: ");
    fflush(stdout); //Limpeza de buffer
    fprintf (arquivo,"\nNome: ");
    fgets(dados.nome,30,stdin);
    fprintf(arquivo,dados.nome);

    printf("SEXO (DIGITE F PARA FEMININO E M PARA MASCULINO): ");
    scanf("%c", &dados.sexo);
    fprintf (arquivo,"Sexo: ");
    fprintf(arquivo,"%c",dados.sexo);

    printf("DATA DE NASCIMENTO (DD MM AA): ");
    scanf("%d %d %d", &dados.niver.dia,&dados.niver.mes,&dados.niver.ano);
    fprintf (arquivo,"\nData de Nascimento: ");
    fprintf (arquivo,"%d %d %d",dados.niver.dia,dados.niver.mes,dados.niver.ano);

    dados.idade=2022-dados.niver.ano;
    fprintf (arquivo,"\nIdade: ");
    fprintf (arquivo,"%d",dados.idade);

    printf("CPF: ");
    fflush(stdout); //Limpeza de buffer
    fgets(dados.cpf,20,stdin);
    fprintf (arquivo,"\nCPF: ");
    fprintf(arquivo,dados.cpf);

    printf("ENDERECO (LOGRADOURO|NUMERO|BAIRRO|CEP|CIDADE|ESTADO|PAIS): ");
    fflush(stdout); //Limpeza de buffer
    fgets(dados.endereco,200,stdin);
    fprintf (arquivo,"Endereco: ");
    fprintf(arquivo,dados.endereco);

    printf("NUMERO DE TELEFONE ((DDD)TELEFONE - CASO NAO TENHA TELEFONE CELULAR, COLOQUE O TELEFONE FIXO.): ");
    scanf("%d %d", &dados.tel.DDD,&dados.tel.numero);
    fprintf (arquivo,"Telefone: ");
    fprintf (arquivo,"%d %d",dados.tel.DDD,dados.tel.numero);
    
    }

    //fechamento do arquivo .txt aberto
    fclose(arquivo);
    system ("CLS");
    //retorna ao menu principal
    menu_principal();
}

/* Menu principal feito para fornecer ao usuário logado as funcionalidades do sistema, onde o mesmo digita o número referente a opção que deseja executar*/
void menu_principal(){

    //declaração da variável que será utilizada no switch case.
    int op;

    //será imprimido para o usuário as opções do sistema.
    printf("========DIGITE O NUMERO REFERENTE A OPCAO DESEJADA PARA MANIPULACAO DO SISTEMA========");
    printf("\n\n1. Cadastro \n2.Buscar contato \n3.exibir contato \n4.Exibir agenda \n5.Alterar contato \n6.Excluir contato \n7.Lixeira \n8.Sair");
    scanf("%d",op);

    //switch que levará o usuário a função desejada, cada case contém uma função com uma funcionalidade diferente
    switch(op){

        case 1:
        add_contato();
        getch();
        break;

        case 2:
        break;

        case 3:
        break;

        case 4:
        break;

        case 5:
        break;

        case 6:
        break;

        case 7:
        break;

        case 8:
        exit(0);
    }
}

/*função valida_login. Utilizada para confirmar se o login e senha digitados pelo usuário são válidos, ou seja, se são iguais ao .txt*/
void valida_login(){
    //declaração de variáveis
    char login[10];
    char loginDigitado[10];
    char senha[10];
    char senhaDigitada[10];

    //criação do ponteiro do arquivo e abertura do mesmo para leitura.
    FILE *pontarq;
    pontarq = fopen("logins.txt","r");

    //confção if que indica se o arquivo apresentou erro em sua abertura.
    if(pontarq==NULL){
        printf("Erro na abertura do arquivo de login!\n");
        getchar();
        exit(0);
    } else {
        printf("Arquivo aberto com sucesso!");
    }

    printf("========DIGITE SEU LOGIN E SENHA PARA MANIPULACAO DA AGENDA DIGITAL========");

    // o usuário deverá digitar um login e senha.
    printf("\n\nLOGIN: ");
    gets(loginDigitado);
    fflush(stdout); //Limpeza de buffer

	printf("SENHA: ");
	gets(senhaDigitada);
    fflush(stdout); //Limpeza de buffer

    //condição que armazena os dados contidos no .txt nas variáveis login e senha, respectivamente
	if ((fgets(login,10,pontarq) != NULL) && (fgets(senha,10,pontarq) != NULL)){

        // condição que verifica se o login e senha contidos no .txt são iguais aos digitados. Se forem iguais, a condição levará o usuário ao menu principal.
       if((login==loginDigitado) && (senha==senhaDigitada)){
        printf("LOGADO");
        system ("CLS");
        menu_principal();
       }

        else {
		printf("LOGIN E/OU SENHA REJEITADOS PARA MANIPULACAO DO SISTEMA.\n");
		system("pause");
        return 0;
        }
    }
    //fechamento do arquivo .txt aberto
    fclose(pontarq);
}

/* função main com a funcionalidade de chamada da função valida login, isto devido ao fato de ser necessário que primeiramente o usuário valide
seu login para depois entrar no sistema e manipulalo*/
int main(){
    setlocale (LC_ALL,"Portuguese");
    valida_login();
}
