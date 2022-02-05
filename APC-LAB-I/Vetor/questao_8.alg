algoritmo "questao_8"

VAR
M,N: vetor[1..5] de inteiro
I: inteiro

inicio
para i de 1 ate 5 faca
	Escreva("Digite valor para M[",i,"]: ")
	leia(M[i])
	se ((M[i] MOD 2) = 0) entao
		N[i] <-(M[i]-2)*2
	senao
		N[i] <-(M[i]+2)*(2-3)
	fimse
fimpara
para i de 1 ate 5 faca
	Escreva(N[i])
fimpara
fimalgoritmo

