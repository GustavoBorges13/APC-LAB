#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

bool ON = false;
int i,j,m,n,estabelecimento,aux_estblc,qtd_cadastro_produtos, aux_produt;
int MENU = 0; //Salva o menu atual
int codigo, codigos_produtos[100], *pProduto,resp,estoque_produtos[100];
char nome[100], nomes_produtos[100], *pProdutoNome;
double valor_produtos[100];
char aux2_estblc, 
	 locadora[15] = "Locadora",
	 supermercado[15] = "Supermercado",
	 loja[15] = "Loja";
void init();
void menu_choose();
void cadastro_de_produtos();
void cadastro_de_produtos_print();
void controle_de_estoque();
void venda();
void renda_mensal();
void relog();

int main(){
	setlocale(LC_ALL,"Portuguese");
	init();
	relog();
}

void menu_choose(){
	system("cls");
    printf("\n");
    printf(" Produtos \n");
    printf("--------------------------\n");
    printf(" 1 - CADASTRO DE PRODUTOS ---> FUNCIONANDO\n");
    printf(" 2 - CONTROLE DE ESTOQUE ---> NÃO ESTÁ FUNCIONANDO\n");
    printf("--------------------------\n");
    printf(" 0 - Voltar ao menu principal ---> FUNCIONANDO\n");
    printf("\n");
    printf("\n");
    printf(" Digite uma opc do menu: ");
    scanf("%i",&MENU);
}

void init(){
	system("cls");
	printf("O programa se aplica em qual estabelecimento?\n");
	printf("1. Locadora\n2. Supermercado\n3. Loja\n\n");
	printf("Escolha alguma das opções acima: ");
	scanf("%d", &estabelecimento);
	if(estabelecimento == 1){
		aux_estblc = 1;
	} else if(estabelecimento == 2){
		aux_estblc = 2;
	} else if(estabelecimento == 3){
		aux_estblc = 3;
	} else if(estabelecimento != 1 && estabelecimento != 2 && estabelecimento != 3){
		printf("\nOops! Parece que você digitou errado, tente novamente!");
		system("pause");
	}
}

void cadastro_de_produtos_prints(){
		printf("Insira quantos produtos diferentes serão cadastrados: ");
	scanf("%d", &qtd_cadastro_produtos);
	
	if (aux_produt == 0){
	for (i=0; i<qtd_cadastro_produtos; i++){
		printf("\nInsira o código do produto[%i]: ", i+1); scanf("%i",&codigos_produtos[i]);
		printf("\nNome do produto[%i]: ", i+1); scanf("%s", &nomes_produtos[i]);
		printf("\nValor do produto[%i] em R$: ", i+1); scanf("%f", &valor_produtos[i]);
		printf("\nQuantidade no estoque: ", i+1); scanf("%i", &estoque_produtos[i]);
		aux_produt = aux_produt + i;
	}
	}else if(aux_produt > 0){
	for (i=0; i<qtd_cadastro_produtos; i++){
		printf("\nInsira o código do produto[%i]: ", aux_produt+1); scanf("%i",&codigos_produtos[aux_produt+1]);
		printf("\nNome do produto[%i]: ", aux_produt+1); scanf("%s", &nomes_produtos[aux_produt+1]);
		printf("\nValor do produto[%i] em R$: ", aux_produt+1); scanf("%f", &valor_produtos[aux_produt+1]);
		printf("\nQuantidade no estoque: ", aux_produt+1); scanf("%i", &estoque_produtos[aux_produt+1]);
		aux_produt = aux_produt + i;
		ON = true;
		}
	}
	
	system("cls");
	printf("\n--------------------------------\n");
	printf("Produto Cadastrado com Sucesso!");
	printf("\n--------------------------------\n");
	printf("Deseja Cadastrar outro produto?\n");
	printf("\n1 - sim | 0 - não -> ");
	scanf("%i", &resp);
	if(resp == 1){
		aux_produt = aux_produt + 1;
		system("cls");
		return cadastro_de_produtos_prints();
	} else if(resp == 0){
		return menu_choose();
	} else if(resp != 0 && resp != 1){
		printf("\nOops! Parece que você digitou errado, tente novamente!");
		system("pause");
	}
}

void cadastro_de_produtos(){
	system("cls");
	printf("*****Cadastro de Produtos*****\n\n");
	if (aux_estblc == 1){
		printf("Estabelecimento escolhido: %s.\n\n", locadora);
	}
	if (aux_estblc == 2){
		printf("Estabelecimento escolhido: %s.\n\n", supermercado);
	}
	if (aux_estblc == 3){
		printf("Estabelecimento escolhido: %s.\n\n", loja);
	}
	
	cadastro_de_produtos_prints();
}

void controle_de_estoque(){
	system("cls");
	printf("*****Controle de Estoque*****\n");
	
	printf("\n--------------------------------\n");
	printf("ITEMS - Relatório de produtos");
	printf("\n--------------------------------\n");
	
	if(ON = true){
	for (i=0; i<aux_produt; i++){
		printf("\nNome do produto: %s", nomes_produtos[i]);
		printf("\nProduto Código: %i", codigos_produtos[i]);
		printf("\nValor: R$%.2f", valor_produtos[i]);
		printf("\nEstoque: %i", estoque_produtos[i]);
		}	
	}
}

void relog(){
	do{
		//exibe opcoes do menu e atribui o numero da opc na variavel MENU
        menu_choose();
        //executa a ação do menu
        switch (MENU) {
	        case 1:
	            system("cls");
	            cadastro_de_produtos();
	        case 2:
	            system("cls");
	            return controle_de_estoque();
	        default:
	            system("exit");
        }
	} while (MENU>0 && MENU <=2);
    printf("---------------\n");
    printf(" Opc invalida! \n");
    printf("---------------\n");
    system("pause");
	main();
}
