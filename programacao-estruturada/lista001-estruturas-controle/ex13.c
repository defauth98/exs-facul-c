#include <stdio.h>
#include <stdlib.h>

int main(){
    float notaA, notaB, freq, aulas, aulaAssinada, mediaFinal;

printf("Insira as notas obtidas na disciplina de calculo.\n");

printf("Nota A: ");
scanf("%f", &notaA);
printf("Nota B: ");
scanf("%f", &notaB);

printf("Qual e o numero de aulas ministradas: ");
scanf("%f", &aulas);

printf("Qual e o numero de aulas assistidas: ");
scanf("%f", &aulaAssinada);

freq = (aulaAssinada * 100) / aulas;

mediaFinal = (notaA + notaB) / 2;

    if(mediaFinal >= 6 && freq >= 75){
        printf("Media -> %.2f\n", mediaFinal);
        printf("Frequencia -> %.2f%%\n", freq);
        printf("Voce foi aprovado!\n");
    }
    else{
        printf("Media ->  %.2f\n", mediaFinal);
        printf("Frequencia -> %.2f%%\n", freq);
        printf("Voce foi reprovado!\n");
    }

}
