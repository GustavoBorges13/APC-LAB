algoritmo "questao_08"
// Fun��o :
// Autor :
// Data : 27/09/2021
// Se��o de Declara��es 
var
  nota1,nota2, peso1, peso2, media: real
  //PESOS: NOTA1 = PESO 6, NOTA2 = PESO 4

inicio
  escreval("Digite a primeira nota: ")
  leia(nota1)
  escreval("Digite o peso da primeira nota: ")
  leia(peso1)
  escreval("Digite a segunda nota: ")
  leia(nota2)
  escreval("Digite o peso da segunda nota: ")
  leia(peso2)
  
  
  media <- (nota1*peso1+nota2*peso2)/(peso1+peso2)
  escreval("A m�dia ponderada das notas � de: ", media)
fimalgoritmo

