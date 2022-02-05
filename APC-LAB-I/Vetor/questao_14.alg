algoritmo "questao_14"

VAR
vetor1,vetor2,vetor3,vetor4: vetor[1..5]de real
i: inteiro

inicio

escreval("Vetor 1")
para i de 1 ate 5 faca
     escreva ("Digite o número da posição [",i," ]: ")
     leia(vetor1[i]) //Armazena as palavras no vetor 2
fimpara

limpatela

escreval("Vetor 2")
para i de 1 ate 5 faca
     escreva ("Digite o número da posição [",i," ]: ")
     leia(vetor2[i]) //Armazena as palavras no vetor 2
fimpara

escreval("Vetor 3")
para i de 1 ate 5 faca
     escreva ("Digite o número da posição [",i," ]: ")
     leia(vetor3[i]) //Armazena as palavras no vetor 2
fimpara

//EXPRESSÃO A SER CALCULADA
para i de 1 ate 5 faca
     vetor4 <- (vetor1[i] * vetor3[i]) / vetor2[i])
     escreva("Resultado da expressão: ", vetor4[i])
fimpara
fimalgoritmo

