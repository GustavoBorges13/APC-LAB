algoritmo "questao_06"
// Fun��o :
// Autor :
// Data : 27/09/2021
// Se��o de Declara��es 
var
  X, Y, vAux : Inteiro
inicio

  escreval("Informe o valor de X.")
  leia(X)

  escreval("Informe o valor de Y.")
  leia(Y)

  vAux <- X
  X <- Y
  Y <- vAux

  escreval("O valor de X �: ", X)
  escreval("O valor de Y �: ", Y)

fimalgoritmo
