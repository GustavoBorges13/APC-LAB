#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ARQ_LOGIN                "admin.txt"
#define ARQ_AGENDA_TELEFONICA    "agenda.txt"

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
}AGENDA; //agenda refere-se a typedef struct apresentada no início do código, cujo nome na função é declarado como 'a'.

/* A função add_contato gera um arquivo .txt e nele será gravado os dados de cadastro informados para que o usuário digite */
void add_contato(AGENDA *contato,const char *arq2){
    
    system("cls");
    fflush(stdin);
    printf("\n\tCadastro de contato");
    int random_number,i;


    FILE *arq; //criação do ponteiro do arquivo
    arq = fopen(arq2,"a"); //abertura/criação do agenda.txt para edição

    //condição if que verifica se o arquivo .txt não apresentou erros em sua abertura.
    if(arq == NULL){
        printf("Erro ao carregar arquivo: %s\n",ARQ_AGENDA_TELEFONICA);
        return EXIT_FAILURE;
    }

    srand(time(NULL));
    random_number = 0 + (rand() % 100);
    printf("\n Codigo de registro: %d ", random_number); //Randomiza um numero para servir de registro ao usuario.
    contato->registro = random_number;
    //printf("%d",pt_agenda->registro); printar o codigo de registro

    printf("\n NOME: ");
    fflush(stdin); //Limpeza de buffer
    fprintf (arq,"Nome: ");
    gets(&contato->nome);
    fprintf(arq,contato->nome);

    printf(" Sexo (F)eminino ou (M)asculino: ");
    fflush(stdin); //Limpeza de buffer
    scanf("%c",&contato->sexo);
    fprintf (arq,"\nSexo: ");
    fprintf(arq,"%c\n\n\0",contato->sexo);

    printf(" Data de nascimento -> DD MM AAAA: ");
    fflush(stdin); //Limpeza de buffer
    scanf("%d %d %d", &contato->niver.dia,&contato->niver.mes,&contato->niver.ano);
    fprintf(arq,"\nData de Nascimento: ");
    fprintf(arq,"%d/%d/%d", contato->niver.dia,contato->niver.mes,contato->niver.ano);

    //Usuario digita o CPF e leva para função de validação de CPF.
    validar_CPF();
    for (i = 0; i < 12; i++){
              printf("%s",&contato->cpf);
    }
    
    printf("\n");

    //fprintf(arq,"\nCPF: %d", cpf_convert_result);
     
    printf("\n (Logradouro, Numero, Bairro, CEP, Cidade, Estado, Pais)\n");
    printf(" Utilize virgulas ',' para separacao igual ao exemplo acima.\n ");
    printf("\n Digite o Endereco: ");
    fflush(stdin); //Limpeza de buffer
    gets(&contato->endereco);
    fprintf(arq,"\nEndereço: ");
    fprintf(arq,contato->endereco);

    printf(" Caso nao tenha telefone celular, coloque o telefone fixo. ");
    printf("\n Digite o Telefone -> DDD XXXXXXXXX: ");
    scanf("%d %d", &contato->tel.DDD,&contato->tel.numero);
    fprintf (arq,"\nTelefone: ");
    fprintf (arq,"%d %d\n",contato->tel.DDD,contato->tel.numero);

    fclose(arq);
    exit(1);
}

void validar_CPF() {  
    AGENDA contato;
    AGENDA *c = (AGENDA*) malloc(sizeof(AGENDA)); //Aloca memoria para TODA a strutc agenda
    
    int *icpf = (int*) calloc(12, sizeof(int));;
    int i,somador=0,digito1,result1,result2,digito2,valor;

    printf(" CPF: ");
    fflush(stdin); //Limpeza de buffer
    scanf("%s",&c->cpf); //Colocando os dados do CPF na struct    

    //Efetua a conversao de array de char para um array de int.
    for(i=0;i<11;i++) {
        icpf[i]=(c->cpf[i])-48;
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
        return 0;
    }else{
        printf(" Problema com os digitos. Por favor digite um CPF valido.\n");
        return validar_CPF();
    }
}

int main(void){
    AGENDA contato;
    AGENDA *c = (AGENDA*) malloc(sizeof(AGENDA)); //Aloca memoria para TODA a strutc agenda
    
    //login();
    add_contato(c,ARQ_AGENDA_TELEFONICA);
    return 0;
}