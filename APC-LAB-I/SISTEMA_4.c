#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

double nota, ponto;

int m,n,i,j,qtd_provas;;

char resp, respostas[10], respostas_gabarito[10] = {'a','c','c','d','e','e','b','b','d','a'};
int prova[100]; //QUANTIDADE DE PROVAS A SEREM REALIZADAS = QTD. DE ALUNOS.
int questao[10] = {1,2,3,4,5,6,7,8,9,10};
int matricula[10] = {1,2,3,4,5,6,7,8,9,10};

void Gabarito();
void LerDADOS();
void AnaliseCalculo();

int main(){
	setlocale(LC_ALL,"Portuguese");
	Gabarito();
	AnaliseCalculo();
	exit (0);
}

void Gabarito(){
	printf("Atenção: cada questão correta vale 1.0 ponto. \n");
	printf("Gabarito da PROVA: \n");
	
	for(i=0; i<10; i++){
		printf("Questão [%i] -> %c.\n",questao[i],respostas_gabarito[i]);
	}
	
	printf("\nDigite [S-N] para prosseguir na correção das provas!\n\n");
	scanf("%s", &resp);
	
	if (resp == 's' || resp == 'S'){
		return LerDADOS();
	} else{
		exit(0);
	}
}

void LerDADOS(){
	system("cls");
	printf("Digite a quantidade de provas a serem corrigidas: ");
	scanf("%d",&qtd_provas);
	
	printf("Digite a matricula e respostas de cada aluno:\n\n");
	for(i=0; i<qtd_provas; i++){
		prova[i] = i + 1;
		printf("Aluno[%i] - matricula: ",prova[i]);
		scanf("%d", &matricula[i]);
		printf("Digite as aqui as respostas da questões: \n");
		for(i=0; i<10; i++){
			respostas[i] = i + 1;
			printf("\nQuestão [%i] -> ",questao[i]);
			scanf("%s", &respostas[i]);
			if(respostas[i]!= 'a' && respostas[i]!= 'b' && respostas[i]!= 'c' && respostas[i]!= 'd' && respostas[i]!= 'e'){
				printf("Você digitou errado... so aceitamos os caracteres: a b c d e.\n");
				respostas[i] = i + 1;
				printf("\nQuestão [%i] -> ",questao[i]);
				scanf("%s", &respostas[i]);
			}
		}
	}
	return AnaliseCalculo();	
}

void AnaliseCalculo(){
	system("cls");
	for(i=0; i<10; i++){
		if(respostas[i] == respostas_gabarito[i]){
			nota = nota + ponto; 
		}
	}		
	for(i=0; i<qtd_provas; i++){
		prova[i] = i + 1;
		printf("Aluno[%i] - matricula: %i - nota: %.2f",prova[i],nota);
	}	
	exit(0);
}
	
