Algoritmo "Ex05"

Var
nota1 : real
nota2 : real
nota3 : real
media : real

Inicio
escreva("Nota 1: ")
leia(nota1)

escreva("Nota 2: ")
leia(nota2)

escreva("Nota 3: ")
leia(nota3)

se (nota1 > nota2) e (nota2 >= nota3) entao
  media <- (nota1 * 4 / 10) + (nota2 * 3 / 10) + (nota3 * 3 / 10)
fimse

se (nota1 > nota3) e (nota3 >= nota2) entao
  media <- (nota1 * 4 / 10) + (nota2 * 3 / 10) + (nota3 * 3 / 10)
fimse

se (nota2 > nota1) e (nota1 >= nota3) entao
   media <- (nota2 * 4 / 10) + (nota1 * 3 / 10) + (nota1 * 3 / 10)
fimse

se (nota2 > nota3) e (nota3 >= nota1) entao
  media <- (nota2 * 4 / 10) + (nota1 * 3 / 10) + (nota3 * 3 / 10)
fimse

se (nota3 > nota1)  e (nota1 >= nota2) entao
  media <- (nota3 * 4 / 10) + (nota1 * 3 / 10) + (nota2 * 3 / 10)
fimse

se (nota3 > nota2) e (nota2 >= nota1) entao
  media <- (nota3 * 4 / 10) + (nota2 * 3 / 10) + (nota1 * 3 / 10)
fimse

escreval("Media -> ", media)

se media >= 5 entao
  escreval("Aprovado")
senao
  escreval("Reprovado")
fimse

Fimalgoritmo
