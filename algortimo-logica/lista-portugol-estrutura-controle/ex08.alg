Algoritmo "Ex08"

Var 
moeda : caractere
cotacao : real
valor: real
Inicio

escreva("Moeda [real] ou [dolar]: ")
leia(moeda)

escreva("Valor: ")
leia(valor)

escreva("Cotacao atual: ")
leia(cotacao)

se moeda = dolar entao
escreval("Conversao para real -> ", valor / cotacao)
senaoo
escreval("Conversao para dolar -> ", valor * cotacao)
fimse

Fimalgoritmo
