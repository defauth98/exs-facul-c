Algoritmo "Ex11"

Var
numeroLado : inteiro
medidaLado : real

Inicio
escreva("Numeros de lados: ")
leia(numeroLado)

escreva("Valor do lado: ")
leia(medidaLado)

se numeroLado = 3 entao
escreval("Triangulo")
escreval("Perimetro -> ", medidaLado + medidaLado + medidaLado)
fimse

se numeroLado = 4 entao
escreval("Quadrado")
escreval("Area -> ", medidaLado * medidaLado)
fimse

se numeroLado = 5 entao
escreval("Pentagono")
fimse

se numeroLado < 3 entao
escreval("Nao e um poligono")
fimse

se numeroLado > 5 entao
escreval("Poligono nao identificado")
fimse

Fimalgoritmo
