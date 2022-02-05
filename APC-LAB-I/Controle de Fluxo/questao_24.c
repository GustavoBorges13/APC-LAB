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
    printf("Seu peso é %2.2f kg\n",peso);
    printf("Sua altura é %2.2f m\n",altura);
    printf("Seu IMC é %2.2f kg/m2\n\n",IMC);
    if (IMC < 18.5){
        printf("Portanto, você está abaixo do peso.\n");
    }
    if(IMC >= 18.5 && IMC <= 25){
        printf("Portanto, você está com peso normal.\n");
    }
    if(IMC > 25 && IMC <= 30){
        printf("Portanto, você está acima do peso.\n");
    }
    if(IMC > 30){
        printf("Portanto, você está obeso.\n");
    }
}
