Algoritmo "ex17"

Var 
mes : inteiro
ano : inteiro
dia : inteiro

Inicio
escreva("Mes do ano: ")
leia(mes)

escolha mes
  caso 1
    escreval("Janeiro")
  caso 2
    escreval("Fevereiro")
  caso 3
    escreval("Março")
  caso 4
    escreval("Abril")
  caso 5
    escreval("Maio")
  caso 6
    escreval("Junho")
  caso 7 
    escreval("Julho")
  caso 8
    escreval("Agosto")
  caso 9
    escreval("Setembro")
  caso 10
    escreval("Outubro")
  caso 11
    escreval("Novembro")
  caso 12
    escreval("Dezembro")
  outrocaso
    escreval("Mes nao valido")
    FImalgoritmo
fimescolha

escreva("Dia: ")
leia(dia)

se (dia <> 28) e (mes = 2) entao
  escreval("Dia invalido")
  Fimalgoritmo
fimse

se (dia = 31) e (mes % 2 = 1) entao
  escreval("Dia invalido")
fimse

se (dia = 30) e (mes % 2 = 0) entao
  escreval("Dia invalido")
fimse

escreva("Ano: ")
leia(ano)

escreval(dia,"/",mes,"/",ano)
Fimalgoritmo
