#include <stdio.h>

int main() {
    int lados;
    float medidaLado;

    printf("Qantidade de lados: ");
    scanf("%d", &lados);

    printf("Valor do lado: ");
    scanf("%f", &medidaLado);

    if(lados == 3){
        printf("Triangulo \n\n Perimetro -> %.2f\n", medidaLado + medidaLado + medidaLado);
    }
    else if(lados == 4){
        printf("Quadrado \n\n Area -> %.2f\n", medidaLado * medidaLado);
    }
    else if(lados == 5) {
        printf("Pentagono\n");
    }
    else if(lados < 3){
        printf("Nao e um poligono\n");
    }
    else if(lados > 5){
        printf("Poligono nao identificado\n");
    }

    return 0;
}