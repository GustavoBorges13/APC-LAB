#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void inicializa();
void funcaoAnalise();

int TAM = 121; //Qtd. vetores.
int m ,n ,i ,j ,aux ,maior_temperatura ,menor_temperatura, soma_temperatura = 0;

int matriz_temperaturas[121] = {21, 19, 19, 21, 23, 23, 26,
						        23, 23, 23, 24, 25, 22, 20,
							    23, 23, 23, 21, 19, 20, 20,
							    21, 22, 20, 21, 23, 24, 22,
						        23, 21, 24, 24, 25, 26, 25, 
				       		    23, 21, 20, 21, 21, 20, 20, 
							    21, 23, 23, 22, 24, 24, 24,
								23, 22, 23, 23, 25, 21, 20, 
								20, 19, 19, 20, 20, 21, 22, 
								21, 22, 20, 22, 20, 20, 22, 
								23, 23, 25, 23, 23, 24, 22, 
								20, 22, 25, 23, 22, 23, 23, 
								23, 24, 24, 24, 20, 19, 18, 
								19, 18, 19, 19, 19, 18, 19, 
								20, 22, 23, 22, 18, 17, 18, 
								19, 18, 18, 18, 17, 16, 16, 
								17, 18, 19, 18, 17, 17, 15, 
								16, 16};	
									  
//BRAIN - M E N U
int main() {
	setlocale(LC_ALL,"Portuguese");
	inicializa();
	system("pause >> null");
	return 0;
}

//CARREGAMENTO - PRINTS
void inicializa(){
    char resposta;	
    int janeiro = 31; int fevereiro = 29; int marco = 31; int abril = 30; //Qtd. dias em cada mês...
									  
	//MOSTRA A MATRIZ DO MÊS DE JANEIRO
	printf("Temperaturas médias de Curitiba nos dias do mês de JANEIRO (2021): \n");
	for(m=0, n=1; m<janeiro; ++m,++n){
			if (m%2==0){ //Matriz em print :D
				printf("\nDia[%i]: %i°C.\t|", n,*(matriz_temperaturas + m));	
			}else{
				printf("   Dia[%i]: %i°C.\t\t", n,*(matriz_temperaturas + m));	
			}
	}
	printf("\n----------------------------------"); 
	aux = janeiro + 1; //Isso faz com que salve o utlimo vetor lido 31 + 1 = 32 -> Inicia FEVEREIRO
	
	//MOSTRA A MATRIZ DO MÊS DE FEVEIRO
	printf("\n\nTemperaturas médias de Curitiba nos dias do mês de FEVEREIRO (2021): \n");
	for(n=1; aux<janeiro+fevereiro+1; ++aux,++n){
			if (aux%2==0){ //Matriz em print :D
				printf("\nDia[%i]: %i°C.\t|", n,*(matriz_temperaturas + aux));
			}else{
				printf("   Dia[%i]: %i°C.\t\t", n,*(matriz_temperaturas + aux));
			}
	}
	
	printf("\n----------------------------------");
	aux = janeiro + fevereiro + 1;
	
	//MOSTRA A MATRIZ DO MÊS DE MARÇO
	printf("\n\nTemperaturas médias de Curitiba nos dias do mês de MARÇO (2021): \n");
	for(n=1; aux<janeiro+fevereiro+marco+1; ++aux,++n){
			if (aux%2==1){ //Matriz em print :D
				printf("\nDia[%i]: %i°C.\t|", n,*(matriz_temperaturas + aux));
			}else{
				printf("   Dia[%i]: %i°C.\t\t", n,*(matriz_temperaturas + aux));
			}
	}
	
	printf("\n----------------------------------");
	aux = janeiro + fevereiro + marco + 1;
	
	//MOSTRA A MATRIZ DO MÊS DE ABRIL
	printf("\n\nTemperaturas médias de Curitiba nos dias do mês de ABRIL (2021): \n");
	for(n=1; aux<janeiro+fevereiro+marco+abril+1; ++aux,++n){
			if (aux%2==0){ //Matriz em print :D
				printf("\nDia[%i]: %i°C.\t|", n,*(matriz_temperaturas + aux));
			}else{
				printf("   Dia[%i]: %i°C.\t\t", n,*(matriz_temperaturas + aux));
			}
	}
	printf("\n----------------------------------");
	printf("\n\nAVISO!\tAVISO!\tAVISO!\tAVISO!\tAVISO!\tAVISO!\t\n");
	printf("\nEstes são os dados dos meses de janeiro,fevereiro,março e abril.");
	printf("\nDigite [S-N] para prosseguir na análise desses dados e cálculo da média!\n\n");
	scanf("%s", &resposta);
	
	if (resposta == 's' || resposta == 'S'){
		return funcaoAnalise();
	} else{
		exit(0);
	}
}

//ANÁLISE E CÁLCULOS...
void funcaoAnalise(){
	system("cls");
	printf("\t---ANÁLISE---\n");
	printf("--------------------------------");
	int *ponteiro_ID_Maior, *ponteiro_ID_Menor;
	int indiceMaior = 0, indiceMenor = 0;
	int count_1, count_2, x = 0;
	double media_temperatura = 0;
	
	ponteiro_ID_Maior = &maior_temperatura;
	ponteiro_ID_Menor = &menor_temperatura;	

	maior_temperatura = matriz_temperaturas[0];
	menor_temperatura = matriz_temperaturas[0];
	
	//Compara as maiores e menores temperaturas.
	for(i = 1; i < 121; i++) {
		for(j = 1; j < 121; j++) {
	        if(matriz_temperaturas[i] > maior_temperatura) {
	            maior_temperatura = i;
	            indiceMaior = i;
	        }
	        if(matriz_temperaturas[j] > matriz_temperaturas[i]) {
	            menor_temperatura = j;
	            indiceMenor = j;
	        }
		}
	}
	
	//Realiza a MÉDIA de todas as temperaturas.
	for(i = 0; i < 121; i++) {
		soma_temperatura = soma_temperatura + matriz_temperaturas[i];
	}
	
	media_temperatura = (soma_temperatura)/121.0; //float
	
	//Usei ponteiros para facilitar na alocação dos dados da temperatura em seus respectivos dias :)
	printf("\nA MAIOR temperatura ocorrida é: %d°C.", matriz_temperaturas[*ponteiro_ID_Maior]);
	printf("\nA MENOR temperatura ocorrida é: %d°C.\n", matriz_temperaturas[*ponteiro_ID_Menor]);
	printf("\nA SOMA das temperaturas é igual a: %d°C.", soma_temperatura);
	printf("\nForam verificadas %d temperaturas neste sistema.", TAM);
	printf("\nA MÉDIA das temperaturas é de: %.2f°C.\n", media_temperatura);
	
	
	//ANÁLISE DAS TEMPERATURAS MAIORES/MENORES QUE A MÉDIA...
	for(i = 0; i < 121; i++) {
	    if (media_temperatura > matriz_temperaturas[i]){
			count_1 = count_1 + 1;
		} else if (media_temperatura < matriz_temperaturas[i]){
			count_2 = count_2 + 1;
		}
	}
	
	printf("\nA temperatura foi MAIOR que a MÉDIA em %d dias ao todo.", count_1);	
	printf("\nA temperatura foi MENOR que a MÉDIA em %d dias ao todo.", count_2);
										  
	exit (0);
}
