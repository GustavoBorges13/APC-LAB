algoritmo "questao_20"
var
vetA,vetB: vetor[1..30] de inteiro
i,c,j,X: inteiro
 
inicio
escreval("Vetor A:")
para i de 1 ate 5 faca
     escreva("Digite um n�mero para a posi��o [",i," ]: ")
     leia(vetA[i])
fimpara

limpatela

escreval("Vetor B:")
para i de 1 ate 5 faca
     escreva("Digite um n�mero para a posi��o [",i," ]: ")
     leia(vetB[i])
fimpara

limpatela

escreva("Digite um valor para X: ")
leia(X)

escreval
escreval("Vetor A")
para i de 1 ate 5 faca
     se X = vetA[i] entao
        escrevaL("O n�mero",X," se encontra na posi��o [",i," ] = ",vetA[i])
        c <- c + 1
     fimse
fimpara
escreval

escreval("Vetor B")
para i de 1 ate 5 faca
     se X = vetB[i] entao
        escrevaL("O n�mero",X," se encontra na posi��o [",i," ] = ",vetB[i])
        j <- j + 1
     fimse
fimpara

escreval
escreval("Em qual dos vetores o X ocorreu mais?")
escreval("O numero",X," apareceu",c," vezes no vetor A.")
escreval("O numero",X," apareceu",j," vezes no vetor B.")
escreval

se c > j entao
   escreval("Portanto, a vari�vel X apareceu mais no vetor A.")
senao
     se c < j entao
        escreval("Portanto, a vari�vel X apareceu mais no vetor B.")
     fimse
     se c = j entao
         escreval("Portanto, a vari�vel X apareceu em mesma qtd. em ambos vetores A e B.")
     fimse
fimse
fimalgoritmo
