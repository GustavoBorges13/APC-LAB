algoritmo "questao_1"
// Fun��o : Ordene o vetor: a = [5 4 3 2 6]
// Autor : Gustavo Borges
// Data : 03/10/2021
// Se��o de Declara��es 
var
a,vet:vetor[1..5]de inteiro
i,j,aux:inteiro

inicio
a[1] <- 5
a[2] <- 4
a[3] <- 3
a[4] <- 2
a[5] <- 6
vet[1] <- a[1]
vet[2] <- a[2]
vet[3] <- a[3]
vet[4] <- a[4]
vet[5] <- a[5]

para i <- 1 ate 4 faca
     para j <- i+1 ate 5 faca
          se (a[i] > a[j]) entao
             aux <- a[i]
             a[i] <- a[j]
             a[j] <- aux
          fimse
     fimpara
fimpara

escreva("Vetor de antes era: a = [")
para i de 1 ate 5 passo 1 faca
 escreva (vet[i])
fimpara
escreva("]")
escreval

//escreval ("Antes era: ", vet[1,2])
para i de 1 ate 5 passo 1 faca
 escreval  //espa�amento
 escreva ("A [ ",i," ] -> ",a[i])
fimpara
escreval //espa�amento
escreval //espa�amento

escreva("De forma ordenada ficou: a = [")
para i de 1 ate 5 passo 1 faca
 escreva (a[i])
fimpara
escreva("]")
escreval

fimalgoritmo
