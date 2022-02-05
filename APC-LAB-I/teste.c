#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void tabuleiro(char matrix2[3][3]){
	system ("cls");
	printf("\t %c | %c | %c \n", matrix2[0][0], matrix2[0][1], matrix2[0][2]);
	printf("\t-----------\n");
	printf("\t %c | %c | %c \n", matrix2[1][0], matrix2[1][1], matrix2[1][2]);
	printf("\t-----------\n");
	printf("\t %c | %c | %c \n", matrix2[2][0], matrix2[2][1], matrix2[2][2]);
}

void main(){
	setlocale(LC_ALL,"Portuguese");
	
	char matrix[3][3] = {{'1','2','3'},
						{'4','5','6'},
						{'7','8','9'}};
	tabuleiro (matrix);
	
	char resposta;
	int cont_jogadas, l, c, vez = 0,i,j;
	
	do{
		cont_jogadas = 1;
		for(i=0; i<3;i++){
			for(j=0;j<3;j++){
				matrix[i][j] = ' ';
			}
		}
		do{
			tabuleiro (matrix);
			int aux1,aux2, aux = 0;
			if(vez%2==0){
				if(aux==0){
					printf("Grupo X - Jogador 1\n");
				} else if (aux>0){
					printf("Grupo X - Jogador 3\n");
					aux = aux + 1;
				}
			}else{
				if(aux==0){
					printf("Grupo O - Jogador 2\n");
					aux = aux + 1;
				} else if (aux>0){
					printf("Grupo O - Jogador 4\n");
					aux = 0;
				}
			}
			
			printf("Digite a linha: ");
			scanf("%i", &l);
			printf("Digite a coluna: ");
			scanf("%i", &c);
			if(l<1 || c<1 || l>3 || c>3){
				l = 0;
				c = 0;
			} else if(matrix[l-1][c-1]!=' '){
				l = 0;
				c = 0;
			} else {
				if (vez%2==0){
					matrix[l-1][c-1] = 'X';
				}else{
					matrix[l-1][c-1] = 'O';
				}
				vez++;
				cont_jogadas++;
			}
					
		}while(cont_jogadas<=9);
		
		printf("Deseja digitar novamente? [S-N]\n");
		scanf("%s",&resposta);
	}while(resposta=='s');
}

