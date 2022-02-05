#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main_24(){
    setlocale(LC_ALL,"Portuguese");
    float peso, altura, IMC;
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    IMC = peso/(altura*altura); //IMC = peso / (altura x altura) <- DADOS OFICIAIS
    system("cls");
    printf("Seu peso � %2.2f kg\n",peso);
    printf("Sua altura � %2.2f m\n",altura);
    printf("Seu IMC � %2.2f kg/m2\n\n",IMC);
    if (IMC < 18.5){
        printf("Portanto, voc� est� abaixo do peso.\n");
    }
    if(IMC >= 18.5 && IMC <= 25){
        printf("Portanto, voc� est� com peso normal.\n");
    }
    if(IMC > 25 && IMC <= 30){
        printf("Portanto, voc� est� acima do peso.\n");
    }
    if(IMC > 30){
        printf("Portanto, voc� est� obeso.\n");
    }
}
