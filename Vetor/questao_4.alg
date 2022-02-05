algoritmo "questao_4"
// Função : Elaborar um algoritmo que leia um vetor A de 30 números inteiros e imprima o maior valor.
// Autor :
// Data : 04/10/2021
// Seção de Declarações 
var
a: vetor[1..30] de inteiro
i,maior: inteiro
inicio
escreva ("Gerando 30 números aleatórios: ")
para i de 1 ate 30 faca //0 a 30
     a[i] <- randi(1000)
     escreval (a[i])
     se maior < a[i] entao  //armazena o maior e compara com o próximo
        maior <- a[i]
     fimse
fimpara

escreval
escreva ("O maior entre eles é: ", maior)
escreval


fimalgoritmo
