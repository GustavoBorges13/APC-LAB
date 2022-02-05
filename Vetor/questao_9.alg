algoritmo "questao_8"

VAR
vet1: vetor[1..5] de caractere
vet2: vetor[1..5] de caractere
i: inteiro

inicio

escreval("Diga 5 palavras relacionadas a róbotica: ")
para i de 1 ate 5 faca
     leia(vet1[i]) //Armazena as palavras no vetor 1
fimpara

para i de 1 ate 5 faca
     vet2[i] <- vet1[i]  //Copia os dados do vetor 1 para o vetor 2
fimpara

limpatela //função para limpar o serial pra apresentar novos dados.

//Apresentação dos dados do vetor 1 no serial.
escreval
escreva("Vet1 = [")
para i de 1 ate 5 faca
     escreva(vet1[i]," ")
fimpara
escreva("]")
escreval

//Apresentação dos dados do vetor 2 no serial.
escreval
escreva("Vet2 = [")
para i de 1 ate 5 faca
     escreva(vet2[i]," ")
fimpara
escreva("]")
escreval

fimalgoritmo

