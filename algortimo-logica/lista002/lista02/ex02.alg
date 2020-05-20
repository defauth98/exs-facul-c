Algoritmo "Ex02"

Var
sexo : inteiro
altura : real

Inicio

escreva("Altura: ")
leia(altura)

escreva("Sexo [1] masculino e [0] feminino: ")
leia(sexo)

se sexo = 1 entao
escreval("Peso ideal -> ", (72.7 * altura) - 58)
senao
escreval("Peso ideal -> ", (62.1 * altura) - 44.7)
fimse

Fimalgoritmo
