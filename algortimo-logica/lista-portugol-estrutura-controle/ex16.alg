Algoritmo "Ex16"

Var 
a : real
b : real
c : real
Inicio
escreva("Lado 1: ")
leia(a)

escreva("Lado 2: ")
leia(b)

escreva("Lado 3: ")
leia(c)

se (((b - c) < a) e ( a < (b + c))) e (((a - c) < b) e ( b < (a + c))) e (((a - b) < c) e ( c < (a + b))) entao
  se ((x = y) e (y = z)) entao
    escreval("Triangulo equilatero")
  fimse

  se (((x = y) e (y <> z))) ou (((y = z) e (z <> x))) ou (((y = z) e (z <> x))) entao
    escreval("Triangulo isoceles")
  fimse

  se (x <> y) e (y <> z) e (z <> x) entao
    escreval("Triandgulo escaleno")
  fimse
senao
     escreval("Nao e um triangulo")
fimse

Fimalgoritmo
