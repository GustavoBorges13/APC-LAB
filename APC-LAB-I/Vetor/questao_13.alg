algoritmo "questao_13"

VAR
vet: vetor[1..100]de inteiro
i,count: inteiro

inicio


escreva("Vetor: [")
para i de 1 ate 100 faca
      vet[i] <- 101 - i
fimpara
 
para i de 1 ate 100 faca
      escreva(vet[i])
fimpara
escreva("]")
escreval
fimalgoritmo

