#include <stdio.h>
/*
- Some os valores
- Imprima na tela o valor final da soma
- Fa�a a subtra��o dos mesmos valores
- Imprima na tela o valor final da subtra��o
- Fa�a a multiplica��o dos mesmos valores
- Imprima na tela o valor final da multiplica��o
- Fa�a a divis�o dos mesmos valores
- Imprima na tela o valor final da divis�o
- As opera��es podem ser sequenciais, ou seja, fa�a a soma, depois a subtra��o, ...
*/

main5(){
    int num1, num2, soma, subtracao, multiplicacao, divisao, resto;
    printf ("\n Digite o primeiro numero: " );
    scanf ("%d", &num1 );
    printf ("\n Digite um segundo numero: ");

    //SOMAT�RIA
    scanf ("%d", &num2 );
    soma = num1 + num2;
    printf ("\n Soma = %d", soma);

    //SUBTRA��O
    subtracao = num1 - num2;
    printf ("\n Subtracao = %d", subtracao);

    //MULTIPLICA��O
    multiplicacao = num1 * num2;
    printf ("\n Multiplicacao = %d", multiplicacao);

    //DIVIS�O INTEIRA
    divisao = num1/num2;
    printf ("\n Divisao = %d \n", divisao); //OBS: a parte fracion�ria � eliminada de forma autom�tica
}
