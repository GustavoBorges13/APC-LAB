algoritmo "questao_12"

VAR
vet: vetor[1..100]de inteiro
i,count: inteiro

inicio
i <- 1

escreva("Vetor: [")
para i de 1 ate 100 faca
      vet[i] <- i
fimpara
 
para i de 2 ate 99 faca
      escreva(vet[i])
fimpara
escreva("]")
escreval
fimalgoritmo

