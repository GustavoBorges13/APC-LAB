algoritmo "Questao_23"
// Fun��o : Escreva um algoritmo que leia tr�s n�meros e os imprima em ordem crescente.
// Autor : Gustavo borges Peres da Silva
// Data : 27/09/2021
// Se��o de Declara��es
var
n1, n2, n3: inteiro

inicio
// Se��o de Comandos
escreval ("Digite 3 n�meros: ")
leia (n1, n2, n3)

//Analisar as 3 probabilidades poss�veis
//1�Passo - Analisar a possibilidade do primeiro numero ser o maior entre eles.
se (n1 > n2) entao
 se (n1 > n3) entao
  se (n2 > n3) entao
     escreval ("A ordem �: ", n3, ",", n2, ",",n1)
  senao
       escreval ("A ordem �: ", n2, ",", n3, ",", n1)
  fimse
 fimse
fimse

//2�Passo - Analisar a possibilidade do segundo numero ser o maior entre eles.
se (n2 > n1) entao
 se (n2 > n3) entao
  se (n1 > n3) entao
     escreval ("A ordem �: ", n3, ",", n1, ",",n2)
  senao
       escreval ("A ordem �: ", n1, ",", n3, ",", n2)
  fimse
 fimse
fimse

//3�Passo - Analisar a possibilidade do terceiro numero ser o maior entre eles.
se (n3 > n1) entao
 se (n3 > n2) entao
  se (n1 > n2) entao
     escreval ("A ordem �: ", n2, ",", n1, ",",n3)
  senao
       escreval ("A ordem �: ", n1, ",", n2, ",", n3)
  fimse
 fimse
fimse
fimalgoritmo
