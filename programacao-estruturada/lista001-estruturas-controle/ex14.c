#include <stdio.h>
#include <stdlib.h>

int main(){
    float indice;

    printf("Indice de poluição: ");
    scanf("%f", &indice);

    if (indice >= 0.05 && indice <= 0.25){
        printf("Indice de poluicao esta aceitavel\n");
    }

    else if (indice >= 0.3 && indice < 0.4){
        printf("As industrias do 1 grupo terao que suspender suas atividades\n");
    }

    else if (indice >= 0.4 && indice < 0.5){
        printf("As industrias do 1 e 2 grupo terao que suspender suas atividades\n");
    }

    else if (indice >= 0.5){
        printf("As industrias dos 3 grupos terao que suspender suas atividades\n");
    }

 return 0;
}
