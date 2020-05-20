Algoritmo "Ex010"

Var
numeroIdentifica : caractere
nota1 : real
nota2 : real
nota3 : real
me : real
ma : real
indice : caractere

Inicio

escreva("Numero de identificaca: ")
leia(numeroIdentifica)

escreva("Nota 1: ")
leia(nota1)

escreva("Nota 2: ")
leia(nota2)

escreva("Nota 3: ")
leia(nota3)

escreva("Media dos exercicios: ")
leia(me)

ma <- ((nota1 + (nota2 * 2)  + (nota3 * 3) + me) / 7)

escreval("Media de aproveitamento -> ", ma)

Fimalgoritmo
