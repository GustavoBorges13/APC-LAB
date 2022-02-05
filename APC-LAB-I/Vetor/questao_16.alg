algoritmo "questao_16"

VAR
vet: vetor[1..50]de real
i: inteiro

inicio
para i de 2 ate 100 passo 2 faca
 vet[i div 2] <- i;
fimpara

para i de 1 ate 50 faca
     escreva(vet[i])
fimpara
fimalgoritmo

