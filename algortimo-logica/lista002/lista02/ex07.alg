Algoritmo "Ex07"

Var
num1 : real
num2 : real
num3 : real

Inicio
escreva("Numero 1:")
leia(num1)

escreva("Numero 2: ")
leia(num2)

escreva("Numero 3: ")
leia(num3)

se (num1 > num2) e (num1 > num3) e (num2 > num3) entao
escreval("Maior numero -> ", num1)
fimse

se (num2 > num1) e (num2 > num3) e (num1 > num3) entao
escreval("Maior numero -> ", num2)
fimse 

se (num3 > num1) e (num3 > num2) e (num2 > num1) entao
escreval("Maior numero -> ", num3)
fimse

Fimalgoritmo
