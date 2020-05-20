Algoritmo "Ex15"

Var 
X : real
Y : real

Inicio
escreva("Valor de X: ")
leia(X)

escreva("Valor de Y: ")
leia(Y)

se (X > 0) e (Y > 0) entao
  escreval("Primeiro quadrante")
fimse

se (X < 0) e (Y > 0) entao
  escreval("Segundo quadrante")
fimse

se (X < 0) e (Y < 0) entao
  escreval("Terceiro quadrante")
fimse

se (X > 0) e (Y < 0) entao
  escreval("Quarto quadrante")
fimse

se X = 0 entao
  escreval("Esta sob o eixo x")
fimse

se Y = 0 entao
  escreval("Esta sob o eixo y")
fimse
Fimalgoritmo
