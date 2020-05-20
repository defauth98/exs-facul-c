Algoritmo "Ex18"

Var
horaInicial : real
horaFinal : real
duracao : real

Inicio
escreva("Hora inicial: ")
leia(horaInicial)

escreva("Hora final: ")
leia(horaFinal)

se horaInicial > horaFinal entao
  duracao <- horaInicial - horaFinal
senao
  duracao <- horaFinal - horaInicial
fimse

se duracao > 24 entao
  escreval("Duracao do jogo -> ", duracao)
  escreval("Duracao invalida - maior que 24 horas")
senao
  escreval("Duracao do jogo -> ", duracao)
  escreval("Duracao valida")
fimse

Fimalgoritmo
