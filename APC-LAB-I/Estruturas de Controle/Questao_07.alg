algoritmo "questao_07"
// Fun��o :
// Autor :
// Data : 27/09/2021
// Se��o de Declara��es 
var
  num, dobro : Inteiro
inicio
dobro <- 0
  escreval("Digite um num�ro inteiro positivo: ")
  leia(num)
  
  se num > 0 entao
     dobro <- num * 2
     escreval("O dobro de ", num, " � igual a: ", dobro)
  senao
     escreval("Erro, o numero", num, " n�o � um inteiro positivo!")
  fimse
fimalgoritmo

