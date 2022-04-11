#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*Os structs apresentados servem para armazenar as variáveis que foram utilizadas na função add_contato, a fim de gerar um código mais limpo */
struct aniversario{
    int dia;
    int mes;
    int ano;
};
struct telefone{
    int DDD;
    int numero;
};

typedef struct
{
    int registro;
    char nome[30];
    char sexo;
    int idade;
    char cpf[12];
    char endereco[200];
    struct telefone tel;
    struct aniversario niver;
}CONTATO; //agenda refere-se a typedef struct apresentada no início do código, cujo nome na função é declarado como 'a'.
/*
void menu(){
    system("cls");
    int MENU;

    printf("\n\tTela inicial da Agenda Telefonica Digital\n");
    printf("\n 1. Cadastro \n 2. Buscar contato \n 3. Exibir contato \n 4. Exibir agenda \n 5. Alterar contato \n 6. Excluir contato \n 7. Lixeira \n 8. Sair\n Digite sua opc. -> ");
    scanf("%d", &MENU);
    fflush(stdin);
    //Identifica qual menu será selecionado do menu
    switch (MENU)
    {
    case 1:
        add_contato();
        break;
    case 2:
        printf(" Opc. 2 selecionada!");
        break;
    case 3:
        system("cls");
        printf(" Opc. 3 selecionada!");
        break;
    case 4:
        system("cls");
        printf(" Opc. 4 selecionada!");
        break;
    case 5:
        system("cls");
        printf(" Opc. 5 selecionada!");
        break;
    case 6:
        system("cls");
        printf(" Opc. 6 selecionada!");
        break;
    case 7:
        system("cls");
        printf(" Opc. 7 selecionada!");
        break;
    case 8:
        system("cls");
        printf(" Opc. 8 selecionada!");
        break;
    default:
        printf("\n Opc. invalida! \n");
        system("pause");
        return menu();
    }
    return 0;
}
*/
/* A função add_contato gera um arquivo .txt e nele será gravado os dados de cadastro informados para que o usuário digite */
void add_contato(CONTATO *agend){
    int random_number,i,cpf_convert_result;
    system("cls");
    printf("\n\tCadastro de contato");

    FILE *arquivo; //criação do ponteiro do arquivo
    arquivo = fopen("agenda.txt","w"); //abertura/criação do agenda.txt para edição

    //condição if que verifica se o arquivo .txt não apresentou erros em sua abertura.
    if(arquivo==NULL){
        printf("Erro na abertura do arquivo de cadastro!\n");
        getchar();
        exit(0);
    } else {

        srand(time(NULL));
        random_number = 0 + (rand() % 100);
        printf("\n Codigo de registro: %d ", random_number); //Randomiza um numero para servir de registro ao usuario.
        agend->registro = random_number;
        //printf("%d",pt_agenda->registro); printar o codigo de registro
/*
        printf("\n NOME: ");
        fflush(stdin); //Limpeza de buffer
        fprintf (arquivo,"Nome: ");
        gets(agenda->nome);
        fprintf(arquivo,agenda->nome);

        printf(" Sexo (F)eminino ou (M)asculino: ");
        fflush(stdin); //Limpeza de buffer
        scanf("%c",&agenda->sexo);
        fprintf (arquivo,"\nSexo: ");
        fprintf(arquivo,"%c",agenda->sexo);

        printf(" Data de nascimento (DD MM AAAA): ");
        fflush(stdin); //Limpeza de buffer
        scanf("%d %d %d", &agenda->niver.dia,&agenda->niver.mes,&agenda->niver.ano);
        fprintf(arquivo,"\nData de Nascimento: ");
        fprintf(arquivo,"%d/%d/%d", agenda->niver.dia,agenda->niver.mes,agenda->niver.ano);

        //Usuario digita o CPF e leva para função de validação de CPF.
        validar_CPF();
        fflush(stdin); //Limpeza de buffer
        fprintf(arquivo,"\nCPF: %d", cpf_convert_result);
     
        printf("\n (Logradouro, Numero, Bairro, CEP, Cidade, Estado, Pais)\n");
        printf(" Utilize virgulas ',' para separacao igual ao exemplo acima.\n ");
        printf("\n Digite o Endereco: ");
        fflush(stdin); //Limpeza de buffer
        gets(&agenda->endereco);
        fprintf(arquivo,"\nEndereço: ");
        fprintf(arquivo,agenda->endereco);

        printf(" Caso nao tenha telefone celular, coloque o telefone fixo. ");
        printf("\n Digite o Telefone (DDD) XXXXX-XXXX: ");
        scanf("%d %d", &agenda->tel.DDD,&agenda->tel.numero);
        fprintf (arquivo,"\nTelefone: ");
        fprintf (arquivo,"%d %d\n",agenda->tel.DDD,agenda->tel.numero);
*/
        fclose(arquivo);
        exit(1);
    }
}
/*
void validar_CPF() {    
    char cpf[12];
    int icpf[12];
    int i,somador=0,digito1,result1,result2,digito2,valor;

    printf(" CPF: ");    
    fflush(stdin); //Limpeza de buffer
    gets(agenda->cpf); //Colocando os dados do CPF na struct

    for (i=0;i<11;i++){ //copiando dados da struct CPF para um vetor
        cpf[i] = agenda->cpf[i];
    }

    //Efetua a conversao de array de char para um array de int.
    for(i=0;i<11;i++) {
        icpf[i]=cpf[i]-48;
    }

    //PRIMEIRO DIGITO
    for(i=0;i<9;i++)
        somador+=icpf[i]*(10-i);

    result1=somador%11;
    if((result1==0) || (result1==1)) {
        digito1=0;
    }else{
        digito1 = 11-result1;
    }

    //SEGUNDO DIGITO
    somador=0;
    for(i=0;i<10;i++)
        somador+=icpf[i]*(11-i);

    valor=(somador/11)*11;
    result2=somador-valor;

    if((result2==0) || (result2==1)) {
        digito2=0;
    }else{
        digito2=11-result2;
    }

    //RESULTADOS DA VALIDACAO
    if((digito1==icpf[9]) && (digito2==icpf[10])){
        printf(" CPF VALIDADO.\n");
        return icpf;
    }else{
        printf(" Problema com os digitos. Por favor digite um CPF valido.\n");
        return validar_CPF();
    }



}

void login(){
    system("cls");
    printf("Acesso restrito! Realize o LOGIN p/continuar.\n");
    char usuario_digitado[32],senha_digitada[32];
    char user_validar[32],password_validar[32];

    FILE *file = fopen("logins.txt","r");

    if (file ==  NULL){
        printf("Arquivo não pode ser aberto\n");
        system("pause");
        return 0;
    }

    printf("\nUsuario: ");
    scanf("%s",usuario_digitado);
    printf("Senha: ");
    scanf("%s",senha_digitada);

    fscanf(file,"Usuário: %s | Senha: %s",user_validar, password_validar);

    if(strcmp(usuario_digitado,user_validar)==0 && strcmp(senha_digitada,password_validar)==0){
        printf("\nUsuario e senha CORRETOS :D\n");
        system("pause");
        menu();
    }else{
        printf("\nUsuario e senha INCORRETOS D:\n");
        printf("\nPressione qualquer tecla para prosseguir...");
        system("pause");
        return login();
    }
}
*/
int main(void){
    CONTATO agenda;
    //login();
    add_contato(&agenda);
    return 0;
}