Algoritmo "Ex12"

Var
i : inteiro
a : real
b : real
c : real

Inicio
escreva("Digite o numero inteiro: (1,2 ou 3) ")
leia(i)

escreva("Valor de A: ")
leia(a)

escreva("Valor de B: ")
leia(b)

escreva("Valor de C: ")
leia(c)

se i = 1 entao 
  se (a > b) e (b > c) entao
    escreval(a, b, c)
  fimse
 
  se (a > c) e (c > b) entao
    escreval(a, c, b)
  fimse

  se (b > a) e (a > c) entao
    escreval(b, a, c)
  fimse

  se (b > c) e (c > a) entao
    escreval(b, c, a)
  fimse

  se (c > b) e (b < a) entao
    escreval(c, a, b)
  fimse

  se (c > b) e (b > a) entao
    escreval(c, b, a)
  fimse
fimse

se i = 2 entao
  se (a < b) e (b < c) entao
    escreval(a, b, c)
  fimse

  se (a < c) e (c < b) entao
    escreval(a, c, b)
  fimse

  se (b < a) e (a < c) entao
    escreval(b, a, c)
  fimse

  se (b < c) e (c < a) entao
    escreval(b, c, a)
  fimse

  se (c < b) e (b < a) entao
    escreval(c, b, a )
  fimse

  se (c < a) e (a < b) entao
    escreval(c, a, b)
  fimse
fimse

se i = 3 entao
  se (a > c) e (c > b) entao
     escreval(b, a, c)
  fimse
  
  se (a > b) e (b > c) entao
     escreval(b, a, c)
  fimse
  
  se (b > a) e (a > c) entao
     escreval(a, b, c)
  fimse
  
  se (b > c) e (c > a) entao
     escreval(a, b, c)
  fimse
  
  se (c > a) e (a > b) entao
     escreval(a, c, b)
  fimse
  
  se (c > b) e (b > a) entao
     escreval(a, c, b)
  fimse
fimse

Fimalgoritmo
