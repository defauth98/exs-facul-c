Algoritmo "Ex09"

Var
numero : caractere
salarioAtual : real

Inicio
escreva("Numero do funcionario: ")
leia(numero)

escreva("Salario atual: ")
leia(salarioAtual)

escreval()
escreval("Numero do funcionario -> ", numero)
escreval("Salario atual -> ", salarioAtual)

se salarioAtual <= 400 entao
escreval("Percentual de aumento 15%")
escreval("Salario corrigido -> ", salarioAtual + (salarioAtual * 15 / 100))
fimse

se (salarioAtual > 400) e (salarioAtual <= 700) entao
escreval("Percentual de aumento 12%")
escreval("Salario corrigido -> ", salarioAtual + (salarioAtual * 12 / 100))
fimse

se (salarioAtual > 700) e (salarioAtual <= 1000) entao
escreval("Percentual de aumento 10%")
escreval("Salario corrigido -> ", salarioAtual + (salarioAtual * 10 / 100))
fimse

se (salarioAtual > 1000) e (salarioAtual <= 1800) entao
escreval("Percentual de aumento 7%")
escreval("Salario corrigido -> ", salarioAtual + (salarioAtual * 7 / 100))
fimse

se (salarioAtual > 1800) e (salarioAtual <= 2500) entao
escreval("Percentual de aumento 4%")
escreval("Salario corrigido -> ", salarioAtual + (salarioAtual * 4 / 100))
fimse

se salarioAtual > 2500 entao
escreval("Percentual de aumento 0%")
escreval("Salario corrigido -> ", salarioAtual)
fimse
Fimalgoritmo
