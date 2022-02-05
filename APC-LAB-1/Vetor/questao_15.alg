algoritmo "questao_15"

VAR
vet: vetor[1..10]de real
i: inteiro

inicio
para i de 5 ate 50 passo 5 faca
 vet[i div 5] <- i;
fimpara

para i de 1 ate 10 faca
     escreva(vet[i])
fimpara
fimalgoritmo

