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
    fflush(stdin);
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
    fflush(stdin);
    fgets(dados.cpf,20,stdin);
    fprintf (arquivo,"\nCPF: ");
    fprintf(arquivo,dados.cpf);

    printf("ENDERECO (LOGRADOURO|NUMERO|BAIRRO|CEP|CIDADE|ESTADO|PAIS): ");
    fflush(stdin);
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
    system("cls");
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

/*
FILE* arquivo;
agenda in;
char nome[20];

arquivo = fopen("Agenda.csv","rb");

printf("Nome: ");
fflush(stdin);
gets(nome);

while ( fread(&in,sizeof(agenda),1,arquivo)==1){

    if(strcmp(nome,in.nome)==0)
    {
        printf("%s|E-Mail: %s| CEP:%s | (%d)%d | %d/%d/%d |\n" , in.nome , in.mail , in.cep , in.tel.DDD , in.tel.numero , in.niver.dia , in.niver.mes , in.niver.ano ,in.descricao);
    }
}

fclose(arquivo);
}

*/

void valida_login(){
    system("cls");
    printf("Acesso restrito! Realize o LOGIN p/continuar.\n");
    char usuario_digitado[32],senha_digitada[32];
    char user_validar[32],password_validar[32];
    char conteudo[100];

    FILE *arquivo = fopen("login.txt","r");

    if (arquivo == NULL){
        printf("Arquivo não pode ser aberto\n");
        system("pause");
        return exit;
    }

    while((fscanf(arquivo,"usuario:%s\nsenha:%s\n",&user_validar, &password_validar))!=EOF){
        printf("usuario:%s\nsenha:%s\n", user_validar, password_validar);
    }

    printf("\nUsuario: ");
    scanf("%s",usuario_digitado);
    printf("Senha: ");
    fflush(stdin);
    scanf("%s",senha_digitada);

    if(arquivo != NULL){
        while ((fscanf(arquivo,"usuario:%s\nsenha:%s\n",user_validar, password_validar))!=EOF){   
            if(strcmp(usuario_digitado,user_validar)==0 && strcmp(senha_digitada,password_validar)==0){
                printf("\nUsuario e senha CORRETOS :D\n");
                system("pause");
                fclose(arquivo);
                return 0;
            }else{
                printf("\nUsuario e senha INCORRETOS D:\n");
                printf("\nPressione qualquer tecla para prosseguir...\n");
                system("pause");
                return main();
            }
        }
    }
}

/* função main com a funcionalidade de chamada da função valida login, isto devido ao fato de ser necessário que primeiramente o usuário valide
seu login para depois entrar no sistema e manipulalo*/
int main(){
    setlocale (LC_ALL,"Portuguese");
    valida_login();
    return 0;
}
