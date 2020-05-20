#include <stdio.h>
#include <stdlib.h>

int main(){
    int horaInicial, horaFinal, tempo;

    printf("Hora inicial ");
    scanf("%d", &horaInicial);
    
    printf("Qual e a hora final do jogo? ");
    scanf("%d", &horaFinal);

   if (horaInicial >= horaFinal){
        tempo = (24 - horaInicial) + hora_termino;
        printf("%d horas", tempo);
   }

   else
   {
        tempo = horaFinal - horaInicial;
        printf("%d", tempo);
   }
}
