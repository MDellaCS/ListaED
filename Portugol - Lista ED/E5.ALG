Algoritmo "e5"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
nota1, nota2, nota3, nota4, media: real

Inicio
escreval("Digite a primeira nota de um(a) aluno(a)")
leia(nota1)
escreval("Digite a segunda nota de um(a) aluno(a)")
leia(nota2)
escreval("Digite a terceira nota de um(a) aluno(a)")
leia(nota3)
escreval("Digite a quarta nota de um(a) aluno(a)")
leia(nota4)
media <- (nota1+nota2+nota3+nota4)/4

se media >=6 entao
escreval("Aprovado(a)")
senao
escreval("Reprovado(a)")
fimse

Fimalgoritmo