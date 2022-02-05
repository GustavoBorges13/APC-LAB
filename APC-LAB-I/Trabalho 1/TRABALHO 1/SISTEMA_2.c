#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
//	void funcaoPrint(int jan[31],int fev[29], int mar[31], int abr[30]);
	int m,n,i;
		//121 DIAS AO TODO...
	int matriz_temperaturas[22][7] = {{21, 19, 19, 21, 23, 23, 26},
						              {23, 23, 23, 24, 25, 22, 20},
							          {23, 23, 23, 21, 19, 20, 20},
							          {21, 22, 20, 21, 23, 24, 22},
						   	          {23, 21, 24, 24, 25, 26, 25}, 
								      {23, 21, 20, 21, 21, 20, 20}, 
								      {21, 23, 23, 22, 24, 24, 24}, 
								      {23, 22, 23, 23, 25, 21, 20}, 
								      {20, 19, 19, 24, 25, 26, 25}, 
								      {23, 21, 20, 21, 21, 20, 20}, 
								      {21, 23, 23, 22, 24, 24, 24}, 
								      {23, 22, 23, 23, 25, 21, 20}, 
								      {20, 19, 19, 20, 20, 21, 22}, 
								      {21, 22, 20, 22, 20, 20, 22}, 
								      {23, 23, 25, 23, 23, 24, 22}, 
								      {20, 22, 25, 23, 22, 23, 23}, 
								      {23, 24, 24, 24, 20, 19, 18},
								      {19, 18, 19, 19, 19, 18, 19}, 
								      {20, 22, 23, 22, 18, 17, 18}, 
								      {19, 18, 18, 18, 17, 16, 16},
								      {17, 18, 19, 18, 17, 17, 15}, 
								      {16, 16}};
	
	for(m = 0; m<22; m++){
		for(n = 0; n<7; n++) {
			printf("\nTemp[%d][%d]: %i", m,n, matriz_temperaturas[m][n]);
		}
	}
//	funcaoMedia(funcaoPrint);
	system("pause >> null");
	return 0;
}
/*
void funcaoPrint(int jan[31],int fev[29], int mar[31], int abr[30]){
	int i,m,n;
    char resposta;			   	  
						   	
	//MOSTRA A MATRIZ DO MÊS DE JANEIRO
	printf("Temperaturas médias dos dias do mês de JANEIRO em matriz: \n");
	for(m=0; m<31; ++m){
			printf("%i ", jan[m]);	
		}
	printf("\n");  	  
	 			
	//MOSTRA A MATRIZ DO MÊS DE FEVEREIRO
	printf("\n\nTemperaturas médias dos dias do mês de FEVEIRO em matriz: \n");
		for(m=0; m<29; ++m){
			printf("%i ", fev[m]);	
		}
	printf("\n");  

	//MOSTRA A MATRIZ DO MÊS DE MARÇO
	printf("\n\nTemperaturas médias dos dias do mês de MARÇO em matriz: \n");
		for(m=0; m<31; ++m){
			printf("%i ", mar[m]);	
		}
	printf("\n");

	//MOSTRA A MATRIZ DO MÊS DE ABRIL
	printf("\n\nTemperaturas médias dos dias do mês de ABRIL em matriz: \n");
		for(m=0; m<30; ++m){
			printf("%i ", abr[m]);	
		}
	printf("\n");
	
	printf("\n\n----------------------");
	printf("\nDigite [S-N] para prosseguir.");
	scanf("%s", &resposta);
	
	if (resposta == 's' || resposta == 'S'){
		return funcaoMedia();
	} else{
		exit(0);
	}
}

void funcaoMedia(){
	system("cls");
	printf("\nVerifica as temperaturas maiores e menores e realiza a media... \n");  
	printf("\nInfelizmente só consegui chegar nessa parte do código :(  Muito difícil para mim.\n\n");  
}	
//	float temp_fevereiro[28]
	
	//float temp_marco[31]
	
//	float temp_abril[30]


  /*  for(i = 0; i < 121; i++) {
        if(menor > temp[i]) {
            menor = temp[i];
            indiceMenor = i;
        }
        if(maior < temp[i]) {
            maior = temp[i];
            indiceMaior = i;
        }
    }
}

*/
