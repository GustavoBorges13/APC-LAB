#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int vetor[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
	int i;
	void ordemCrescente(int vetor[], int n);
	ordemCrescente(vetor, 10);

	for(i = 0; i < 10; ++i){
		printf("%i ", vetor[i]);
	}
	
	system ("pause");
	return 0;
}

void ordemCrescente (int vetor[], int n){
	int i,j,temporaria;
	
	for(i=0; i<n; ++i){
		for(j=i+1; j<n; ++j){
			if(vetor[i] > vetor[j]){
				temporaria = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temporaria;
			}			
		}
	}
}
