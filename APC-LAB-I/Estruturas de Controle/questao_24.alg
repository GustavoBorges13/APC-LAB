algoritmo "Quest�o-24"
// Fun��o :
// Autor : Gustavo Borges
// Data : 26/09/2021
// Se��o de Declara��es
var
i,count, num,num2,maior:inteiro

inicio
escreval("Quantos numeros ser�o digitados? ")
leia(num)

count <- 0

para count de 1 ate num faca //Realiza o incremento de 1 em 1.         	
      escreva("Digite o n�mero -> ")
      leia(num2) //Armazena o numero digitado.
            	
    	se maior < num2 entao //Compara se o maior numero detectado for menor que o digitado.
    		maior <- num2 //Se verdadeiro, entao este � o maior numero
    		i <- 1 //Inicia o contador de numero de vez que o maior numero foi digitado
    	senao
           se maior = num2 entao //Compara o valor digitado com o procurado.
    		     i <- i + 1 //Se foi digitado o mesmo valor ent�o incrementa +1
  	        fimse
      fimse
 	   
    	count<-count+1 //Soma +1 para o count do ciclo.
    fimpara
    escreval("Maior numero � ", maior, ", e foi digitado ", i, " vezes")
    fimalgoritmo
