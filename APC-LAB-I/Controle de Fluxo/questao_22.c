//Faça um programa que converta horas em minutos e vice versa.
#include <stdio.h>
int main_22(){
    long long int horas, minutos, segundos, milissegundos, microssegundos;
    printf("Digite um valor de horas: ");
    scanf("%d", &horas);
    minutos = horas * 60;
    segundos = minutos * 60;
    segundos = minutos * 60;
    milissegundos = segundos * 1000;
    microssegundos = milissegundos * 1000;
    printf("\n Horas: %d h\n",horas);
    printf(" Minutos: %d min\n",minutos);
    printf(" Segundos: %d s\n",segundos);
    printf(" Milissegundos: %d ms\n",milissegundos);
    printf(" Microssegundos: %lld %cs\n\n",microssegundos,230);
}
