Algoritmo "e7"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
horas, salario: real
nivel: inteiro

Inicio
escreval("Digite a quantidade de horas trabalhadas")
leia(horas)
escreval("Digite o nível do(a) professor(a) | 1, 2 ou 3")
leia(nivel)

escolha nivel
caso 1
salario <- horas * 12
escreval("O salário desse(a) professor(a) é: ", salario)
caso 2
salario <- horas * 20.31
escreval("O salário desse(a) professor(a) é: ", salario)
caso 3
salario <- horas * 37.81
escreval("O salário desse(a) professor(a) é: ", salario)
outrocaso
escreval("Nível inválido")
fimescolha

Fimalgoritmo