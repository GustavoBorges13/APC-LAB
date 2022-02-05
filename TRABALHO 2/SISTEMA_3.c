#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int TAM,i,j;
int VETOR[0];
int *ponteiro;
void funcao_Incremento();

int main(){
	setlocale(LC_ALL,"Portuguese");
    funcao_Incremento(); //Inicializa
	
	//REALIZANDO O INCREMENTO EM TODAS AS POSIÇÕES DO VETOR
	ponteiro = &VETOR[0]; //Seta a posição inicial do ponteiro em 0.
	printf("\nResultado do incremento nos vetores: \n");
	for (i=0; i<TAM; i++){
		*ponteiro = *ponteiro+1; 
		printf("Vetor[%i] - Valor: %i\n",i+1, *ponteiro);
		*ponteiro++; //Soma o valor da posição inicial com +1 e vai para a próxima posição.
	}
	printf("\nFIM... Digite qualquer tecla para encerrar.");
	system("pause >> null");
    exit(0); //Encerra.
}

void funcao_Incremento(){
	VETOR[0] = VETOR[TAM]; //Permitindo a manipulação de posições do vetor
	
	 //RECEBENDO A QTD. DE POSIÇÕES QUE O VETOR TERÁ
	printf("Digite a quantidade de posições que serão armazenadas no VETOR: ");
	scanf("%i", &TAM);
	//printf("\nRetorno: %d", TAM);
	
	//RECEBENDO OS VALORES DE CADA POSIÇÃO DO VETOR
	printf("\nEscreva os valores para cada posição do vetor: \n");
	for (i=0,j=0; i<TAM,j<TAM; i++,j++){
		printf("Vetor[%i] - Valor: ",j+1);
		scanf("%i", &VETOR[i]);		
	}
}

