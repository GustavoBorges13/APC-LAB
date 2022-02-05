#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h> //usei para apresentar tutorial e realizar a troca dos 4 jogadores...

bool init = true;
void tutorial(void);
void init_matrix(void);

//INICIALIZAÇÃO DAS FUNÇÕES.
void main(){
	setlocale(LC_ALL,"Portuguese");
	tutorial();
	init_matrix();
}

//INICIO - MOSTRANDO COMO FUNCIONA O JOGO APRESENTADO.
void tutorial(){
	printf("Bem vindo ao Jogo-da-Velha!\n");
	printf("Instruções: Nesse jogo haverá 4 jogadores dividos em 2 grupos\n");
	printf("- Grupo X: jogador 1 e 3\n- Grupo O: jogador 2 e 4\n\n");
	printf("O Grupo X começa primeiro.\n");
	printf("\nPara posicionar as figuras onde deseja, iremos utilizar coordenadas de LINHA e COLUNA.\n");
	printf("EXEMPLO: LINHA: 2 e COLUNA: 2\n\n");
	char instru[3][3];
	char resp;	
	printf("\t %c | %c | %c \n", instru[0][0], instru[0][1], instru[0][2]);
	printf("\t-----------\n");
	printf("\t %c | X | %c \n", instru[1][0], instru[1][2]);
	printf("\t-----------\n");
	printf("\t %c | %c | %c \n", instru[2][0], instru[2][1], instru[2][2]);	
	printf("\nVamos jogar agora que entendeu as instruções? [S-N]\n");
	scanf("%s", &resp);
	if (resp == 's' || resp == 'S'){
		system("cls");
		return init_matrix();
	} else{
		exit(0);
	}
}

//FUNÇÃO DO CARREGAMENTO DA MATRIX 3X3.
void interface(char matrix2[3][3]){
	char resp;
	system ("cls");
	printf("\t %c | %c | %c \n", matrix2[0][0], matrix2[0][1], matrix2[0][2]);
	printf("\t-----------\n");
	printf("\t %c | %c | %c \n", matrix2[1][0], matrix2[1][1], matrix2[1][2]);
	printf("\t-----------\n");
	printf("\t %c | %c | %c \n", matrix2[2][0], matrix2[2][1], matrix2[2][2]);
}

//INICIALIZAÇÃO E EXECUÇÃO DO JOGO.
void init_matrix(void){
	char matrix[3][3] = {{'1','2','3'},
		                       {'4','5','6'},
			          {'7','8','9'}};
	interface(matrix);
	char resposta;
	int contagem_jogadas, l, c, vez = 0,i,j;
	
	do{
		contagem_jogadas = 1;
		for(i=0; i<3;i++){
			for(j=0;j<3;j++){
				matrix[i][j] = ' ';
			}
		}
		do{
			interface(matrix);
			bool troca_jogadores; //Condição para alterar os jogadores dos grupos

			if(vez%2==0){ //EXERCICIO PEDIU 4 PESSOAS...
				if (troca_jogadores == false){
					printf("Grupo X - Jogador 1\n");
					troca_jogadores = true;
				} else {
					printf("Grupo X - Jogador 3\n");
					troca_jogadores = false;
				}
			}else{
				if(troca_jogadores == true){
					printf("Grupo O - Jogador 2\n");
				
				} else{
					printf("Grupo O - Jogador 4\n");
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
				contagem_jogadas++;
			} 
		//HORIZONTAIS - CONDIÇÕES DE VITÓRIA DO GRUPO "X".
		if (matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X'){contagem_jogadas = 11;	}
		if (matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X'){contagem_jogadas = 11;	}
		if (matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X'){contagem_jogadas = 11;	}
		if (matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X'){contagem_jogadas = 11;	}
		if (matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X'){contagem_jogadas = 11;	}
		if (matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X'){contagem_jogadas = 11;	}
		//DIAGONAIS - CONDIÇÕES DE VITÓRIA!
		if (matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X'){contagem_jogadas = 11;	}
		if (matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X'){contagem_jogadas = 11;	}
	
		//HORIZONTAIS - CONDIÇÕES DE VITÓRIA DO GRUPO "O".
		if (matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O'){contagem_jogadas = 12;	}
		if (matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O'){contagem_jogadas = 12;	}
		if (matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O'){contagem_jogadas = 12;	}
		if (matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O'){contagem_jogadas = 12;	}
		if (matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O'){contagem_jogadas = 12;	}
		if (matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O'){contagem_jogadas = 12;	}
		//DIAGONAIS - CONDIÇÕES DE VITÓRIA!
		if (matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O'){contagem_jogadas = 12;	}
		if (matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O'){contagem_jogadas = 12;	}
			
	} while(contagem_jogadas<=9);
	interface(matrix);
	if(contagem_jogadas==10){
		printf("\n\t************\n");
		printf("\tFIM DO JOGO.\n");
		printf("\t************\n");
		printf("\n\tJOGO EMPATADO!!!\n");
	 }
	 if(contagem_jogadas==11){
		printf("\n\t************\n");
		printf("\tFIM DO JOGO.\n");
		printf("\t************\n");
	 	printf("\n\tOS JOGADORES 1 e 3 DO GRUPO 'X' SÃO OS VENCEDORES!!!!!!!!\n");
	}
	if(contagem_jogadas==12){
		printf("\n\t************\n");
		printf("\tFIM DO JOGO.\n");
		printf("\t************\n");
		printf("\n\tOS JOGADORES 2 e 4 DO GRUPO 'O' SÃO OS VENCEDORES!!!!!!!!\n");
	}
		
	printf("\n\tDeseja digitar novamente? [S-N]\n");
	scanf("%s",&resposta);
	if(resposta=='n'){
		exit(0);
	}
	return init_matrix();	
	}
	while(resposta=='s' || resposta=='S');
}

