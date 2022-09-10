Algoritmo "e1"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
nome: caracter
nota1, nota2, nota3, media: real

Inicio
escreval("Digite o nome do(a) aluno(a)")
leia(nome)
escreval("Digite a primeira nota do(a) aluno(a)")
leia(nota1)
escreval("Digite a segunda nota do(a) aluno(a)")
leia(nota2)
escreval("Digite a terceira nota do(a) aluno(a)")
leia(nota3)
media <- (nota1+nota2+nota3)/3

se media >= 7 entao
escreval("Aprovado(a)")
senao
se media <= 4 entao
escreval("Reprovado(a)")
senao
se media > 4 entao
se media < 7 entao
escreval("Recuperação")
fimse
fimse
fimse
fimse

Fimalgoritmo