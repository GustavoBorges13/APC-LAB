algoritmo "questao_4"
// Fun��o : Elaborar um algoritmo que leia um vetor A de 30 n�meros inteiros e imprima o maior valor.
// Autor :
// Data : 04/10/2021
// Se��o de Declara��es 
var
a: vetor[1..30] de inteiro
i,maior: inteiro
inicio
escreva ("Gerando 30 n�meros aleat�rios: ")
para i de 1 ate 30 faca //0 a 30
     a[i] <- randi(1000)
     escreval (a[i])
     se maior < a[i] entao  //armazena o maior e compara com o pr�ximo
        maior <- a[i]
     fimse
fimpara

escreval
escreva ("O maior entre eles �: ", maior)
escreval


fimalgoritmo
