#include <stdio.h>
/*
- Some os valores
- Imprima na tela o valor final da soma
- Faça a subtração dos mesmos valores
- Imprima na tela o valor final da subtração
- Faça a multiplicação dos mesmos valores
- Imprima na tela o valor final da multiplicação
- Faça a divisão dos mesmos valores
- Imprima na tela o valor final da divisão
- As operações podem ser sequenciais, ou seja, faça a soma, depois a subtração, ...
*/

main5(){
    int num1, num2, soma, subtracao, multiplicacao, divisao, resto;
    printf ("\n Digite o primeiro numero: " );
    scanf ("%d", &num1 );
    printf ("\n Digite um segundo numero: ");

    //SOMATÓRIA
    scanf ("%d", &num2 );
    soma = num1 + num2;
    printf ("\n Soma = %d", soma);

    //SUBTRAÇÃO
    subtracao = num1 - num2;
    printf ("\n Subtracao = %d", subtracao);

    //MULTIPLICAÇÃO
    multiplicacao = num1 * num2;
    printf ("\n Multiplicacao = %d", multiplicacao);

    //DIVISÃO INTEIRA
    divisao = num1/num2;
    printf ("\n Divisao = %d \n", divisao); //OBS: a parte fracionária é eliminada de forma automática
}
