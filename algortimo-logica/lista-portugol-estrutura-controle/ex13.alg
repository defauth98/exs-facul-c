Algoritmo "Ex13"

Var
nota1 : real
nota2 : real
media : real
frequencia : real
numAulas : real
numAssistidas : real

Inicio 
escreva("Nota 1: ")
leia(nota1)

escreva("Nota 2: ")
leia(nota2)

escreva("Numero de aulas: ")
leia(numAulas)

escreva("Numero de aulas assitidas: ")
leia(numAssistidas)

media <- (nota1 + nota2) / 2
frequencia <- numAssistidas * numAulas / 100

se (media >= 6) e (frequencia >= 75) entao
  escreval("Aprovado")
senao
  escreval("Reprovado")
fimse

Fimalgoritmo
