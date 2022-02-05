algoritmo "questao_6"
// Autor: Gustavo Borges    ||   Data: 04/10/2021

var
nome:vetor[1..12]de caractere
altura:vetor[1..12]de real
i:inteiro
maior:real
vinculo:caractere //auxiliar do vetor de nomes.

inicio
para i de 1 ate 12 faca
     escreva ("Nome: ")
     leia(nome[i])
     escreva ("Digite a altura de ",nome[i], " em metros: ")
     leia(altura[i])
     se maior < altura[i] entao
        maior <- altura[i] //Armazena a altura mais alta.
        vinculo <- nome[i] //vincula o nome do jogador com a altura.
     fimse
     escreval //SALTAR LINHA
fimpara
escreval
escreva ("O jogador mais alto é o ",vinculo,", com altura de",maior, "m.")
escreval
Fimalgoritmo

