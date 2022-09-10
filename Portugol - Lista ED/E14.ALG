Algoritmo "e14"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
numPedido: inteiro
precoPedido: real
txtPedido: caracter

Inicio
escreval("O que você deseja?")
escreval("")
escreval("1 - Cachorro Quente | R$ 1,10")
escreval("2 - Bauru Simples   | R$ 1,30")
escreval("3 - Bauru c/Ovo     | R$ 1,50")
escreval("4 - Hamburger       | R$ 1,10")
escreval("5 - Cheeseburger    | R$ 1,30")
escreval("6 - Refrigerante    | R$ 1,00")
escreval("9 - Fechar")
numPedido <- 0

enquanto (numPedido <> 9) faca
 leia(numPedido)
 escolha (numPedido)
  caso 1
   txtPedido <- txtPedido + "Cachorro Quente "
   precoPedido <- precoPedido + 1.10
  caso 2
   txtPedido <- txtPedido + "Bauru Simples "
   precoPedido <- precoPedido + 1.30
  caso 3
   txtPedido <- txtPedido + "Bauru c/Ovo "
   precoPedido <- precoPedido + 1.50
  caso 4
   txtPedido <- txtPedido + "Hamburguer "
   precoPedido <- precoPedido + 1.10
  caso 5
   txtPedido <- txtPedido + "Cheeseburguer "
   precoPedido <- precoPedido + 1.30
  caso 6
   txtPedido <- txtPedido + "Refrigerante "
   precoPedido <- precoPedido + 1.00
  caso 9
  outrocaso
   escreval("Opção Inválida!")
  fimescolha
fimenquanto

escreva("Você pediu: ")
escreval(txtPedido)
escreval("Vai lhe custar: R$" , precoPedido)

Fimalgoritmo