Algoritmo "e8"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
num1, num2, num3, num4, num5, maior, menor: inteiro

Inicio
escreval("Digite um número inteiro")
leia(num1)
maior <- num1
menor <- num1
escreval("Digite um número inteiro")
leia(num2)
escreval("Digite um número inteiro")
leia(num3)
escreval("Digite um número inteiro")
leia(num4)
escreval("Digite um número inteiro")
leia(num5)

se (num1 > maior) entao
maior <- num1
senao
se (num2 > maior) entao
maior <- num2
senao
se (num3 > maior) entao
maior <- num3
senao
se (num4 > maior) entao
maior <- num4
senao
se (num5 > maior) entao
maior <- num5

fimse
fimse
fimse
fimse
fimse

escreval("Maior: " , maior , " | Menor: " , menor)

Fimalgoritmo