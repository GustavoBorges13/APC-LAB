algoritmo "questao_19"
var
vetA,vetB: vetor[1..30] de inteiro
i,X: inteiro
 
inicio
escreval("Vetor A:")
para i de 1 ate 30 faca
     escreva("Digite um n�mero para a posi��o [",i," ]: ")
     leia(vetA[i])
fimpara

limpatela

para i de 1 ate 10 faca
     soma <- soma + altura[i]
fimpara

media <- soma/10
escreva("A altura m�dia dos jogadores � de ",media,"m")
escreval

escreval("Jogadores com altura acima da m�dia: ")
para i de 1 ate 10 faca
     se altura[i] > media entao
        escreval("Jogador [",i," ] = ",altura[i])
     fimse
fimpara

fimalgoritmo
