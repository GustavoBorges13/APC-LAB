algoritmo "questao_07"
// Função :
// Autor :
// Data : 27/09/2021
// Seção de Declarações 
var
  num, dobro : Inteiro
inicio
dobro <- 0
  escreval("Digite um numéro inteiro positivo: ")
  leia(num)
  
  se num > 0 entao
     dobro <- num * 2
     escreval("O dobro de ", num, " é igual a: ", dobro)
  senao
     escreval("Erro, o numero", num, " não é um inteiro positivo!")
  fimse
fimalgoritmo

