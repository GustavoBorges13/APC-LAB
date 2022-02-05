algoritmo "questao_7"
// Função : Elaborar um algoritmo que, dados dois vetores NOME e ALTURA, calcule e imprima o nome do jogador mais alto e a sua altura
// Autor : Gustavo Borges
// Data : 04/10/2021
// Seção de Declarações
var
nome:vetor[1..12]de caractere
altura:vetor[1..12]de real
i:inteiro
media,soma,aux,aux2:real
vinculo:caractere //auxiliar do vetor de nomes.

inicio
para i de 1 ate 12 faca
     escreva ("Nome: ")
     leia(nome[i])
     escreva ("Digite a altura de ",nome[i], " em metros: ")
     leia(altura[i])
     escreval //SALTAR LINHA
fimpara

media <- (altura[1]+altura[2]+altura[3]+altura[4]+altura[5]+altura[6]+altura[7]+altura[8]+altura[9]+altura[10]+altura[11]+altura[12])/12
escreval
escreva("A média da altura dos jogadores é de: ",media:1:2,"m.")
escreval
Fimalgoritmo
