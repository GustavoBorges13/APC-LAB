algoritmo "questao_18"
var
vet1,vet2: vetor[1..10] de real
i: inteiro
 
inicio
para i de 1 ate 10 faca
     escreva("Digite um número para a posição [",i," ]: ")
     leia(vet1[i])
fimpara

limpatela

para i de 1 ate 10 faca
     vet2[i] <- vet1[i] / 2
fimpara

escreval("Vetor 2")
para i de 1 ate 10 faca
     escreva("[ ", vet2[i]," ]")
fimpara
escreval
fimalgoritmo
