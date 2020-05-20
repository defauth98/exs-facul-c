Algoritmo "Ex04"

Var 
salarioBruto : real
proventos : real

Inicio

escreva("Salario bruto: ")
leia(salarioBruto)

escreva("Provetos: ")
leia(proventos)

se salarioBruto <= 50 entao
escreval("Salario liquido -> ", salarioBruto + proventos - (5 * salarioBruto / 100))
senao
escreval("Salario liquido -> ", salarioBruto + proventos - (5 * salarioBruto / 100))
fimse

Fimalgoritmo
