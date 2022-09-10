Algoritmo "e12"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
sal, nsal: real
carg: caracter

Inicio
escreva("Digite o salário de um(a) funcionário(a): ")
leia(sal)
escreva("Digite o cargo de um(a) funcionário(a): ")
leia(carg)

se (carg = "Gerente") entao
nsal <- sal * 1.1
senao
se (carg = "Engenheiro") entao
nsal <- sal * 1.2
senao
se (carg = "Técnico") entao
nsal <- sal * 1.3
senao
nsal <- sal * 1.4
fimse
fimse
fimse

escreval("Salário antigo: " , sal)
escreval("Salário novo: " , nsal)
escreval("Diferença: " , nsal-sal)

Fimalgoritmo