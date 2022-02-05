algoritmo "questao_21"
var
competidor,tempo: vetor[1..10] de inteiro
i,j,aux,aux2: inteiro
 
inicio

para i de 1 ate 10 faca
     escreva("Competidor: ")
     leia(competidor[i])
     escreva("Tempo (s): ")
     leia(tempo[i])
fimpara

para i de 1 ate 9 faca
     para j de i+1 ate 10 faca
          se tempo[j] < tempo[i] entao
              aux <- tempo[j]
              tempo[j] <- tempo[i]
              tempo[i] <- aux
              
              aux2 <- competidor[j]
              competidor[j] <- competidor[i]
              competidor[i] <- aux2
          fimse
     fimpara
fimpara
escreval
escreval("O vencedor em primeiro lugar foi ",competidor[1]," com seus ",tempo[1]," segundos.")
escreva("O vencedor em segundo lugar foi ",competidor[2]," com seus ",tempo[2]," segundos.")
escreval
fimalgoritmo
