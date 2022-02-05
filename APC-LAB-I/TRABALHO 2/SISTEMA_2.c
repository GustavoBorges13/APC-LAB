#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int i;
void leitura();
void calculo_media();
void calculo_variancia();

float *pc,somatoria,media;
double variancia,aux_variancia,aux2_variancia;
float conjunto[10];


int main(){
	setlocale(LC_ALL,"Portuguese");
	leitura();
	
	printf("\nFIM... Digite qualquer tecla para encerrar.");
	system("pause >> null");
    exit(0); //Encerra.
}

void leitura(){
	
	printf("Esse é o sistema que cálcula a média e variância de um conjunto de 10 números reais.");
	printf("\nPor favor, digite os valores para as seguintes posições do vetor.\n");
	printf("Obs.: utilize vírgula para números reais. Exemplo: 1,2\n\n");
	
	for(i=0; i<10; i++){
		printf("Vetor[%i] - Valor: ", i+1);
		scanf("%f", &conjunto[i]);
	}
	
	//PONTEIROS.
	pc = &conjunto[0]; //So usar *pc++ para avançar posição.
	
	return calculo_media();
}

void calculo_media(){
	system("cls");
	printf("SESSÃO: Cálculo de media e variância\n");
	printf("--------------------------------\n");
	//SOMA
	for(i=0; i<10; i++){
		somatoria = somatoria + pc[i]; //Faz a soma do conjunto de vetores.
	}
	
	//MEDIA
	media = somatoria/10; //MEDIA
	printf("Resultado da média: %.2f.",media);
	
	return calculo_variancia();
}

void calculo_variancia(){
	variancia = 0;
	for (i=0; i<10; i++){
		aux_variancia = (pc[i] -media);
		aux2_variancia = pow(aux_variancia,2);
		variancia = variancia + aux2_variancia;
	}
	printf("\nResultado da variância: %.2f.",variancia);
}
