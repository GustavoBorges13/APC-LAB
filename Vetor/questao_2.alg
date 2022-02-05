algoritmo "questao_1"
// Função: Ordene o vetor: a = [5 4 3 2 6]
// Autor: Gustavo Borges
// Data: 03/10/2021
// Seção de Declarações

var
a:vetor[1..5]de inteiro
aux:inteiro

inicio
//Declaração dos dados armazenados nos vetores.
a[1] <- 5
a[2] <- 4
a[3] <- 3
a[4] <- 2
a[5] <- 6

//PARTE 1
//Passo A.1 a = [5 4 3 2 6]. Comparar a[1] e a[2].
se a[1] < a[2] entao
   a[1] <- a[1] //a[1] continua na mesma posição.
senao
   aux <- a[1] //armazena o valor de a[1] em aux para nao esquecer.
   a[1] <- a[2] //a[1] troca com a[2].
   a[2] <- aux //substitui o valor de a[2] pelo auxiliar.
fimse

//Passo A.2 a = [4 5 3 2 6]. Comparar a[1] e a[3].
se a[1] < a[3] entao
   a[1] <- a[1] //a[1] continua na mesma posição.
senao
   aux <- a[1] //armazena o valor de a[1] em aux para nao esquecer.
   a[1] <- a[3] //a[1] troca com a[3].
   a[3] <- aux //substitui o valor de a[3] pelo auxiliar.
fimse

//Passo A.3 a = [3 5 4 2 6]. Comparar a[1] e a[4].
se a[1] < a[4] entao
   a[1] <- a[1] //a[1] continua na mesma posição.
senao
   aux <- a[1] //armazena o valor de a[1] em aux para nao esquecer.
   a[1] <- a[4] //a[1] troca com a[4].
   a[4] <- aux //substitui o valor de a[4] pelo auxiliar.
fimse

//Passo A.4 a = [2 5 4 3 6]. Comparar a[1] e a[5].
se a[1] < a[5] entao
   a[1] <- a[1] //a[1] continua na mesma posição.
senao
   aux <- a[1] //armazena o valor de a[1] em aux para nao esquecer.
   a[1] <- a[5] //a[1] troca com a[5].
   a[5] <- aux //substitui o valor de a[5] pelo auxiliar.
fimse

//PARTE 2
//Passo B.1 a = [2 5 4 3 6]. Comparar a[2] e a[3].
se a[2] < a[3] entao
   a[2] <- a[2]
senao
   aux <- a[2] //armazena o valor de a[2] em aux para nao esquecer.
   a[2] <- a[3] //a[2] troca com a[3].
   a[3] <- aux //substitui o valor de a[3] pelo auxiliar.
fimse

//Passo B.2 a = [2 4 5 3 6]. Comparar a[2] e a[4].
se a[2] < a[4] entao
   a[2] <- a[2]
senao
   aux <- a[2] //armazena o valor de a[2] em aux para nao esquecer.
   a[2] <- a[4] //a[2] troca com a[4].
   a[4] <- aux //substitui o valor de a[4] pelo auxiliar.
fimse

//Passo B.3 a = [2 3 5 4 6]. Comparar a[2] e a[5].
se a[2] < a[5] entao
   a[2] <- a[2]
senao
   aux <- a[2] //armazena o valor de a[2] em aux para nao esquecer.
   a[2] <- a[5] //a[2] troca com a[5].
   a[5] <- aux //substitui o valor de a[5] pelo auxiliar.
fimse
//PARTE 3
//Passo C.1 a = [2 3 5 4 6]. Comparar a[3] e a[4].
se a[3] < a[4] entao
   a[3] <- a[3]
senao
   aux <- a[3] //armazena o valor de a[3] em aux para nao esquecer.
   a[3] <- a[4] //a[3] troca com a[4].
   a[4] <- aux //substitui o valor de a[4] pelo auxiliar.
fimse

//Passo C.2 a = [2 3 4 5 6]. Comparar a[3] e a[5].
se a[3] < a[5] entao
   a[3] <- a[3]
senao
   aux <- a[3] //armazena o valor de a[3] em aux para nao esquecer.
   a[3] <- a[5] //a[3] troca com a[5].
   a[3] <- aux //substitui o valor de a[5] pelo auxiliar.
fimse
fimalgoritmo
