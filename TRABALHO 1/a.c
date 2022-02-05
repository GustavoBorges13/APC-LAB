#include <stdio.h>

#include <locale.h>


int main(void) {
	setlocale(LC_ALL,"Portuguese");
	int matriz[3][3] = {{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}};
	
	int m,n;
	for(m=0; m < 7; ++m){
		for(n=0; n < 7; ++n){
			printf("%i ", matriz[m][n]);
		}
		printf("\n");
	}
	return 0;
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
