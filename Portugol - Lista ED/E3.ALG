Algoritmo "e3"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
sexo: caracter

Inicio
escreval("Digite o sexo de uma pessoa, M para Masculino e F para Feminino")
leia(sexo)

se (sexo = "M") OU (sexo = "F") OU (sexo = "m") OU (sexo = "f") entao
escreval("Sexo válido!")
senao
escreval("Sexo inválido!")
fimse

Fimalgoritmo