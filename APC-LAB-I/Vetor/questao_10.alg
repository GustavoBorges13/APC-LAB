algoritmo "questao_10"

VAR
vet1: vetor[1..4]de inteiro
vet2: vetor[1..4]de inteiro
vet3: vetor[1..8]de inteiro
i: inteiro

inicio

escreval("Vetor 1")
para i de 1 ate 4 faca
     escreva("Digite o número da posição [",i," ]: ")
     leia(vet1[i]) //Armazena as palavras no vetor 1
fimpara

escreval
escreval("Vetor 2")
para i de 1 ate 4 faca
     escreva("Digite o número da posição [",i," ]: ")
     leia(vet2[i]) //Armazena as palavras no vetor 2
fimpara

//limpatela //função para limpar o serial pra apresentar novos dados.

//Realizar a união do vetor 1 e 2
para i de 1 ate 4 faca
     se vet1[i] <> vet2[i] entao
                vet3[i] <- vet1[i]
                vet3[i+4] <- vet2[i]
     senao
                vet3[i] <- vet1[i]
     fimse
fimpara
escreval
escreval("Vetor 3")
para i de 1 ate 8 faca
     escreva("[ ",vet3[i]," ]") //Mostra a união dos vetores 1 e 2
fimpara
escreval

fimalgoritmo

