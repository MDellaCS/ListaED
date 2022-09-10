Algoritmo "e10"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
valor, v: real
n100, n50, n10, n5, n1 :inteiro

Inicio
escreva("Digite um valor em R$ ")
leia(v)
valor <- v

enquanto (valor / 100 >= 1) faca
valor <- valor - 100
n100 <- n100 + 1
fimenquanto

enquanto (valor / 50 >= 1) faca
valor <- valor - 50
n50 <- n50 + 1
fimenquanto

enquanto (valor / 10 >= 1) faca
valor <- valor - 10
n10 <- n10 + 1
fimenquanto

enquanto (valor / 5 >= 1) faca
valor <- valor - 5
n5 <- n5 + 1
fimenquanto

enquanto (valor / 1 >= 1) faca
valor <- valor - 1
n1 <- n1 + 1
fimenquanto

escreval("O valor de R$" , v , " pode ser decomposto em:")
escreval(n100, " nota(s) de 100")
escreval(n50, " nota(s) de 50")
escreval(n10, " nota(s) de 10")
escreval(n5, " nota(s) de 5")
escreval(n1, " nota(s) de 1")

Fimalgoritmo