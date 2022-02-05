#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois;
	depois = &agora;
	
	depois->hora = 20;
	depois->minuto = 20;
	depois->hora = 20;
	
	printf("%i : %i : %i", agora.hora, agora.minuto, agora.minuto);
	
	getchar();
	
	return 0;
}
