Algoritmo "e6"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
sexo: caracter
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
escreval("Digite o sexo do(a) aluno(a) | M asculino ou F eminino")
leia(sexo)
media <- (nota1+nota2+nota3+nota4)/4

se (media >=6) E (sexo = "M") entao
escreval("Caro aluno, seu resultado é: Aprovado")
senao
se (media >=6) E (sexo = "F") entao
escreval("Cara aluna, seu resultado é: Aprovada")
senao
se (media < 6) E (sexo = "M") entao
escreval("Caro aluno, seu resultado é: Aprovado")
senao
se (media < 6) E (sexo = "F") entao
escreval("Cara aluna, seu resultado é: Aprovada")
fimse
fimse
fimse
fimse

Fimalgoritmo