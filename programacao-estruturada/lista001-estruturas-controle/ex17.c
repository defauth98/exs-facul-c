#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia, mes, ano;

    printf("Dia: ");
    scanf("%d", &dia);

    printf("Mes: ");
    scanf("%f", &mes);

    printf("Ano: ");
    scanf("%f", &ano);

    if(dia <= 31 && mes == 1){
        printf("%d de Janeiro de %d", dia, ano);
    }

    if(dia <= 28 && mes == 2){
        printf("%d de Fevereiro de %d", dia, ano);
    }

    if(dia <= 31 && mes == 3){
        printf("%d de Março de %d", dia, ano);
    }

    if(dia <= 30 && mes == 4){
        printf("%d de Abril de %d", dia, ano);
    }

    if(dia <= 31 && mes == 5){
        printf("%d de Maio de %d", dia, ano);
    }

    if(dia <= 30 && mes == 6){
        printf("%d de Junho de %d", dia, ano);
    }

    if(dia <= 31 && mes == 7){
        printf("%d de Julho de %d", dia, ano);
    }

    if(dia <= 31 && mes == 8){
        printf("%d de Agosto de %d", dia, ano);
    }

    if(dia <= 30 && mes == 9){
        printf("%d de Setembro de %d", dia, ano);
    }

    if(dia <= 31 && mes == 10){
        printf("%d de Outubro de %d", dia, ano);
    }

    if(dia <= 30 && mes == 11){
        printf("%d de Novembro de %d", dia, ano);
    }

    if(dia <= 31 && mes == 12){
        printf("%d de Dezembro de %d", dia, ano);
    }

    else if (mes > 12){
        printf("Data invalida.");
    }

 return 0;
}
