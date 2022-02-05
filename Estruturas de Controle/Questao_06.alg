algoritmo "questao_06"
// Função :
// Autor :
// Data : 27/09/2021
// Seção de Declarações 
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

  escreval("O valor de X é: ", X)
  escreval("O valor de Y é: ", Y)

fimalgoritmo
