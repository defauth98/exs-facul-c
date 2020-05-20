#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y;

    printf("Valor de X:");
    scanf("%f", &x);

    printf("Valor de Y:");
    scanf("%f", &y);

    if(x > 0 && y > 0){
        printf("Primeiro quadrante");
    }
    else if(x < 0 && y > 0){
        printf("Segundo quadrante");
    }
    else if(x < 0 && y < 0){
        printf("Terceiro quadrante");
    }
    else if(x > 0 && y < 0){
        printf("Quarto quadrante");
    }
    else if (x == 0 && y != 0){
        printf("Esta sobre o eixo Y");
    }
    else if(x != 0 && y == 0){
        printf("Esta sobre o eixo X.");
    }
    else{
        printf("X e Y estao no ponto 0.");
    }


}
