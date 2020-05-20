Algoritmo "Ex01"

Var
num1 : real
num2 : real
num3 : real

Inicio

escreva("Numero 1: ")
leia(num1)

escreva("Numero 2: ")
leia(num2)

escreva("Numero 3: ")
leia(num3)

se num1 > 0 entao
escreval("Raiz quadrada do primeiro numero -> ", raizq(num1))
senao
escreval("Quadrado do primeiro numero -> ", num1 * num1)
fimse

se (num2 > 10) e (num2 < 100) entao
escreval("Numero esta entre 10-100 - intervalo permitido")
fimse

se num3 < num2 entao
escreval("Diferenca entre num1 e num2: ", num2 - num3)
senao
escreval("Numero 3 +1 -> ", num3 + 1)
fimse

Fimalgoritmo
